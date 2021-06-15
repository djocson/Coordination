#include "Coordination.h"
#include "stdlib.h"
#include "time.h"
#include "thread"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault;

	Coordination::Coordination form;
	Application::Run(% form);
}
//Hands on/off
System::Void Coordination::Coordination::handsCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	handsPanel->Visible = handsCheckBox->Checked;
}
//Legs on/off
System::Void Coordination::Coordination::legsCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	legsPanel->Visible = legsCheckBox->Checked;
}
//Go on
System::Void Coordination::Coordination::startButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	for each (Control ^ cnt in Controls) {
		RadioButton^ rb = dynamic_cast<RadioButton^>(cnt);
		if (rb != nullptr)
			if (rb->Checked)
				freq = 60000.0 / Convert::ToInt16(rb->Text);
	}

	thdrwng = gcnew Thread(gcnew ThreadStart(this, &Coordination::startDrwng));
	thdrwng->Start();
}
//в отдельном потоке красит поочередно элементы
System::Void Coordination::Coordination::startDrwng()
{
	// делаем недоступной кнопку startButton
	startButton->BeginInvoke(gcnew InvokeDelegateStartButtonEnabled(this, &Coordination::SetStartButtonEnabled), false);

	for (int q = 1; q <= 12; q++) {
		this->handsPanel->BeginInvoke(gcnew InvokeDelegateSetColorLabel(this, &Coordination::SetColorLabel), q, true, "hand");
		this->legsPanel->BeginInvoke(gcnew InvokeDelegateSetColorLabel(this, &Coordination::SetColorLabel), q, true, "leg");
		_sleep(freq);
		//System::Threading::Thread::Sleep(200);
		this->handsPanel->BeginInvoke(gcnew InvokeDelegateSetColorLabel(this, &Coordination::SetColorLabel), q, false, "hand");
		this->legsPanel->BeginInvoke(gcnew InvokeDelegateSetColorLabel(this, &Coordination::SetColorLabel), q, false, "leg");
		//_sleep(freq - 200);
	}
	// делаем доступной кнопку startButton
	startButton->BeginInvoke(gcnew InvokeDelegateStartButtonEnabled(this, &Coordination::SetStartButtonEnabled), true);
}
//about
System::Void Coordination::Coordination::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Цепочки для развития координации\n              v 1.0\n       Developed by grrey", "О программе");
}
//Generate new chain
System::Void Coordination::Coordination::genButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	startButton->Enabled = true;

	srand(time(NULL));
	String^ val = gcnew String("");
	for (int q = 1; q <= 12; q++) {
		int h = rand() % 100;
		int l = rand() % 100;

		if (h < 12) val = " ";
		else if (h < 56) val = "L";
		else val = "R";

		this->handsPanel->Controls["handLabel" + Convert::ToString(q)]->Text = val;

		if (l < 12) val = " ";
		else if (l < 56) val = "L";
		else val = "R";

		this->legsPanel->Controls["legLabel" + Convert::ToString(q)]->Text = val;
	}
}
//убивает поток с проигрыванием
System::Void Coordination::Coordination::stopButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		thdrwng->Abort();
	}
	catch (...) {}

	for (int q = 1; q <= 12; q++) {
		this->handsPanel->Controls["handLabel" + Convert::ToString(q)]->ForeColor = Color::Black;
		this->legsPanel->Controls["legLabel" + Convert::ToString(q)]->ForeColor = Color::Black;
	}

	SetStartButtonEnabled(true);
}
//help
System::Void Coordination::Coordination::helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Readme^ form1 = gcnew Readme;
	form1->Show();
}
// не, ну тут-то все понятно же :)
System::Void Coordination::Coordination::Coordination_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	try {
		thdrwng->Abort();
	}
	catch (...) {}
}
// метод устанавливает свойство Enabled для startButton и stopButton
System::Void Coordination::Coordination::SetStartButtonEnabled(bool enabled) {
	startButton->Enabled = enabled;
	startButton->Visible = enabled;
	stopButton->Visible = !enabled;
	stopButton->Enabled = !enabled;
	genButton->Enabled = enabled;
}
// метод для изменения цвета label
System::Void Coordination::Coordination::SetColorLabel(int q, bool b, String^ s) {
	if (b) {
		s->Equals("hand") ? 
			this->Controls[s + "sPanel"]->Controls[s + "Label" + Convert::ToString(q)]->ForeColor = Color::Red : 
			this->Controls[s + "sPanel"]->Controls[s + "Label" + Convert::ToString(q)]->ForeColor = Color::Green;
		this->Controls[s + "sPanel"]->Controls[s + "Label" + Convert::ToString(q)]->Refresh();
	}
	else {
		this->Controls[s + "sPanel"]->Controls[s + "Label" + Convert::ToString(q)]->ForeColor = Color::Black;
		this->Controls[s + "sPanel"]->Controls[s + "Label" + Convert::ToString(q)]->Refresh();
	}
}



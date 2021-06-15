#pragma once
#include "Readme.h"

namespace Coordination {

	using namespace System;
	using namespace System::Threading;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Coordination
	/// </summary>
	public ref class Coordination : public System::Windows::Forms::Form
	{
	public:
		Coordination(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Coordination()
		{
			if (components)
			{
				delete components;
			}
		}

		double freq = 1.2;

	private: Thread^ thdrwng;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	protected:

	private: System::Windows::Forms::CheckBox^ handsCheckBox;
	private: System::Windows::Forms::CheckBox^ legsCheckBox;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Label^ handLabel1;
	private: System::Windows::Forms::Label^ legLabel1;

	private: System::Windows::Forms::Label^ handLabel2;
	private: System::Windows::Forms::Label^ legLabel2;

	private: System::Windows::Forms::Label^ handLabel3;
	private: System::Windows::Forms::Label^ legLabel3;

	private: System::Windows::Forms::Label^ handLabel4;
	private: System::Windows::Forms::Label^ legLabel4;

	private: System::Windows::Forms::Label^ handLabel5;
	private: System::Windows::Forms::Label^ legLabel5;

	private: System::Windows::Forms::Label^ handLabel6;
	private: System::Windows::Forms::Label^ legLabel6;


	private: System::Windows::Forms::Label^ handLabel7;
	private: System::Windows::Forms::Label^ legLabel7;


	private: System::Windows::Forms::Label^ handLabel8;
	private: System::Windows::Forms::Label^ legLabel8;


	private: System::Windows::Forms::Label^ handLabel9;
	private: System::Windows::Forms::Label^ legLabel9;


	private: System::Windows::Forms::Label^ handLabel10;
	private: System::Windows::Forms::Label^ legLabel10;


	private: System::Windows::Forms::Label^ handLabel11;
	private: System::Windows::Forms::Label^ legLabel11;


	private: System::Windows::Forms::Label^ handLabel12;
	private: System::Windows::Forms::Label^ legLabel12;
	private: System::Windows::Forms::Panel^ legsPanel;
	private: System::Windows::Forms::Panel^ handsPanel;


	private: System::Windows::Forms::Button^ genButton;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ startToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ genToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ rateRadioButton1;
	private: System::Windows::Forms::RadioButton^ rateRadioButton2;
	private: System::Windows::Forms::RadioButton^ rateRadioButton3;
	private: System::Windows::Forms::RadioButton^ rateRadioButton4;
	private: System::Windows::Forms::RadioButton^ rateRadioButton5;
	private: System::Windows::Forms::Label^ speedLabel;
	private: System::Windows::Forms::Button^ stopButton;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->genToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->handsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->legsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->handLabel1 = (gcnew System::Windows::Forms::Label());
			this->legLabel1 = (gcnew System::Windows::Forms::Label());
			this->handLabel2 = (gcnew System::Windows::Forms::Label());
			this->legLabel2 = (gcnew System::Windows::Forms::Label());
			this->handLabel3 = (gcnew System::Windows::Forms::Label());
			this->legLabel3 = (gcnew System::Windows::Forms::Label());
			this->handLabel4 = (gcnew System::Windows::Forms::Label());
			this->legLabel4 = (gcnew System::Windows::Forms::Label());
			this->handLabel5 = (gcnew System::Windows::Forms::Label());
			this->legLabel5 = (gcnew System::Windows::Forms::Label());
			this->handLabel6 = (gcnew System::Windows::Forms::Label());
			this->legLabel6 = (gcnew System::Windows::Forms::Label());
			this->handLabel7 = (gcnew System::Windows::Forms::Label());
			this->legLabel7 = (gcnew System::Windows::Forms::Label());
			this->handLabel8 = (gcnew System::Windows::Forms::Label());
			this->legLabel8 = (gcnew System::Windows::Forms::Label());
			this->handLabel9 = (gcnew System::Windows::Forms::Label());
			this->legLabel9 = (gcnew System::Windows::Forms::Label());
			this->handLabel10 = (gcnew System::Windows::Forms::Label());
			this->legLabel10 = (gcnew System::Windows::Forms::Label());
			this->handLabel11 = (gcnew System::Windows::Forms::Label());
			this->legLabel11 = (gcnew System::Windows::Forms::Label());
			this->handLabel12 = (gcnew System::Windows::Forms::Label());
			this->legLabel12 = (gcnew System::Windows::Forms::Label());
			this->legsPanel = (gcnew System::Windows::Forms::Panel());
			this->handsPanel = (gcnew System::Windows::Forms::Panel());
			this->genButton = (gcnew System::Windows::Forms::Button());
			this->rateRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->rateRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->rateRadioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->rateRadioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->rateRadioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->speedLabel = (gcnew System::Windows::Forms::Label());
			this->stopButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->legsPanel->SuspendLayout();
			this->handsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->aboutToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(604, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->startToolStripMenuItem,
					this->genToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->menuToolStripMenuItem->Text = L"Меню";
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->startToolStripMenuItem->Text = L"Старт";
			this->startToolStripMenuItem->Click += gcnew System::EventHandler(this, &Coordination::startButton_Click);
			// 
			// genToolStripMenuItem
			// 
			this->genToolStripMenuItem->Name = L"genToolStripMenuItem";
			this->genToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->genToolStripMenuItem->Text = L"Создать новую цепочку";
			this->genToolStripMenuItem->Click += gcnew System::EventHandler(this, &Coordination::genButton_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->exitToolStripMenuItem->Text = L"Выход";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Coordination::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->aboutToolStripMenuItem->Text = L"О программе";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Coordination::aboutToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->helpToolStripMenuItem->Text = L"Помощь";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Coordination::helpToolStripMenuItem_Click);
			// 
			// handsCheckBox
			// 
			this->handsCheckBox->AutoSize = true;
			this->handsCheckBox->Checked = true;
			this->handsCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->handsCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->handsCheckBox->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->handsCheckBox->Location = System::Drawing::Point(25, 54);
			this->handsCheckBox->Name = L"handsCheckBox";
			this->handsCheckBox->Size = System::Drawing::Size(58, 22);
			this->handsCheckBox->TabIndex = 1;
			this->handsCheckBox->Text = L"Руки";
			this->handsCheckBox->UseVisualStyleBackColor = true;
			this->handsCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Coordination::handsCheckBox_CheckedChanged);
			// 
			// legsCheckBox
			// 
			this->legsCheckBox->AutoSize = true;
			this->legsCheckBox->Checked = true;
			this->legsCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->legsCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->legsCheckBox->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->legsCheckBox->Location = System::Drawing::Point(25, 106);
			this->legsCheckBox->Name = L"legsCheckBox";
			this->legsCheckBox->Size = System::Drawing::Size(58, 22);
			this->legsCheckBox->TabIndex = 1;
			this->legsCheckBox->Text = L"Ноги";
			this->legsCheckBox->UseVisualStyleBackColor = true;
			this->legsCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Coordination::legsCheckBox_CheckedChanged);
			// 
			// startButton
			// 
			this->startButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startButton->Enabled = false;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startButton->Location = System::Drawing::Point(494, 159);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(87, 47);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Начать";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &Coordination::startButton_Click);
			// 
			// handLabel1
			// 
			this->handLabel1->AutoSize = true;
			this->handLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->handLabel1->ForeColor = System::Drawing::Color::Black;
			this->handLabel1->Location = System::Drawing::Point(8, 11);
			this->handLabel1->Name = L"handLabel1";
			this->handLabel1->Size = System::Drawing::Size(30, 20);
			this->handLabel1->TabIndex = 3;
			this->handLabel1->Text = L"LR";
			// 
			// legLabel1
			// 
			this->legLabel1->AutoSize = true;
			this->legLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel1->Location = System::Drawing::Point(8, 12);
			this->legLabel1->Name = L"legLabel1";
			this->legLabel1->Size = System::Drawing::Size(30, 20);
			this->legLabel1->TabIndex = 3;
			this->legLabel1->Text = L"LR";
			// 
			// handLabel2
			// 
			this->handLabel2->AutoSize = true;
			this->handLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel2->Location = System::Drawing::Point(44, 11);
			this->handLabel2->Name = L"handLabel2";
			this->handLabel2->Size = System::Drawing::Size(30, 20);
			this->handLabel2->TabIndex = 3;
			this->handLabel2->Text = L"LR";
			// 
			// legLabel2
			// 
			this->legLabel2->AutoSize = true;
			this->legLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel2->Location = System::Drawing::Point(44, 12);
			this->legLabel2->Name = L"legLabel2";
			this->legLabel2->Size = System::Drawing::Size(30, 20);
			this->legLabel2->TabIndex = 3;
			this->legLabel2->Text = L"LR";
			// 
			// handLabel3
			// 
			this->handLabel3->AutoSize = true;
			this->handLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel3->Location = System::Drawing::Point(80, 11);
			this->handLabel3->Name = L"handLabel3";
			this->handLabel3->Size = System::Drawing::Size(30, 20);
			this->handLabel3->TabIndex = 3;
			this->handLabel3->Text = L"LR";
			// 
			// legLabel3
			// 
			this->legLabel3->AutoSize = true;
			this->legLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel3->Location = System::Drawing::Point(80, 12);
			this->legLabel3->Name = L"legLabel3";
			this->legLabel3->Size = System::Drawing::Size(30, 20);
			this->legLabel3->TabIndex = 3;
			this->legLabel3->Text = L"LR";
			// 
			// handLabel4
			// 
			this->handLabel4->AutoSize = true;
			this->handLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel4->Location = System::Drawing::Point(116, 11);
			this->handLabel4->Name = L"handLabel4";
			this->handLabel4->Size = System::Drawing::Size(30, 20);
			this->handLabel4->TabIndex = 3;
			this->handLabel4->Text = L"LR";
			// 
			// legLabel4
			// 
			this->legLabel4->AutoSize = true;
			this->legLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel4->Location = System::Drawing::Point(116, 12);
			this->legLabel4->Name = L"legLabel4";
			this->legLabel4->Size = System::Drawing::Size(30, 20);
			this->legLabel4->TabIndex = 3;
			this->legLabel4->Text = L"LR";
			// 
			// handLabel5
			// 
			this->handLabel5->AutoSize = true;
			this->handLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel5->Location = System::Drawing::Point(170, 11);
			this->handLabel5->Name = L"handLabel5";
			this->handLabel5->Size = System::Drawing::Size(30, 20);
			this->handLabel5->TabIndex = 3;
			this->handLabel5->Text = L"LR";
			// 
			// legLabel5
			// 
			this->legLabel5->AutoSize = true;
			this->legLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel5->Location = System::Drawing::Point(170, 12);
			this->legLabel5->Name = L"legLabel5";
			this->legLabel5->Size = System::Drawing::Size(30, 20);
			this->legLabel5->TabIndex = 3;
			this->legLabel5->Text = L"LR";
			// 
			// handLabel6
			// 
			this->handLabel6->AutoSize = true;
			this->handLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel6->Location = System::Drawing::Point(206, 11);
			this->handLabel6->Name = L"handLabel6";
			this->handLabel6->Size = System::Drawing::Size(30, 20);
			this->handLabel6->TabIndex = 3;
			this->handLabel6->Text = L"LR";
			// 
			// legLabel6
			// 
			this->legLabel6->AutoSize = true;
			this->legLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel6->Location = System::Drawing::Point(206, 12);
			this->legLabel6->Name = L"legLabel6";
			this->legLabel6->Size = System::Drawing::Size(30, 20);
			this->legLabel6->TabIndex = 3;
			this->legLabel6->Text = L"LR";
			// 
			// handLabel7
			// 
			this->handLabel7->AutoSize = true;
			this->handLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel7->Location = System::Drawing::Point(242, 11);
			this->handLabel7->Name = L"handLabel7";
			this->handLabel7->Size = System::Drawing::Size(30, 20);
			this->handLabel7->TabIndex = 3;
			this->handLabel7->Text = L"LR";
			// 
			// legLabel7
			// 
			this->legLabel7->AutoSize = true;
			this->legLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel7->Location = System::Drawing::Point(242, 12);
			this->legLabel7->Name = L"legLabel7";
			this->legLabel7->Size = System::Drawing::Size(30, 20);
			this->legLabel7->TabIndex = 3;
			this->legLabel7->Text = L"LR";
			// 
			// handLabel8
			// 
			this->handLabel8->AutoSize = true;
			this->handLabel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel8->Location = System::Drawing::Point(278, 11);
			this->handLabel8->Name = L"handLabel8";
			this->handLabel8->Size = System::Drawing::Size(30, 20);
			this->handLabel8->TabIndex = 3;
			this->handLabel8->Text = L"LR";
			// 
			// legLabel8
			// 
			this->legLabel8->AutoSize = true;
			this->legLabel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel8->Location = System::Drawing::Point(278, 12);
			this->legLabel8->Name = L"legLabel8";
			this->legLabel8->Size = System::Drawing::Size(30, 20);
			this->legLabel8->TabIndex = 3;
			this->legLabel8->Text = L"LR";
			// 
			// handLabel9
			// 
			this->handLabel9->AutoSize = true;
			this->handLabel9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel9->Location = System::Drawing::Point(329, 11);
			this->handLabel9->Name = L"handLabel9";
			this->handLabel9->Size = System::Drawing::Size(30, 20);
			this->handLabel9->TabIndex = 3;
			this->handLabel9->Text = L"LR";
			// 
			// legLabel9
			// 
			this->legLabel9->AutoSize = true;
			this->legLabel9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel9->Location = System::Drawing::Point(329, 12);
			this->legLabel9->Name = L"legLabel9";
			this->legLabel9->Size = System::Drawing::Size(30, 20);
			this->legLabel9->TabIndex = 3;
			this->legLabel9->Text = L"LR";
			// 
			// handLabel10
			// 
			this->handLabel10->AutoSize = true;
			this->handLabel10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel10->Location = System::Drawing::Point(365, 11);
			this->handLabel10->Name = L"handLabel10";
			this->handLabel10->Size = System::Drawing::Size(30, 20);
			this->handLabel10->TabIndex = 3;
			this->handLabel10->Text = L"LR";
			// 
			// legLabel10
			// 
			this->legLabel10->AutoSize = true;
			this->legLabel10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel10->Location = System::Drawing::Point(365, 12);
			this->legLabel10->Name = L"legLabel10";
			this->legLabel10->Size = System::Drawing::Size(30, 20);
			this->legLabel10->TabIndex = 3;
			this->legLabel10->Text = L"LR";
			// 
			// handLabel11
			// 
			this->handLabel11->AutoSize = true;
			this->handLabel11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel11->Location = System::Drawing::Point(401, 11);
			this->handLabel11->Name = L"handLabel11";
			this->handLabel11->Size = System::Drawing::Size(30, 20);
			this->handLabel11->TabIndex = 3;
			this->handLabel11->Text = L"LR";
			// 
			// legLabel11
			// 
			this->legLabel11->AutoSize = true;
			this->legLabel11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel11->Location = System::Drawing::Point(401, 12);
			this->legLabel11->Name = L"legLabel11";
			this->legLabel11->Size = System::Drawing::Size(30, 20);
			this->legLabel11->TabIndex = 3;
			this->legLabel11->Text = L"LR";
			// 
			// handLabel12
			// 
			this->handLabel12->AutoSize = true;
			this->handLabel12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->handLabel12->Location = System::Drawing::Point(437, 11);
			this->handLabel12->Name = L"handLabel12";
			this->handLabel12->Size = System::Drawing::Size(30, 20);
			this->handLabel12->TabIndex = 3;
			this->handLabel12->Text = L"LR";
			// 
			// legLabel12
			// 
			this->legLabel12->AutoSize = true;
			this->legLabel12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->legLabel12->Location = System::Drawing::Point(437, 12);
			this->legLabel12->Name = L"legLabel12";
			this->legLabel12->Size = System::Drawing::Size(30, 20);
			this->legLabel12->TabIndex = 3;
			this->legLabel12->Text = L"LR";
			// 
			// legsPanel
			// 
			this->legsPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->legsPanel->Controls->Add(this->legLabel1);
			this->legsPanel->Controls->Add(this->legLabel12);
			this->legsPanel->Controls->Add(this->legLabel2);
			this->legsPanel->Controls->Add(this->legLabel3);
			this->legsPanel->Controls->Add(this->legLabel11);
			this->legsPanel->Controls->Add(this->legLabel4);
			this->legsPanel->Controls->Add(this->legLabel5);
			this->legsPanel->Controls->Add(this->legLabel10);
			this->legsPanel->Controls->Add(this->legLabel6);
			this->legsPanel->Controls->Add(this->legLabel7);
			this->legsPanel->Controls->Add(this->legLabel9);
			this->legsPanel->Controls->Add(this->legLabel8);
			this->legsPanel->Location = System::Drawing::Point(89, 94);
			this->legsPanel->Name = L"legsPanel";
			this->legsPanel->Size = System::Drawing::Size(491, 45);
			this->legsPanel->TabIndex = 4;
			// 
			// handsPanel
			// 
			this->handsPanel->Controls->Add(this->handLabel12);
			this->handsPanel->Controls->Add(this->handLabel1);
			this->handsPanel->Controls->Add(this->handLabel2);
			this->handsPanel->Controls->Add(this->handLabel11);
			this->handsPanel->Controls->Add(this->handLabel3);
			this->handsPanel->Controls->Add(this->handLabel10);
			this->handsPanel->Controls->Add(this->handLabel4);
			this->handsPanel->Controls->Add(this->handLabel9);
			this->handsPanel->Controls->Add(this->handLabel5);
			this->handsPanel->Controls->Add(this->handLabel8);
			this->handsPanel->Controls->Add(this->handLabel6);
			this->handsPanel->Controls->Add(this->handLabel7);
			this->handsPanel->Location = System::Drawing::Point(89, 43);
			this->handsPanel->Name = L"handsPanel";
			this->handsPanel->Size = System::Drawing::Size(491, 45);
			this->handsPanel->TabIndex = 5;
			// 
			// genButton
			// 
			this->genButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->genButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->genButton->Location = System::Drawing::Point(380, 159);
			this->genButton->Name = L"genButton";
			this->genButton->Size = System::Drawing::Size(108, 47);
			this->genButton->TabIndex = 2;
			this->genButton->Text = L"Новая цепочка";
			this->genButton->UseVisualStyleBackColor = true;
			this->genButton->Click += gcnew System::EventHandler(this, &Coordination::genButton_Click);
			// 
			// rateRadioButton1
			// 
			this->rateRadioButton1->AutoSize = true;
			this->rateRadioButton1->CheckAlign = System::Drawing::ContentAlignment::TopCenter;
			this->rateRadioButton1->Checked = true;
			this->rateRadioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rateRadioButton1->Location = System::Drawing::Point(87, 168);
			this->rateRadioButton1->Name = L"rateRadioButton1";
			this->rateRadioButton1->Size = System::Drawing::Size(23, 30);
			this->rateRadioButton1->TabIndex = 6;
			this->rateRadioButton1->TabStop = true;
			this->rateRadioButton1->Text = L"50";
			this->rateRadioButton1->UseVisualStyleBackColor = true;
			// 
			// rateRadioButton2
			// 
			this->rateRadioButton2->AutoSize = true;
			this->rateRadioButton2->CheckAlign = System::Drawing::ContentAlignment::TopCenter;
			this->rateRadioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rateRadioButton2->Location = System::Drawing::Point(116, 168);
			this->rateRadioButton2->Name = L"rateRadioButton2";
			this->rateRadioButton2->Size = System::Drawing::Size(23, 30);
			this->rateRadioButton2->TabIndex = 6;
			this->rateRadioButton2->Text = L"70";
			this->rateRadioButton2->UseVisualStyleBackColor = true;
			// 
			// rateRadioButton3
			// 
			this->rateRadioButton3->AutoSize = true;
			this->rateRadioButton3->CheckAlign = System::Drawing::ContentAlignment::TopCenter;
			this->rateRadioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rateRadioButton3->Location = System::Drawing::Point(144, 168);
			this->rateRadioButton3->Name = L"rateRadioButton3";
			this->rateRadioButton3->Size = System::Drawing::Size(23, 30);
			this->rateRadioButton3->TabIndex = 6;
			this->rateRadioButton3->Text = L"90";
			this->rateRadioButton3->UseVisualStyleBackColor = true;
			// 
			// rateRadioButton4
			// 
			this->rateRadioButton4->AutoSize = true;
			this->rateRadioButton4->CheckAlign = System::Drawing::ContentAlignment::TopCenter;
			this->rateRadioButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rateRadioButton4->Location = System::Drawing::Point(173, 168);
			this->rateRadioButton4->Name = L"rateRadioButton4";
			this->rateRadioButton4->Size = System::Drawing::Size(29, 30);
			this->rateRadioButton4->TabIndex = 6;
			this->rateRadioButton4->Text = L"150";
			this->rateRadioButton4->UseVisualStyleBackColor = true;
			// 
			// rateRadioButton5
			// 
			this->rateRadioButton5->AutoSize = true;
			this->rateRadioButton5->CheckAlign = System::Drawing::ContentAlignment::TopCenter;
			this->rateRadioButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rateRadioButton5->Location = System::Drawing::Point(208, 168);
			this->rateRadioButton5->Name = L"rateRadioButton5";
			this->rateRadioButton5->Size = System::Drawing::Size(29, 30);
			this->rateRadioButton5->TabIndex = 6;
			this->rateRadioButton5->Text = L"200";
			this->rateRadioButton5->UseVisualStyleBackColor = true;
			// 
			// speedLabel
			// 
			this->speedLabel->AutoSize = true;
			this->speedLabel->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->speedLabel->Location = System::Drawing::Point(28, 173);
			this->speedLabel->Name = L"speedLabel";
			this->speedLabel->Size = System::Drawing::Size(42, 18);
			this->speedLabel->TabIndex = 7;
			this->speedLabel->Text = L"Темп";
			// 
			// stopButton
			// 
			this->stopButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->stopButton->Enabled = false;
			this->stopButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stopButton->Location = System::Drawing::Point(493, 159);
			this->stopButton->Name = L"stopButton";
			this->stopButton->Size = System::Drawing::Size(87, 47);
			this->stopButton->TabIndex = 2;
			this->stopButton->Text = L"Стоп";
			this->stopButton->UseVisualStyleBackColor = true;
			this->stopButton->Visible = false;
			this->stopButton->Click += gcnew System::EventHandler(this, &Coordination::stopButton_Click);
			// 
			// Coordination
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 231);
			this->Controls->Add(this->rateRadioButton1);
			this->Controls->Add(this->speedLabel);
			this->Controls->Add(this->handsPanel);
			this->Controls->Add(this->rateRadioButton2);
			this->Controls->Add(this->legsPanel);
			this->Controls->Add(this->rateRadioButton5);
			this->Controls->Add(this->rateRadioButton3);
			this->Controls->Add(this->genButton);
			this->Controls->Add(this->rateRadioButton4);
			this->Controls->Add(this->stopButton);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->legsCheckBox);
			this->Controls->Add(this->handsCheckBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(620, 270);
			this->MinimumSize = System::Drawing::Size(620, 270);
			this->Name = L"Coordination";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Coordination";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Coordination::Coordination_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->legsPanel->ResumeLayout(false);
			this->legsPanel->PerformLayout();
			this->handsPanel->ResumeLayout(false);
			this->handsPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			thdrwng->Abort();
		}
		catch (...) {}
		
		Application::Exit();
	}
	private: System::Void handsCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void legsCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void startDrwng();
	public: System::Void SetStartButtonEnabled(bool enabled);
	public: System::Void Coordination::Coordination::SetColorLabel(int q, bool b, String^ s);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void genButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void stopButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Coordination_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		   // делегат для изменения свойства Enabled у startButton
		   delegate void InvokeDelegateStartButtonEnabled(bool enabled);
		   // делегат для изменения свойств label
		   delegate void InvokeDelegateSetColorLabel(int q, bool b, String^ s);
	};
}

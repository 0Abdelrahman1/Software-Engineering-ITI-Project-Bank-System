#pragma once
#include "Bank.h"
#include <msclr/marshal_cppstd.h>

namespace BankSystem {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			auto& bank = Bank::Instance();
			//text box
			this->textBox1->Text = marshal_as<System::String^>(bank.nextID());
			this->textBox1->ForeColor = System::Drawing::Color::Silver;
			// combo box
			for (auto& u : bank.users)
				this->comboBox1->Items->Add(marshal_as<System::String^>(u.id));
		}

	protected:
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ pn_show;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Panel^ pn_add;

	private: System::Windows::Forms::Panel^ pn_find;
	private: System::Windows::Forms::Panel^ pn_withdraw;
	private: System::Windows::Forms::Panel^ pn_deposit;
	private: System::Windows::Forms::Panel^ pn_transfer;










	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;


	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::ComboBox^ comboBox1;































	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pn_show = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pn_add = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pn_find = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->pn_withdraw = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->pn_deposit = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->pn_transfer = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pn_show->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->pn_add->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->pn_find->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->pn_withdraw->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->pn_deposit->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->pn_transfer->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gold;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1009, 83);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(446, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BANK";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 83);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1009, 72);
			this->panel2->TabIndex = 1;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(868, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(141, 72);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Log out";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AdminForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Dock = System::Windows::Forms::DockStyle::Left;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(725, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(145, 72);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Transfer";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AdminForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Dock = System::Windows::Forms::DockStyle::Left;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(580, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 72);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Deposit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Dock = System::Windows::Forms::DockStyle::Left;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(435, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 72);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Withdraw";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->Dock = System::Windows::Forms::DockStyle::Left;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(290, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 72);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Find User";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Dock = System::Windows::Forms::DockStyle::Left;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(145, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 72);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add New User";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Dock = System::Windows::Forms::DockStyle::Left;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Show All Users";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// pn_show
			// 
			this->pn_show->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_show->Controls->Add(this->dataGridView1);
			this->pn_show->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_show->Location = System::Drawing::Point(0, 155);
			this->pn_show->Name = L"pn_show";
			this->pn_show->Size = System::Drawing::Size(1009, 462);
			this->pn_show->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column5
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->Size = System::Drawing::Size(1009, 462);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Phone";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Balance";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// pn_add
			// 
			this->pn_add->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_add->Controls->Add(this->groupBox1);
			this->pn_add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_add->Location = System::Drawing::Point(0, 155);
			this->pn_add->Name = L"pn_add";
			this->pn_add->Size = System::Drawing::Size(1009, 462);
			this->pn_add->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1009, 462);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" Add New User ";
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::Green;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(835, 213);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(141, 72);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Add";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AdminForm::button8_Click_1);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.5F)));
			this->tableLayoutPanel1->Controls->Add(this->textBox5, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox4, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(70, 88);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(682, 204);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox5->Location = System::Drawing::Point(258, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(421, 36);
			this->textBox5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gold;
			this->label6->Dock = System::Windows::Forms::DockStyle::Right;
			this->label6->Location = System::Drawing::Point(140, 165);
			this->label6->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 34);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Balance:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox4
			// 
			this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox4->Location = System::Drawing::Point(258, 123);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(421, 36);
			this->textBox4->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gold;
			this->label5->Dock = System::Windows::Forms::DockStyle::Right;
			this->label5->Location = System::Drawing::Point(158, 125);
			this->label5->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 30);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Phone:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox3
			// 
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox3->Location = System::Drawing::Point(258, 83);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(421, 36);
			this->textBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gold;
			this->label4->Dock = System::Windows::Forms::DockStyle::Right;
			this->label4->Location = System::Drawing::Point(118, 85);
			this->label4->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 30);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(258, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(421, 36);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gold;
			this->label3->Dock = System::Windows::Forms::DockStyle::Right;
			this->label3->Location = System::Drawing::Point(163, 45);
			this->label3->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Name:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->Dock = System::Windows::Forms::DockStyle::Right;
			this->label2->Location = System::Drawing::Point(203, 5);
			this->label2->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 30);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(258, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(421, 36);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBox1_TextChanged);
			// 
			// pn_find
			// 
			this->pn_find->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_find->Controls->Add(this->groupBox5);
			this->pn_find->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_find->Location = System::Drawing::Point(0, 155);
			this->pn_find->Name = L"pn_find";
			this->pn_find->Size = System::Drawing::Size(1009, 462);
			this->pn_find->TabIndex = 4;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->tableLayoutPanel3);
			this->groupBox5->Controls->Add(this->tableLayoutPanel2);
			this->groupBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(0, 0);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(1009, 462);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L" Find User ";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30.76923F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				69.23077F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				181)));
			this->tableLayoutPanel3->Controls->Add(this->label12, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->button9, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->comboBox1, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(135, 34);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(792, 42);
			this->tableLayoutPanel3->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gold;
			this->label12->Dock = System::Windows::Forms::DockStyle::Left;
			this->label12->Location = System::Drawing::Point(0, 5);
			this->label12->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(177, 32);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Search By ID:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button9->BackColor = System::Drawing::Color::Green;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(627, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(162, 36);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Find";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &AdminForm::button9_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(191, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(417, 37);
			this->comboBox1->TabIndex = 4;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.5F)));
			this->tableLayoutPanel2->Controls->Add(this->textBox7, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox8, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox9, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox10, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(12, 173);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(679, 172);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// textBox7
			// 
			this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox7->Location = System::Drawing::Point(257, 132);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(419, 36);
			this->textBox7->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gold;
			this->label8->Dock = System::Windows::Forms::DockStyle::Right;
			this->label8->Location = System::Drawing::Point(139, 134);
			this->label8->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 33);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Balance:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox8
			// 
			this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox8->Location = System::Drawing::Point(257, 89);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(419, 36);
			this->textBox8->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gold;
			this->label9->Dock = System::Windows::Forms::DockStyle::Right;
			this->label9->Location = System::Drawing::Point(157, 91);
			this->label9->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 33);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Phone:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox9
			// 
			this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox9->Location = System::Drawing::Point(257, 46);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(419, 36);
			this->textBox9->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gold;
			this->label10->Dock = System::Windows::Forms::DockStyle::Right;
			this->label10->Location = System::Drawing::Point(162, 48);
			this->label10->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 33);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Name:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Gold;
			this->label11->Dock = System::Windows::Forms::DockStyle::Right;
			this->label11->Location = System::Drawing::Point(202, 5);
			this->label11->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 33);
			this->label11->TabIndex = 0;
			this->label11->Text = L"ID:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox10
			// 
			this->textBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox10->Location = System::Drawing::Point(257, 3);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(419, 36);
			this->textBox10->TabIndex = 1;
			// 
			// pn_withdraw
			// 
			this->pn_withdraw->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_withdraw->Controls->Add(this->groupBox4);
			this->pn_withdraw->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_withdraw->Location = System::Drawing::Point(0, 155);
			this->pn_withdraw->Name = L"pn_withdraw";
			this->pn_withdraw->Size = System::Drawing::Size(1009, 462);
			this->pn_withdraw->TabIndex = 5;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->tableLayoutPanel4);
			this->groupBox4->Controls->Add(this->tableLayoutPanel5);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(0, 0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1009, 462);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L" Withdraw ";
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackColor = System::Drawing::Color::Green;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(740, 136);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(141, 72);
			this->button10->TabIndex = 7;
			this->button10->Text = L"Withdraw";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30.76923F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				69.23077F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				171)));
			this->tableLayoutPanel4->Controls->Add(this->textBox18, 1, 1);
			this->tableLayoutPanel4->Controls->Add(this->label19, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->label13, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox12, 1, 0);
			this->tableLayoutPanel4->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel4->Location = System::Drawing::Point(92, 37);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(792, 88);
			this->tableLayoutPanel4->TabIndex = 6;
			// 
			// textBox18
			// 
			this->textBox18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox18->Location = System::Drawing::Point(246, 47);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(543, 36);
			this->textBox18->TabIndex = 5;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Gold;
			this->label19->Dock = System::Windows::Forms::DockStyle::Right;
			this->label19->Location = System::Drawing::Point(3, 49);
			this->label19->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(240, 34);
			this->label19->TabIndex = 4;
			this->label19->Text = L"Withdraw Amount:";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Gold;
			this->label13->Dock = System::Windows::Forms::DockStyle::Right;
			this->label13->Location = System::Drawing::Point(191, 5);
			this->label13->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 34);
			this->label13->TabIndex = 3;
			this->label13->Text = L"ID:";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox12
			// 
			this->textBox12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox12->Location = System::Drawing::Point(246, 3);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(543, 36);
			this->textBox12->TabIndex = 2;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.5F)));
			this->tableLayoutPanel5->Controls->Add(this->textBox13, 1, 4);
			this->tableLayoutPanel5->Controls->Add(this->label14, 0, 4);
			this->tableLayoutPanel5->Controls->Add(this->textBox14, 1, 3);
			this->tableLayoutPanel5->Controls->Add(this->label15, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->textBox15, 1, 2);
			this->tableLayoutPanel5->Controls->Add(this->label16, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->textBox16, 1, 1);
			this->tableLayoutPanel5->Controls->Add(this->label17, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->label18, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->textBox17, 1, 0);
			this->tableLayoutPanel5->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel5->Location = System::Drawing::Point(12, 213);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 5;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(682, 204);
			this->tableLayoutPanel5->TabIndex = 5;
			// 
			// textBox13
			// 
			this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox13->Location = System::Drawing::Point(258, 163);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(421, 36);
			this->textBox13->TabIndex = 9;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Gold;
			this->label14->Dock = System::Windows::Forms::DockStyle::Right;
			this->label14->Location = System::Drawing::Point(140, 165);
			this->label14->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(115, 34);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Balance:";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox14
			// 
			this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox14->Location = System::Drawing::Point(258, 123);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(421, 36);
			this->textBox14->TabIndex = 7;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Gold;
			this->label15->Dock = System::Windows::Forms::DockStyle::Right;
			this->label15->Location = System::Drawing::Point(118, 125);
			this->label15->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 30);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Password:";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox15
			// 
			this->textBox15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox15->Location = System::Drawing::Point(258, 83);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(421, 36);
			this->textBox15->TabIndex = 5;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Gold;
			this->label16->Dock = System::Windows::Forms::DockStyle::Right;
			this->label16->Location = System::Drawing::Point(158, 85);
			this->label16->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(97, 30);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Phone:";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox16
			// 
			this->textBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox16->Location = System::Drawing::Point(258, 43);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(421, 36);
			this->textBox16->TabIndex = 3;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Gold;
			this->label17->Dock = System::Windows::Forms::DockStyle::Right;
			this->label17->Location = System::Drawing::Point(163, 45);
			this->label17->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(92, 30);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Name:";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Gold;
			this->label18->Dock = System::Windows::Forms::DockStyle::Right;
			this->label18->Location = System::Drawing::Point(203, 5);
			this->label18->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 30);
			this->label18->TabIndex = 0;
			this->label18->Text = L"ID:";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox17
			// 
			this->textBox17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox17->Location = System::Drawing::Point(258, 3);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(421, 36);
			this->textBox17->TabIndex = 1;
			// 
			// pn_deposit
			// 
			this->pn_deposit->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_deposit->Controls->Add(this->groupBox3);
			this->pn_deposit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_deposit->Location = System::Drawing::Point(0, 155);
			this->pn_deposit->Name = L"pn_deposit";
			this->pn_deposit->Size = System::Drawing::Size(1009, 462);
			this->pn_deposit->TabIndex = 6;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->tableLayoutPanel6);
			this->groupBox3->Controls->Add(this->tableLayoutPanel7);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1009, 462);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L" Deposit ";
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackColor = System::Drawing::Color::Green;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(740, 136);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(141, 72);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Deposit";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30.76923F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				69.23077F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				171)));
			this->tableLayoutPanel6->Controls->Add(this->textBox19, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->label20, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label21, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->textBox20, 1, 0);
			this->tableLayoutPanel6->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel6->Location = System::Drawing::Point(92, 37);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(792, 88);
			this->tableLayoutPanel6->TabIndex = 9;
			// 
			// textBox19
			// 
			this->textBox19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox19->Location = System::Drawing::Point(246, 47);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(543, 36);
			this->textBox19->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Gold;
			this->label20->Dock = System::Windows::Forms::DockStyle::Right;
			this->label20->Location = System::Drawing::Point(29, 49);
			this->label20->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(214, 34);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Deposit Amount:";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Gold;
			this->label21->Dock = System::Windows::Forms::DockStyle::Right;
			this->label21->Location = System::Drawing::Point(191, 5);
			this->label21->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(52, 34);
			this->label21->TabIndex = 3;
			this->label21->Text = L"ID:";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox20
			// 
			this->textBox20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox20->Location = System::Drawing::Point(246, 3);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(543, 36);
			this->textBox20->TabIndex = 2;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.5F)));
			this->tableLayoutPanel7->Controls->Add(this->textBox21, 1, 4);
			this->tableLayoutPanel7->Controls->Add(this->label22, 0, 4);
			this->tableLayoutPanel7->Controls->Add(this->textBox22, 1, 3);
			this->tableLayoutPanel7->Controls->Add(this->label23, 0, 3);
			this->tableLayoutPanel7->Controls->Add(this->textBox23, 1, 2);
			this->tableLayoutPanel7->Controls->Add(this->label24, 0, 2);
			this->tableLayoutPanel7->Controls->Add(this->textBox24, 1, 1);
			this->tableLayoutPanel7->Controls->Add(this->label25, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->label26, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->textBox25, 1, 0);
			this->tableLayoutPanel7->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel7->Location = System::Drawing::Point(12, 213);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 5;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(682, 204);
			this->tableLayoutPanel7->TabIndex = 8;
			// 
			// textBox21
			// 
			this->textBox21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox21->Location = System::Drawing::Point(258, 163);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(421, 36);
			this->textBox21->TabIndex = 9;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Gold;
			this->label22->Dock = System::Windows::Forms::DockStyle::Right;
			this->label22->Location = System::Drawing::Point(140, 165);
			this->label22->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(115, 34);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Balance:";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox22
			// 
			this->textBox22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox22->Location = System::Drawing::Point(258, 123);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(421, 36);
			this->textBox22->TabIndex = 7;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Gold;
			this->label23->Dock = System::Windows::Forms::DockStyle::Right;
			this->label23->Location = System::Drawing::Point(118, 125);
			this->label23->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(137, 30);
			this->label23->TabIndex = 6;
			this->label23->Text = L"Password:";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox23
			// 
			this->textBox23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox23->Location = System::Drawing::Point(258, 83);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(421, 36);
			this->textBox23->TabIndex = 5;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Gold;
			this->label24->Dock = System::Windows::Forms::DockStyle::Right;
			this->label24->Location = System::Drawing::Point(158, 85);
			this->label24->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(97, 30);
			this->label24->TabIndex = 4;
			this->label24->Text = L"Phone:";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox24
			// 
			this->textBox24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox24->Location = System::Drawing::Point(258, 43);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(421, 36);
			this->textBox24->TabIndex = 3;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Gold;
			this->label25->Dock = System::Windows::Forms::DockStyle::Right;
			this->label25->Location = System::Drawing::Point(163, 45);
			this->label25->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 30);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Name:";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Gold;
			this->label26->Dock = System::Windows::Forms::DockStyle::Right;
			this->label26->Location = System::Drawing::Point(203, 5);
			this->label26->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(52, 30);
			this->label26->TabIndex = 0;
			this->label26->Text = L"ID:";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox25
			// 
			this->textBox25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox25->Location = System::Drawing::Point(258, 3);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(421, 36);
			this->textBox25->TabIndex = 1;
			// 
			// pn_transfer
			// 
			this->pn_transfer->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_transfer->Controls->Add(this->groupBox2);
			this->pn_transfer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_transfer->Location = System::Drawing::Point(0, 155);
			this->pn_transfer->Name = L"pn_transfer";
			this->pn_transfer->Size = System::Drawing::Size(1009, 462);
			this->pn_transfer->TabIndex = 7;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->tableLayoutPanel8);
			this->groupBox2->Controls->Add(this->tableLayoutPanel9);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1009, 462);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L" Transfer ";
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::Color::Green;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(768, 173);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(141, 72);
			this->button12->TabIndex = 10;
			this->button12->Text = L"Transfer";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30.76923F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				69.23077F)));
			this->tableLayoutPanel8->Controls->Add(this->textBox33, 1, 2);
			this->tableLayoutPanel8->Controls->Add(this->label34, 0, 2);
			this->tableLayoutPanel8->Controls->Add(this->textBox26, 1, 1);
			this->tableLayoutPanel8->Controls->Add(this->label27, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->label28, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->textBox27, 1, 0);
			this->tableLayoutPanel8->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel8->Location = System::Drawing::Point(95, 34);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 3;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.34F)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(817, 113);
			this->tableLayoutPanel8->TabIndex = 9;
			// 
			// textBox33
			// 
			this->textBox33->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox33->Location = System::Drawing::Point(254, 77);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(560, 36);
			this->textBox33->TabIndex = 7;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Gold;
			this->label34->Dock = System::Windows::Forms::DockStyle::Right;
			this->label34->Location = System::Drawing::Point(29, 79);
			this->label34->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(222, 29);
			this->label34->TabIndex = 6;
			this->label34->Text = L"Transfer Amount:";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox26
			// 
			this->textBox26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox26->Location = System::Drawing::Point(254, 40);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(560, 36);
			this->textBox26->TabIndex = 5;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Gold;
			this->label27->Dock = System::Windows::Forms::DockStyle::Right;
			this->label27->Location = System::Drawing::Point(162, 42);
			this->label27->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(89, 27);
			this->label27->TabIndex = 4;
			this->label27->Text = L"To ID:";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Gold;
			this->label28->Dock = System::Windows::Forms::DockStyle::Right;
			this->label28->Location = System::Drawing::Point(130, 5);
			this->label28->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(121, 27);
			this->label28->TabIndex = 3;
			this->label28->Text = L"From ID:";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox27
			// 
			this->textBox27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox27->Location = System::Drawing::Point(254, 3);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(560, 36);
			this->textBox27->TabIndex = 2;
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 2;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.5F)));
			this->tableLayoutPanel9->Controls->Add(this->textBox28, 1, 4);
			this->tableLayoutPanel9->Controls->Add(this->label29, 0, 4);
			this->tableLayoutPanel9->Controls->Add(this->textBox29, 1, 3);
			this->tableLayoutPanel9->Controls->Add(this->label30, 0, 3);
			this->tableLayoutPanel9->Controls->Add(this->textBox30, 1, 2);
			this->tableLayoutPanel9->Controls->Add(this->label31, 0, 2);
			this->tableLayoutPanel9->Controls->Add(this->textBox31, 1, 1);
			this->tableLayoutPanel9->Controls->Add(this->label32, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->label33, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->textBox32, 1, 0);
			this->tableLayoutPanel9->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel9->Location = System::Drawing::Point(15, 213);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 5;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(682, 204);
			this->tableLayoutPanel9->TabIndex = 8;
			// 
			// textBox28
			// 
			this->textBox28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox28->Location = System::Drawing::Point(258, 163);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(421, 36);
			this->textBox28->TabIndex = 9;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Gold;
			this->label29->Dock = System::Windows::Forms::DockStyle::Right;
			this->label29->Location = System::Drawing::Point(140, 165);
			this->label29->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(115, 34);
			this->label29->TabIndex = 8;
			this->label29->Text = L"Balance:";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox29
			// 
			this->textBox29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox29->Location = System::Drawing::Point(258, 123);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(421, 36);
			this->textBox29->TabIndex = 7;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Gold;
			this->label30->Dock = System::Windows::Forms::DockStyle::Right;
			this->label30->Location = System::Drawing::Point(118, 125);
			this->label30->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(137, 30);
			this->label30->TabIndex = 6;
			this->label30->Text = L"Password:";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox30
			// 
			this->textBox30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox30->Location = System::Drawing::Point(258, 83);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(421, 36);
			this->textBox30->TabIndex = 5;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Gold;
			this->label31->Dock = System::Windows::Forms::DockStyle::Right;
			this->label31->Location = System::Drawing::Point(158, 85);
			this->label31->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(97, 30);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Phone:";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox31
			// 
			this->textBox31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox31->Location = System::Drawing::Point(258, 43);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(421, 36);
			this->textBox31->TabIndex = 3;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Gold;
			this->label32->Dock = System::Windows::Forms::DockStyle::Right;
			this->label32->Location = System::Drawing::Point(163, 45);
			this->label32->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(92, 30);
			this->label32->TabIndex = 2;
			this->label32->Text = L"Name:";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Gold;
			this->label33->Dock = System::Windows::Forms::DockStyle::Right;
			this->label33->Location = System::Drawing::Point(203, 5);
			this->label33->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(52, 30);
			this->label33->TabIndex = 0;
			this->label33->Text = L"ID:";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox32
			// 
			this->textBox32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox32->Location = System::Drawing::Point(258, 3);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(421, 36);
			this->textBox32->TabIndex = 1;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1009, 617);
			this->Controls->Add(this->pn_find);
			this->Controls->Add(this->pn_add);
			this->Controls->Add(this->pn_show);
			this->Controls->Add(this->pn_transfer);
			this->Controls->Add(this->pn_deposit);
			this->Controls->Add(this->pn_withdraw);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8, 6, 8, 6);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->Click += gcnew System::EventHandler(this, &AdminForm::button8_Click_1);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->pn_show->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->pn_add->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->pn_find->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->pn_withdraw->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->pn_deposit->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->pn_transfer->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_show->BringToFront();
	
	// clear existing rows
	this->dataGridView1->Rows->Clear();

	// fill rows from native Bank users
	for (const auto& u : Bank::Instance().users)
	{
		System::String^ id = marshal_as<System::String^>(u.id);
		System::String^ name = marshal_as<System::String^>(u.name);
		System::String^ phone = marshal_as<System::String^>(u.phone);
		double balance = u.balance;
		this->dataGridView1->Rows->Add(id, name, phone, balance);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_add->BringToFront();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_find->BringToFront();
	this->comboBox1->Items->Clear();
	for (auto& u : Bank::Instance().users)
		this->comboBox1->Items->Add(marshal_as<String^>(u.id));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_withdraw->BringToFront();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_deposit->BringToFront();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_transfer->BringToFront();
}
private: System::Void SetActiveButton(System::Windows::Forms::Button^ active);
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		auto& bank = Bank::Instance();
		std::string ID = marshal_as<std::string>(this->textBox1->Text);
		std::string name = marshal_as<std::string>(this->textBox2->Text);
		std::string password = marshal_as<std::string>(this->textBox3->Text);
		std::string phone = marshal_as<std::string>(this->textBox4->Text);
		double balance = stod(marshal_as<std::string>(this->textBox5->Text));

		if (ID.empty() || name.empty() || password.empty() || phone.empty())
		{
			MessageBox::Show("All fields are required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (balance < 0)
		{
			MessageBox::Show("Balance cannot be negative.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		bank.users.push_back(User{
			ID,
			name,
			password,
			phone,
			balance
			});
		this->textBox1->Text = marshal_as<String^>(Bank::Instance().nextID());
		this->textBox2->Clear();
		this->textBox3->Clear();
		this->textBox4->Clear();
		this->textBox5->Clear();
		MessageBox::Show("User added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		auto& bank = Bank::Instance();
		String^ selectedID = this->comboBox1->SelectedItem ? this->comboBox1->SelectedItem->ToString() : "";
		if (selectedID->Length == 0)
		{
			MessageBox::Show("Please select a user ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		std::string id = marshal_as<std::string>(selectedID);
		auto user = bank.FindUser(id);
		if (!user)
		{
			MessageBox::Show("User not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		this->textBox10->Text = marshal_as<String^>(user->id);
		this->textBox9->Text = marshal_as<String^>(user->name);
		this->textBox8->Text = marshal_as<String^>(user->phone);
		this->textBox7->Text = marshal_as<String^>(std::to_string(user->balance));
	}
};
}

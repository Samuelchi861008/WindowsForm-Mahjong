#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Mahjong : public System::Windows::Forms::Form
	{
	public:
		Mahjong(void)
		{
			InitializeComponent();
		}

	protected:
		~Mahjong()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected:

	private:
		int total = 0;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::CheckBox^  checkBox16;
	private: System::Windows::Forms::CheckBox^  checkBox17;
	private: System::Windows::Forms::CheckBox^  checkBox18;
	private: System::Windows::Forms::CheckBox^  checkBox19;
	private: System::Windows::Forms::CheckBox^  checkBox20;
	private: System::Windows::Forms::CheckBox^  checkBox21;
	private: System::Windows::Forms::CheckBox^  checkBox22;
	private: System::Windows::Forms::CheckBox^  checkBox23;
	private: System::Windows::Forms::CheckBox^  checkBox24;
	private: System::Windows::Forms::CheckBox^  checkBox25;
	private: System::Windows::Forms::CheckBox^  checkBox26;
	private: System::Windows::Forms::CheckBox^  checkBox27;
	private: System::Windows::Forms::CheckBox^  checkBox28;
	private: System::Windows::Forms::CheckBox^  checkBox29;
	private: System::Windows::Forms::CheckBox^  checkBox30;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::CheckBox^  checkBox31;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::CheckBox^  checkBox32;
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(214, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(332, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"正宗16張麻將台數計算器";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Mahjong::label1_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(12, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"全部清除";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Mahjong::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(703, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"V1.0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(301, 624);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"©Samuel Chi 2017";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(124, 611);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(510, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"※請注意:本軟體所提供之選項僅為正宗玩法台數，其他玩法本軟體恕不負責";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(219, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(315, 35);
			this->label5->TabIndex = 5;
			this->label5->Text = L"0";
			this->label5->Click += gcnew System::EventHandler(this, &Mahjong::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(499, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 19);
			this->label6->TabIndex = 6;
			this->label6->Text = L"台";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(38, 236);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(75, 25);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"自摸";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(553, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 38);
			this->button2->TabIndex = 8;
			this->button2->Text = L"計算";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Mahjong::button2_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(170, 236);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(75, 25);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"門清";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(291, 236);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(75, 25);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"圈風";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox4->ForeColor = System::Drawing::Color::White;
			this->checkBox4->Location = System::Drawing::Point(410, 236);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(75, 25);
			this->checkBox4->TabIndex = 11;
			this->checkBox4->Text = L"門風";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox5->ForeColor = System::Drawing::Color::White;
			this->checkBox5->Location = System::Drawing::Point(529, 236);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(75, 25);
			this->checkBox5->TabIndex = 12;
			this->checkBox5->Text = L"獨聽";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox6->ForeColor = System::Drawing::Color::White;
			this->checkBox6->Location = System::Drawing::Point(642, 236);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(75, 25);
			this->checkBox6->TabIndex = 13;
			this->checkBox6->Text = L"搶槓";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox6_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox7->ForeColor = System::Drawing::Color::White;
			this->checkBox7->Location = System::Drawing::Point(38, 295);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(121, 25);
			this->checkBox7->TabIndex = 14;
			this->checkBox7->Text = L"槓上開花";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox7_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox8->ForeColor = System::Drawing::Color::White;
			this->checkBox8->Location = System::Drawing::Point(183, 295);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(121, 25);
			this->checkBox8->TabIndex = 15;
			this->checkBox8->Text = L"海底撈月";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox8_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox9->ForeColor = System::Drawing::Color::White;
			this->checkBox9->Location = System::Drawing::Point(325, 295);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(121, 25);
			this->checkBox9->TabIndex = 16;
			this->checkBox9->Text = L"河底撈魚";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox10->ForeColor = System::Drawing::Color::White;
			this->checkBox10->Location = System::Drawing::Point(483, 295);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(75, 25);
			this->checkBox10->TabIndex = 17;
			this->checkBox10->Text = L"花槓";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox10_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox11->ForeColor = System::Drawing::Color::White;
			this->checkBox11->Location = System::Drawing::Point(599, 295);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(98, 25);
			this->checkBox11->TabIndex = 18;
			this->checkBox11->Text = L"全求人";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox11_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox12->ForeColor = System::Drawing::Color::White;
			this->checkBox12->Location = System::Drawing::Point(38, 355);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(98, 25);
			this->checkBox12->TabIndex = 19;
			this->checkBox12->Text = L"半求人";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox12_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox13->ForeColor = System::Drawing::Color::White;
			this->checkBox13->Location = System::Drawing::Point(180, 355);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(75, 25);
			this->checkBox13->TabIndex = 20;
			this->checkBox13->Text = L"平胡";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox13_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox14->ForeColor = System::Drawing::Color::White;
			this->checkBox14->Location = System::Drawing::Point(304, 355);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(98, 25);
			this->checkBox14->TabIndex = 21;
			this->checkBox14->Text = L"三暗刻";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox14_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox15->ForeColor = System::Drawing::Color::White;
			this->checkBox15->Location = System::Drawing::Point(448, 355);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(98, 25);
			this->checkBox15->TabIndex = 22;
			this->checkBox15->Text = L"四暗刻";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox15_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox16->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox16->ForeColor = System::Drawing::Color::White;
			this->checkBox16->Location = System::Drawing::Point(591, 355);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(98, 25);
			this->checkBox16->TabIndex = 23;
			this->checkBox16->Text = L"五暗刻";
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox16_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox17->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox17->ForeColor = System::Drawing::Color::White;
			this->checkBox17->Location = System::Drawing::Point(38, 420);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(98, 25);
			this->checkBox17->TabIndex = 24;
			this->checkBox17->Text = L"碰碰胡";
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox17_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox18->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox18->ForeColor = System::Drawing::Color::White;
			this->checkBox18->Location = System::Drawing::Point(180, 420);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(98, 25);
			this->checkBox18->TabIndex = 25;
			this->checkBox18->Text = L"湊一色";
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox18_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox19->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox19->ForeColor = System::Drawing::Color::White;
			this->checkBox19->Location = System::Drawing::Point(304, 420);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(98, 25);
			this->checkBox19->TabIndex = 26;
			this->checkBox19->Text = L"清一色";
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox19_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox20->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox20->ForeColor = System::Drawing::Color::White;
			this->checkBox20->Location = System::Drawing::Point(591, 420);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(98, 25);
			this->checkBox20->TabIndex = 27;
			this->checkBox20->Text = L"小三元";
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox20_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox21->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox21->ForeColor = System::Drawing::Color::White;
			this->checkBox21->Location = System::Drawing::Point(38, 487);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(98, 25);
			this->checkBox21->TabIndex = 28;
			this->checkBox21->Text = L"大三元";
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox21_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox22->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox22->ForeColor = System::Drawing::Color::White;
			this->checkBox22->Location = System::Drawing::Point(180, 487);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(98, 25);
			this->checkBox22->TabIndex = 29;
			this->checkBox22->Text = L"小四喜";
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox22_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox23->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox23->ForeColor = System::Drawing::Color::White;
			this->checkBox23->Location = System::Drawing::Point(304, 487);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(98, 25);
			this->checkBox23->TabIndex = 30;
			this->checkBox23->Text = L"大四喜";
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox23_CheckedChanged);
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox24->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox24->ForeColor = System::Drawing::Color::White;
			this->checkBox24->Location = System::Drawing::Point(448, 487);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(98, 25);
			this->checkBox24->TabIndex = 31;
			this->checkBox24->Text = L"七搶一";
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox24_CheckedChanged);
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox25->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox25->ForeColor = System::Drawing::Color::White;
			this->checkBox25->Location = System::Drawing::Point(591, 487);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(121, 25);
			this->checkBox25->TabIndex = 32;
			this->checkBox25->Text = L"八仙過海";
			this->checkBox25->UseVisualStyleBackColor = true;
			this->checkBox25->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox25_CheckedChanged);
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox26->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox26->ForeColor = System::Drawing::Color::White;
			this->checkBox26->Location = System::Drawing::Point(38, 550);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(75, 25);
			this->checkBox26->TabIndex = 33;
			this->checkBox26->Text = L"天聽";
			this->checkBox26->UseVisualStyleBackColor = true;
			this->checkBox26->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox26_CheckedChanged);
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox27->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox27->ForeColor = System::Drawing::Color::White;
			this->checkBox27->Location = System::Drawing::Point(170, 550);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(75, 25);
			this->checkBox27->TabIndex = 34;
			this->checkBox27->Text = L"天胡";
			this->checkBox27->UseVisualStyleBackColor = true;
			this->checkBox27->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox27_CheckedChanged);
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox28->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox28->ForeColor = System::Drawing::Color::White;
			this->checkBox28->Location = System::Drawing::Point(291, 550);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(75, 25);
			this->checkBox28->TabIndex = 35;
			this->checkBox28->Text = L"地聽";
			this->checkBox28->UseVisualStyleBackColor = true;
			this->checkBox28->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox28_CheckedChanged);
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox29->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox29->ForeColor = System::Drawing::Color::White;
			this->checkBox29->Location = System::Drawing::Point(410, 550);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(75, 25);
			this->checkBox29->TabIndex = 36;
			this->checkBox29->Text = L"地胡";
			this->checkBox29->UseVisualStyleBackColor = true;
			this->checkBox29->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox29_CheckedChanged);
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox30->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox30->ForeColor = System::Drawing::Color::White;
			this->checkBox30->Location = System::Drawing::Point(448, 420);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(98, 25);
			this->checkBox30->TabIndex = 37;
			this->checkBox30->Text = L"字一色";
			this->checkBox30->UseVisualStyleBackColor = true;
			this->checkBox30->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox30_CheckedChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown1->Location = System::Drawing::Point(351, 178);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(55, 25);
			this->numericUpDown1->TabIndex = 38;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Mahjong::numericUpDown1_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Default;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(287, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 21);
			this->label7->TabIndex = 39;
			this->label7->Text = L"連莊";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Default;
			this->label8->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(444, 181);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 21);
			this->label8->TabIndex = 40;
			this->label8->Text = L"花牌";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"標楷體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown2->Location = System::Drawing::Point(506, 180);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(55, 25);
			this->numericUpDown2->TabIndex = 41;
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox31->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox31->ForeColor = System::Drawing::Color::White;
			this->checkBox31->Location = System::Drawing::Point(529, 550);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(121, 25);
			this->checkBox31->TabIndex = 42;
			this->checkBox31->Text = L"嚦咕嚦咕";
			this->checkBox31->UseVisualStyleBackColor = true;
			this->checkBox31->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox31_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"標楷體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->ForeColor = System::Drawing::Color::Green;
			this->label9->Location = System::Drawing::Point(190, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 24);
			this->label9->TabIndex = 43;
			this->label9->Text = L"label9";
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox32->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox32->ForeColor = System::Drawing::Color::White;
			this->checkBox32->Location = System::Drawing::Point(170, 179);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(75, 25);
			this->checkBox32->TabIndex = 44;
			this->checkBox32->Text = L"莊家";
			this->checkBox32->UseVisualStyleBackColor = true;
			this->checkBox32->CheckedChanged += gcnew System::EventHandler(this, &Mahjong::checkBox32_CheckedChanged);
			// 
			// Mahjong
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Green;
			this->ClientSize = System::Drawing::Size(754, 641);
			this->Controls->Add(this->checkBox32);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkBox31);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->checkBox30);
			this->Controls->Add(this->checkBox29);
			this->Controls->Add(this->checkBox28);
			this->Controls->Add(this->checkBox27);
			this->Controls->Add(this->checkBox26);
			this->Controls->Add(this->checkBox25);
			this->Controls->Add(this->checkBox24);
			this->Controls->Add(this->checkBox23);
			this->Controls->Add(this->checkBox22);
			this->Controls->Add(this->checkBox21);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Mahjong";
			this->Text = L"正宗16張麻將台數計算器";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
 private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	 this->total = 0;
	 this->label5->Text = this->total.ToString();
	 this->checkBox1->Checked = false;
	 this->checkBox2->Checked = false;
	 this->checkBox3->Checked = false;
	 this->checkBox4->Checked = false;
	 this->checkBox5->Checked = false;
	 this->checkBox6->Checked = false;
	 this->checkBox7->Checked = false;
	 this->checkBox8->Checked = false;
	 this->checkBox9->Checked = false;
	 this->checkBox10->Checked = false;
	 this->checkBox11->Checked = false;
	 this->checkBox12->Checked = false;
	 this->checkBox13->Checked = false;
	 this->checkBox14->Checked = false;
	 this->checkBox15->Checked = false;
	 this->checkBox16->Checked = false;
	 this->checkBox17->Checked = false;
	 this->checkBox18->Checked = false;
	 this->checkBox19->Checked = false;
	 this->checkBox20->Checked = false;
	 this->checkBox21->Checked = false;
	 this->checkBox22->Checked = false;
	 this->checkBox23->Checked = false;
	 this->checkBox24->Checked = false;
	 this->checkBox25->Checked = false;
	 this->checkBox26->Checked = false;
	 this->checkBox27->Checked = false;
	 this->checkBox28->Checked = false;
	 this->checkBox29->Checked = false;
	 this->checkBox30->Checked = false;
	 this->checkBox31->Checked = false;
	 this->checkBox32->Checked = false;
	 this->numericUpDown1->Value = 0;
	 this->numericUpDown2->Value = 0;
	 this->label9->Text = "";
 }
 private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			if ((this->numericUpDown1->Value > 0) && (this->checkBox32->Checked == false))
			{
				this->label9->Text = "連莊時，不可忽略莊家還有多一台喔~\n請重新輸入，記得莊家也要打勾!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->numericUpDown1->Value = 0;
  			}
			else if ((this->checkBox5->Checked == true) && (this->checkBox11->Checked == true))
			{
				this->label9->Text = "全求人不可再加計算獨聽喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(220, 68);
			}
			else if ((this->checkBox1->Checked == true) && (this->checkBox11->Checked == true))
			{
				this->label9->Text = "自摸不可算全求人，應該算半求人喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox11->Checked == true) && (this->checkBox12->Checked == true))
			{
				this->label9->Text = "全求人和半求人永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox8->Checked == true) && (this->checkBox9->Checked == true))
			{
				this->label9->Text = "海底撈月和河底撈魚永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox6->Checked == true) && (this->checkBox7->Checked == true))
			{
				this->label9->Text = "搶槓和槓上開花永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox1->Checked == true) && (this->checkBox6->Checked == true))
			{
				this->label9->Text = "搶槓是胡牌而非自摸喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(230, 68);
			}
			else if ((this->checkBox1->Checked == true) && (this->checkBox9->Checked == true))
			{
				this->label9->Text = "河底撈魚是胡牌而非自摸喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox1->Checked == false) && (this->checkBox8->Checked == true))
			{
				this->label9->Text = "海底撈月是自摸喔~\n請重新勾選，記得自摸也要勾喔!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox1->Checked == false) && (this->checkBox7->Checked == true))
			{
				this->label9->Text = "槓上開花是自摸喔~\n請重新勾選，記得自摸也要勾喔!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox10->Checked == true) && (this->numericUpDown2->Value>0))
			{
				this->label9->Text = "花槓不可另計花牌喔~請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 70);
			}
			else if ((this->checkBox1->Checked == false) && (this->checkBox12->Checked == true))
			{
				this->label9->Text = "半求人屬於自摸喔~\n請重新勾選，記得自摸也要勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox1->Checked == true) && (this->checkBox13->Checked == true))
			{
				this->label9->Text = "平胡不屬於自摸喔~\n請重新勾選，記得自摸不可勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(200, 68);
			}
			else if ((this->checkBox5->Checked == true) && (this->checkBox13->Checked == true))
			{
				this->label9->Text = "如果是平胡不可能獨聽喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox11->Checked == true) && (this->checkBox13->Checked == true))
			{
				this->label9->Text = "如果是平胡不可能全求人喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(200, 68);
			}
			else if ((this->checkBox12->Checked == true) && (this->checkBox13->Checked == true))
			{
				this->label9->Text = "如果是平胡不可能半求人喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(200, 68);
			}
			else if ((this->checkBox14->Checked == true) && (this->checkBox15->Checked == true) ||
				(this->checkBox14->Checked == true) && (this->checkBox16->Checked == true) ||
				(this->checkBox15->Checked == true) && (this->checkBox16->Checked == true))
			{
				this->label9->Text = "暗刻勾選得太多了喔~\n請重新勾選，不要太貪心!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(200, 68);
			}
			else if ((this->checkBox16->Checked == true) && (this->checkBox17->Checked == false))
			{
				this->label9->Text = "五暗刻一定也有碰碰胡喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(220, 68);
			}
			else if ((this->checkBox13->Checked == true) && (this->checkBox17->Checked == true))
			{
				this->label9->Text = "平胡永遠不可能與碰碰胡共存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(200, 68);
			}
			else if ((this->checkBox18->Checked == true) && (this->checkBox19->Checked == true) ||
				(this->checkBox18->Checked == true) && (this->checkBox30->Checked == true) ||
				(this->checkBox19->Checked == true) && (this->checkBox30->Checked == true))
			{
				this->label9->Text = "湊一色、清一色、字一色勾選太多了喔~\n請重新勾選，不要太貪心!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(180, 68);
			}
			else if ((this->checkBox20->Checked == true) && (this->checkBox21->Checked == true))
			{
				this->label9->Text = "小三元和大三元永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox22->Checked == true) && (this->checkBox23->Checked == true))
			{
				this->label9->Text = "小四喜和大四喜永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox24->Checked == true) && (this->checkBox25->Checked == true))
			{
				this->label9->Text = "七搶一和八仙過海永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox26->Checked == true) && (this->checkBox28->Checked == true))
			{
				this->label9->Text = "天聽和地聽永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox26->Checked == true) && (this->checkBox27->Checked == true))
			{
				this->label9->Text = "天胡不可以另計天聽喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox27->Checked == true) && (this->checkBox29->Checked == true))
			{
				this->label9->Text = "天胡和地胡永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox28->Checked == true) && (this->checkBox29->Checked == true))
			{
				this->label9->Text = "地胡不可以另計地聽喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox27->Checked == true) && (this->checkBox28->Checked == true))
			{
				this->label9->Text = "天胡和地聽永遠不可能並存喔~\n請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(210, 68);
			}
			else if ((this->checkBox1->Checked == false) && (this->checkBox25->Checked == true))
			{
				this->label9->Text = "八仙過海屬於自摸喔~\n請重新勾選，記得自摸也要勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(190, 68);
			}
			else if ((this->checkBox1->Checked == true) && (this->checkBox24->Checked == true))
			{
				this->label9->Text = "七搶一不屬於自摸喔~\n請重新勾選，記得自摸不可勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(200, 68);
			}
			else if ((this->checkBox2->Checked == true) && (this->checkBox31->Checked == true))
			{
				this->label9->Text = "嚦咕嚦咕本身就是門清不可另計門清喔~請重新勾選!!";
				this->label9->ForeColor = System::Drawing::Color::Red;
				this->label9->Location = System::Drawing::Point(120, 68);
			}
			else
			 {
				 this->label9->Text = "";
				 if (this->checkBox1->Checked == true) total += 1;
				 if (this->checkBox2->Checked == true) total += 1;
				 if (this->checkBox1->Checked == true && this->checkBox2->Checked == true) total += 1;
				 if (this->checkBox3->Checked == true) total += 1;
				 if (this->checkBox4->Checked == true) total += 1;
				 if (this->checkBox5->Checked == true) total += 1;
				 if (this->checkBox6->Checked == true) total += 1;
				 if (this->checkBox7->Checked == true) total += 1;
				 if (this->checkBox8->Checked == true) total += 1;
				 if (this->checkBox9->Checked == true) total += 1;
				 if (this->checkBox10->Checked == true) total += 2;
				 if (this->checkBox11->Checked == true) total += 2;
				 if (this->checkBox12->Checked == true) total += 1;
				 if (this->checkBox13->Checked == true) total += 2;
				 if (this->checkBox14->Checked == true) total += 2;
				 if (this->checkBox15->Checked == true) total += 5;
				 if (this->checkBox16->Checked == true) total += 8;
				 if (this->checkBox17->Checked == true) total += 4;
				 if (this->checkBox18->Checked == true) total += 4;
				 if (this->checkBox19->Checked == true) total += 8;
				 if (this->checkBox20->Checked == true) total += 4;
				 if (this->checkBox21->Checked == true) total += 8;
				 if (this->checkBox22->Checked == true) total += 8;
				 if (this->checkBox23->Checked == true) total += 16;
				 if (this->checkBox24->Checked == true) total += 8;
				 if (this->checkBox25->Checked == true) total += 16;
				 if (this->checkBox26->Checked == true) total += 16;
				 if (this->checkBox27->Checked == true) total += 24;
				 if (this->checkBox28->Checked == true) total += 8;
				 if (this->checkBox29->Checked == true) total += 16;
				 if (this->checkBox30->Checked == true) total += 16;
				 if (this->checkBox31->Checked == true) total += 8;
				 if (this->checkBox32->Checked == true) total += 1;
				 if(this->numericUpDown1->Value != 0)
					total += static_cast<int>(this->numericUpDown1-> Value) * 2;
				total += static_cast<int>(this->numericUpDown2->Value);
				this->label5->Text = this->total.ToString();
				total = 0;
			 }
			 
 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox20_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox21_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox22_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox23_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox24_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox25_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox26_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox27_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox28_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox29_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox30_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkBox31_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox32_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

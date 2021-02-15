#pragma once
#include "matrix.h";
#include "function.h";

namespace Form_Empty {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SizeT= Size1 = Size2 = Size3 = Size4 = Size5 = Size6 = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		Matrix^ w; 			
		samples* p;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RadioButton^ class1;
	private: System::Windows::Forms::RadioButton^ class2;
	private: System::Windows::Forms::RadioButton^ class3;
	private: System::Windows::Forms::RadioButton^ class4;
	private: System::Windows::Forms::RadioButton^ class5;
	private: System::Windows::Forms::RadioButton^ class6;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ pROCESSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomDrawLineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deltaLearningToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ perceptronRuleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rESERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eXITToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lbCoor;
	private: System::Windows::Forms::Label^ lbError;
	private: System::Windows::Forms::Label^ lbCycle;
	private: System::Windows::Forms::Label^ lb_total;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label5;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->class1 = (gcnew System::Windows::Forms::RadioButton());
			this->class2 = (gcnew System::Windows::Forms::RadioButton());
			this->class3 = (gcnew System::Windows::Forms::RadioButton());
			this->class4 = (gcnew System::Windows::Forms::RadioButton());
			this->class5 = (gcnew System::Windows::Forms::RadioButton());
			this->class6 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pROCESSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomDrawLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deltaLearningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perceptronRuleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rESERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eXITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbCoor = (gcnew System::Windows::Forms::Label());
			this->lbError = (gcnew System::Windows::Forms::Label());
			this->lbCycle = (gcnew System::Windows::Forms::Label());
			this->lb_total = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LavenderBlush;
			this->pictureBox1->Location = System::Drawing::Point(12, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1", L"2", L"3", L"4", L"5", L"6" });
			this->comboBox1->Location = System::Drawing::Point(232, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 22);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectedValueChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedValueChanged);
			// 
			// class1
			// 
			this->class1->AutoSize = true;
			this->class1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class1->Location = System::Drawing::Point(29, 39);
			this->class1->Name = L"class1";
			this->class1->Size = System::Drawing::Size(61, 17);
			this->class1->TabIndex = 2;
			this->class1->TabStop = true;
			this->class1->Text = L"class1";
			this->class1->UseVisualStyleBackColor = true;
			this->class1->Visible = false;
			// 
			// class2
			// 
			this->class2->AutoSize = true;
			this->class2->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class2->Location = System::Drawing::Point(122, 39);
			this->class2->Name = L"class2";
			this->class2->Size = System::Drawing::Size(61, 17);
			this->class2->TabIndex = 2;
			this->class2->TabStop = true;
			this->class2->Text = L"class2";
			this->class2->UseVisualStyleBackColor = true;
			this->class2->Visible = false;
			// 
			// class3
			// 
			this->class3->AutoSize = true;
			this->class3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class3->Location = System::Drawing::Point(232, 39);
			this->class3->Name = L"class3";
			this->class3->Size = System::Drawing::Size(61, 17);
			this->class3->TabIndex = 2;
			this->class3->TabStop = true;
			this->class3->Text = L"class3";
			this->class3->UseVisualStyleBackColor = true;
			this->class3->Visible = false;
			// 
			// class4
			// 
			this->class4->AutoSize = true;
			this->class4->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class4->Location = System::Drawing::Point(29, 74);
			this->class4->Name = L"class4";
			this->class4->Size = System::Drawing::Size(61, 17);
			this->class4->TabIndex = 2;
			this->class4->TabStop = true;
			this->class4->Text = L"class4";
			this->class4->UseVisualStyleBackColor = true;
			this->class4->Visible = false;
			// 
			// class5
			// 
			this->class5->AutoSize = true;
			this->class5->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class5->Location = System::Drawing::Point(122, 74);
			this->class5->Name = L"class5";
			this->class5->Size = System::Drawing::Size(61, 17);
			this->class5->TabIndex = 2;
			this->class5->TabStop = true;
			this->class5->Text = L"class5";
			this->class5->UseVisualStyleBackColor = true;
			this->class5->Visible = false;
			// 
			// class6
			// 
			this->class6->AutoSize = true;
			this->class6->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class6->Location = System::Drawing::Point(232, 74);
			this->class6->Name = L"class6";
			this->class6->Size = System::Drawing::Size(61, 17);
			this->class6->TabIndex = 2;
			this->class6->TabStop = true;
			this->class6->Text = L"class6";
			this->class6->UseVisualStyleBackColor = true;
			this->class6->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pROCESSToolStripMenuItem,
					this->rESERToolStripMenuItem, this->eXITToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(879, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// pROCESSToolStripMenuItem
			// 
			this->pROCESSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->randomDrawLineToolStripMenuItem,
					this->deltaLearningToolStripMenuItem, this->perceptronRuleToolStripMenuItem
			});
			this->pROCESSToolStripMenuItem->Name = L"pROCESSToolStripMenuItem";
			this->pROCESSToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->pROCESSToolStripMenuItem->Text = L"PROCESS";
			// 
			// randomDrawLineToolStripMenuItem
			// 
			this->randomDrawLineToolStripMenuItem->Name = L"randomDrawLineToolStripMenuItem";
			this->randomDrawLineToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->randomDrawLineToolStripMenuItem->Text = L"Random Draw Line";
			this->randomDrawLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::randomDrawLineToolStripMenuItem_Click);
			// 
			// deltaLearningToolStripMenuItem
			// 
			this->deltaLearningToolStripMenuItem->Name = L"deltaLearningToolStripMenuItem";
			this->deltaLearningToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->deltaLearningToolStripMenuItem->Text = L"Delta Learning(sürekli)";
			this->deltaLearningToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deltaLearningToolStripMenuItem_Click);
			// 
			// perceptronRuleToolStripMenuItem
			// 
			this->perceptronRuleToolStripMenuItem->Name = L"perceptronRuleToolStripMenuItem";
			this->perceptronRuleToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->perceptronRuleToolStripMenuItem->Text = L"Ayrýk Fonksiyon";
			this->perceptronRuleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::perceptronRuleToolStripMenuItem_Click);
			// 
			// rESERToolStripMenuItem
			// 
			this->rESERToolStripMenuItem->Name = L"rESERToolStripMenuItem";
			this->rESERToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->rESERToolStripMenuItem->Text = L"RESET";
			this->rESERToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rESETToolStripMenuItem_Click);
			// 
			// eXITToolStripMenuItem
			// 
			this->eXITToolStripMenuItem->Name = L"eXITToolStripMenuItem";
			this->eXITToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->eXITToolStripMenuItem->Text = L"EXIT";
			this->eXITToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eXITToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->class6);
			this->groupBox1->Controls->Add(this->class1);
			this->groupBox1->Controls->Add(this->class5);
			this->groupBox1->Controls->Add(this->class2);
			this->groupBox1->Controls->Add(this->class4);
			this->groupBox1->Controls->Add(this->class3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->groupBox1->Location = System::Drawing::Point(475, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(373, 105);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"SINIF SAYISINI SEÇÝNÝZ ->";
			// 
			// lbCoor
			// 
			this->lbCoor->AutoSize = true;
			this->lbCoor->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbCoor->ForeColor = System::Drawing::Color::DarkBlue;
			this->lbCoor->Location = System::Drawing::Point(706, 205);
			this->lbCoor->Name = L"lbCoor";
			this->lbCoor->Size = System::Drawing::Size(49, 14);
			this->lbCoor->TabIndex = 6;
			this->lbCoor->Text = L"lbCoor";
			// 
			// lbError
			// 
			this->lbError->AutoSize = true;
			this->lbError->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbError->ForeColor = System::Drawing::Color::DarkBlue;
			this->lbError->Location = System::Drawing::Point(706, 237);
			this->lbError->Name = L"lbError";
			this->lbError->Size = System::Drawing::Size(56, 14);
			this->lbError->TabIndex = 7;
			this->lbError->Text = L"lbError";
			// 
			// lbCycle
			// 
			this->lbCycle->AutoSize = true;
			this->lbCycle->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbCycle->ForeColor = System::Drawing::Color::DarkBlue;
			this->lbCycle->Location = System::Drawing::Point(706, 267);
			this->lbCycle->Name = L"lbCycle";
			this->lbCycle->Size = System::Drawing::Size(56, 14);
			this->lbCycle->TabIndex = 8;
			this->lbCycle->Text = L"lbCycle";
			// 
			// lb_total
			// 
			this->lb_total->AutoSize = true;
			this->lb_total->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lb_total->ForeColor = System::Drawing::Color::DarkBlue;
			this->lb_total->Location = System::Drawing::Point(706, 172);
			this->lb_total->Name = L"lb_total";
			this->lb_total->Size = System::Drawing::Size(49, 14);
			this->lb_total->TabIndex = 9;
			this->lb_total->Text = L"Toplam";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::DarkBlue;
			this->label1->Location = System::Drawing::Point(471, 205);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 14);
			this->label1->TabIndex = 13;
			this->label1->Text = L"ÖRNEK KOORDÝNATI       : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::DarkBlue;
			this->label2->Location = System::Drawing::Point(471, 267);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 14);
			this->label2->TabIndex = 12;
			this->label2->Text = L"ALGORÝTMA DÖNGÜ SAYISI :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::DarkBlue;
			this->label3->Location = System::Drawing::Point(471, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 14);
			this->label3->TabIndex = 11;
			this->label3->Text = L"TOPLAM ERROR           :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::DarkBlue;
			this->label4->Location = System::Drawing::Point(471, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 14);
			this->label4->TabIndex = 10;
			this->label4->Text = L"TOPLAM ÖRNEK SAYISI    :";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(574, 300);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 17);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"Normalize";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(504, 323);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(296, 45);
			this->trackBar1->TabIndex = 12;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(633, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"label5";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(879, 550);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lb_total);
			this->Controls->Add(this->lbCycle);
			this->Controls->Add(this->lbError);
			this->Controls->Add(this->lbCoor);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"One Layer L_Neuron ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
}
private: System::Void comboBox1_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
	index = Convert::ToInt32(comboBox1->SelectedItem);
	switch (index)
	{
	case 1:
		class1->Visible = true;
		class2->Visible = false;
		class3->Visible = false;
		class4->Visible = false;
		class5->Visible = false;
		class6->Visible = false;
		break;
	case 2:
		class1->Visible = true;
		class2->Visible = true;
		class3->Visible = false;
		class4->Visible = false;
		class5->Visible = false;
		class6->Visible = false;
		break;
	case 3:
		class1->Visible = true;
		class2->Visible = true;
		class3->Visible = true;
		class4->Visible = false;
		class5->Visible = false;
		class6->Visible = false;
		break;
	case 4:
		class1->Visible = true;
		class2->Visible = true;
		class3->Visible = true;
		class4->Visible = true;
		class5->Visible = false;
		class6->Visible = false;
		break;
	case 5:
		class1->Visible = true;
		class2->Visible = true;
		class3->Visible = true;
		class4->Visible = true;
		class5->Visible = true;
		class6->Visible = false;
		break;
	case 6:
		class1->Visible = true;
		class2->Visible = true;
		class3->Visible = true;
		class4->Visible = true;
		class5->Visible = true;
		class6->Visible = true;
		break;
	default:
		break;
	}
}
private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (index == 0)
	{
		MessageBox::Show("Lütfen  sýnýf sayýsýný seçiniz...");
	}
	if (randomPressed == false)
	{
		w = gcnew Matrix(index, 3);
		w->randomD();
	}
	//Ornekleme
	if (class1->Checked)
	{
		int temp_x, temp_y;
		double x1, x2;

		temp_x = (Convert::ToInt32(e->X));
		temp_y = (Convert::ToInt32(e->Y));
			
		x1 = temp_x- (pictureBox1->Width / 2);
		x2 = (pictureBox1->Width / 2) -temp_y;
			
		if (SizeT == 0) {
			SizeT = Size1 = 1;
			lbCoor->Text = "class " + Size1 + " x : " + x1 + " y : " + x2;
			p = new samples[1];
			p[0].x1 = x1;
			p[0].x2 = x2;
			p[0].id = 1;
		}
		else
		{
			samples* temp;
			temp = p;
			Size1++;
			SizeT++;
			lbCoor->Text = "class : " + Size1 + " x : " + x1 + " y : " + x2;
			p = new samples[SizeT];
			for (int i = 0; i < SizeT; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}
			p[SizeT - 1].x1 = x1;
			p[SizeT - 1].x2 = x2;
			p[SizeT - 1].id = 1;
			delete temp;
		}
			
		
	}

	if (class2->Checked)
	{
			
		int temp_x, temp_y;
		double x1, x2;

		temp_x = (Convert::ToInt32(e->X));
		temp_y = (Convert::ToInt32(e->Y));
			
		x1 = e->X - (pictureBox1->Width / 2);
		x2 = (pictureBox1->Width / 2) - e->Y;
			
		if (SizeT == 0) {
			SizeT = Size2 = 1;
			lbCoor->Text = "class : " + Size2 + " x : " + x1 + " y : " + x2;
			p = new samples[1];
			p[0].x1 = x1;
			p[0].x2 = x2;
			p[0].id = 2;
		}
		else
		{
			samples* temp;
			temp = p;
			Size2++;
			SizeT++;
			lbCoor->Text = "class : " + Size2 + " x : " + x1 + " y : " + x2;
			p = new samples[SizeT];

			for (int i = 0; i < SizeT; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}
			p[SizeT - 1].x1 = x1;
			p[SizeT - 1].x2 = x2;
			p[SizeT - 1].id = 2;
			delete temp;
		}


	}

	if (class3->Checked)
	{

		int temp_x, temp_y;
		double x1, x2;

		temp_x = (Convert::ToInt32(e->X));
		temp_y = (Convert::ToInt32(e->Y));
			
		x1 = e->X - (pictureBox1->Width / 2);
		x2 = (pictureBox1->Width / 2) - e->Y;
			
		if (SizeT == 0) {
			SizeT = Size3 = 1;
			lbCoor->Text = "class : " + Size3 + " x : " + x1 + " y : " + x2;
			p = new samples[1];
			p[0].x1 = x1;
			p[0].x2 = x2;
			p[0].id = 3;
		}
		else
		{
			samples* temp;
			temp = p;
			Size3++;
			SizeT++;
			lbCoor->Text = "class : " + Size3 + " x : " + x1 + " y : " + x2;
			p = new samples[SizeT];
			for (int i = 0; i < SizeT; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}
			p[SizeT - 1].x1 = x1;
			p[SizeT - 1].x2 = x2;
			p[SizeT - 1].id = 3;
			delete temp;
		}


	}

	if (class4->Checked)
	{

		int temp_x, temp_y;
		double x1, x2;

		temp_x = (Convert::ToInt32(e->X));
		temp_y = (Convert::ToInt32(e->Y));
			
		x1 = e->X - (pictureBox1->Width / 2);
		x2 = (pictureBox1->Width / 2) - e->Y;

		if (SizeT == 0) {
			SizeT = Size4 = 1;
			lbCoor->Text = "class : " + Size4 + " x : " + x1 + " y : " + x2;
			p = new samples[1];
			p[0].x1 = x1;
			p[0].x2 = x2;
			p[0].id = 4;
		}
		else
		{
			samples* temp;
			temp = p;
			Size4++;
			SizeT++;
			lbCoor->Text = "class : " + Size4 + " x : " + x1 + " y : " + x2;
			p = new samples[SizeT];
			for (int i = 0; i < SizeT; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}
			p[SizeT - 1].x1 = x1;
			p[SizeT - 1].x2 = x2;
			p[SizeT - 1].id = 4;
			delete temp;
		}


	}

	if (class5->Checked)
	{

		int temp_x, temp_y;
		double x1, x2;

		temp_x = (Convert::ToInt32(e->X));
		temp_y = (Convert::ToInt32(e->Y));
			
		x1 = e->X - (pictureBox1->Width / 2);
		x2 = (pictureBox1->Width / 2) - e->Y;

		if (SizeT == 0) {
			SizeT = Size5 = 1;
			lbCoor->Text = "class : " + Size5+ " x : " + x1 + " y : " + x2;
			p = new samples[1];
			p[0].x1 = x1;
			p[0].x2 = x2;
			p[0].id = 5;
		}
		else
		{
			samples* temp;
			temp = p;
			Size5++;
			SizeT++;
			lbCoor->Text = "class  : " + Size5 + " x : " + x1 + " y : " + x2;
			p = new samples[SizeT];
			for (int i = 0; i < SizeT; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}
			p[SizeT - 1].x1 = x1;
			p[SizeT - 1].x2 = x2;
			p[SizeT - 1].id = 5;
			delete temp;
		}


	}

	if (class6->Checked)
	{

		int temp_x, temp_y;
		double x1, x2;

		temp_x = (Convert::ToInt32(e->X));
		temp_y = (Convert::ToInt32(e->Y));
			
		x1 = e->X - (pictureBox1->Width / 2);
		x2 = (pictureBox1->Width / 2) - e->Y;

		if (SizeT == 0) {
			SizeT = Size6 = 1;
			lbCoor->Text = "class : " + Size6 + " x : " + x1 + " y : " + x2;
			p = new samples[1];
			p[0].x1 = x1;
			p[0].x2 = x2;
			p[0].id = 6;
		}
		else
		{
			samples* temp;
			temp = p;
			Size6++;
			SizeT++;
			lbCoor->Text = "class : " + Size6 + " x : " + x1 + " y : " + x2;
			p = new samples[SizeT];
			for (int i = 0; i < SizeT; i++)
			{
				p[i].x1 = temp[i].x1;
				p[i].x2 = temp[i].x2;
				p[i].id = temp[i].id;
			}
			p[SizeT - 1].x1 = x1;
			p[SizeT - 1].x2 = x2;
			p[SizeT - 1].id = 6;
			delete temp;
		}


	}
		
	lb_total->Text = "Toplam Örnek Sayýsý " +  SizeT ;
	pictureBox1->Refresh();

}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	//KOORDÝNAT ÇÝZGÝLERÝ
	int center_width, center_height;
	center_width = (int)(pictureBox1->Width) / 2;
	center_height = (int)(pictureBox1->Height) / 2;
	int zoom = 1 + trackBar1->Value;

	Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 3.0f), pictureBox1->Width / 2, 0, pictureBox1->Width / 2, pictureBox1->Height);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 3.0f), 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2);
		
	//ORNEKLER'ÝN ÇÝZÝLMESÝ
	Pen^ penOrnek = gcnew Pen(Color::Blue, 3.0f);
	if (SizeT != 0)
	{
		for (int i = 0; i < SizeT; i++)
		{
			switch ((int)p[i].id)
			{
			case 1:
				penOrnek->Color = Color::DarkKhaki;
				break;
			case 2:
				penOrnek->Color = Color::Blue;
				break;
			case 3:
				penOrnek->Color = Color::Red;
				break;
			case 4:
				penOrnek->Color = Color::Purple;
				break;
			case 5:
				penOrnek->Color = Color::Orange;
				break;
			case 6:
				penOrnek->Color = Color::DarkGreen;
				break;
			default:
				break;
			}

			int x, y = 0;
			x = (int)((p[i].x1 * zoom + (pictureBox1->Width / 2)));
			y = (int)(((pictureBox1->Height / 2) - p[i].x2 * zoom));

			e->Graphics->DrawLine(penOrnek, x - 5, y, x + 5, y);
			e->Graphics->DrawLine(penOrnek, x, y - 5, x, y + 5);

		}

	}

	//NÖRON DOÐRULARININ ÇÝZÝLMESÝ
	if (randomPressed)
	{
		for (int i = 0; i < index; i++)
		{
			switch (i)
			{
			case 0:
				pen->Color = Color::DarkKhaki;
				break;
			case 1:
				pen->Color = Color::Blue;
				break;
			case 2:
				pen->Color = Color::Red;
				break;
			case 3:
				pen->Color = Color::Purple;
				break;
			case 4:
				pen->Color = Color::Orange;
				break;
			case 5:
				pen->Color = Color::DarkGreen;
				break;
			default:
				break;
			}
			double x, y, s;

			x = w->get(i, 0);
			y = w->get(i, 1);
			s = w->get(i, 2)*zoom;
			int x1, x2, y1, y2 = 0;

			x1 = 0;
			y1 = Ypoint(x1, x, y, s, (pictureBox1->Width / 2));

			x2 = (int)(pictureBox1->Height) ;
			y2 = Ypoint(x2, x, y, s, (pictureBox1->Width / 2));

			e->Graphics->DrawLine(pen, x1, y1, x2, y2);
			drawWeight = false;

		}
	}
}
private: System::Void rESETToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	randomPressed = false;
	drawWeight = false;
	w->~Matrix();
	SizeT = Size1 = Size2 = Size3 = Size4 = Size5 = Size6 = 0;
	pictureBox1->Refresh();
	index = 0;
	MessageBox::Show("Lütfen Sýnýf Sayýsýný Belirtiniz...");

	}
private: System::Void randomDrawLineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (index == 0)
	{
		MessageBox::Show("Lütfen  sýnýf sayýsýný seçiniz...");
	}
	if (randomPressed == true)
	{
			

		w = gcnew Matrix(index, 3);

	}
		
	randomPressed = true;
	w = gcnew Matrix(index, 3);
	w->randomD();

		
	pictureBox1->Refresh();
	
	
}
private: System::Void perceptronRuleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (index == 0)
	{
		MessageBox::Show("Lütfen  sýnýf sayýsýný seçiniz...");
	}
	if (randomPressed==false)
	{
		w = gcnew Matrix(index, 3);
		randomPressed = true;
		w->randomD();
	}
	double error = 0;
	int cycle = 0;
	do
	{
		error = 0.0;
		for (int i = 0; i < SizeT; i++) 
		{//tüm örnekler üzerinde eðitimin yapýlmasý
			Matrix^ y = gcnew Matrix(3, 1); //input
			double xx, yy;
			xx = (p[i].x1);
			yy = (p[i].x2);
			y->set(xx, 0, 0);
			y->set(yy, 1, 0);
			y->set(1, 2, 0);
			Matrix^ d = gcnew Matrix(index, 1);//d index=nöron sayýsý

			for (int k = 0; k < index; k++) //beklenen deðer
			{
				d->set(-1.0, k, 0);
			}
			d->set(1.0, (p[i].id - 1), 0);
			Matrix^ net = w * y;
			Matrix^ fNet = sgn(net);//output
			//nöron deðerlerinin güncellenmesi

			for (int k = 0; k < index; k++)
			{
				double sabit = 0.1 * (d->get(k, 0) - fNet->get(k, 0));
				w->set((w->get(k, 0) + (sabit * y->get(0, 0))), k, 0);
				w->set((w->get(k, 1) + (sabit * y->get(1, 0))), k, 1);
				w->set((w->get(k, 2) + (sabit * y->get(2, 0))), k, 2);
				error += (pow((d->get(k, 0) - fNet->get(k, 0)), 2));//hata deðeri
			}
			error = error / 2 * index;
			net->~Matrix();
			d->~Matrix();
			y->~Matrix();
			fNet->~Matrix();
		}
		cycle++;
		drawWeight = true;
		pictureBox1->Refresh();
	} while (error > 0.1);
	lbCycle->Text = ("Cycle : " + Convert::ToString(cycle));
	lbError->Text = "Error : " + error;
}
private: System::Void deltaLearningToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	if (index == 0)
	{
		MessageBox::Show("Lütfen  sýnýf sayýsýný seçiniz...");
	}
	if (randomPressed == false)
	{
		w = gcnew Matrix(index, 3);
		randomPressed = true;
		w->randomD();
	}
	double error = 0;
	int cycle = 0;
	do
	{
		error = 0.0;
		for (int i = 0; i < SizeT; i++)
		{
			Matrix^ y = gcnew Matrix(3, 1); //input
			double xx, yy;
			xx = (p[i].x1);
			yy = (p[i].x2);
			y->set(xx, 0, 0);
			y->set(yy, 1, 0);
			y->set(1, 2, 0);
			Matrix^ d = gcnew Matrix(index, 1);//d index=nöron sayýsý

			for (int k = 0; k < index; k++)
			{
				d->set(-1.0, k, 0);
			}
			d->set(1.0, (p[i].id - 1), 0);
			Matrix^ net = w * y;
			Matrix^ fNet = fActivation(net);//output
			Matrix^ fTNet = fTurev(fNet); //fTurev

			for (int k = 0; k < index; k++)
			{
				double sabit = 0.1 * (d->get(k, 0) - fNet->get(k, 0)) * fTNet->get(k, 0);
				w->set((w->get(k, 0) + (sabit * y->get(0, 0))), k, 0);
				w->set((w->get(k, 1) + (sabit * y->get(1, 0))), k, 1);
				w->set((w->get(k, 2) + (sabit * y->get(2, 0))), k, 2);
				error += (pow((d->get(k, 0) - fNet->get(k, 0)), 2));
			}
			error = error / 2;
			net->~Matrix();
			d->~Matrix();
			y->~Matrix();
			fNet->~Matrix();
		}
		cycle++;
		drawWeight = true;
		pictureBox1->Refresh();
	} while (error > 0.1);
	lbCycle->Text = ("Cycle : " + Convert::ToString(cycle));
	lbError->Text = "Error : " + error;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void eXITToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void trackBar1_Scroll_1(System::Object^ sender, System::EventArgs^ e) {
	label5->Text = "Zoom : " + trackBar1->Value.ToString();
	pictureBox1->Refresh();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		double meanX = 0, meanY = 0;

		for (int i = 0; i < SizeT; i++)
		{
			meanX += p[i].x1;
			meanY += p[i].x2;
		}
		meanX /= SizeT;
		meanY /= SizeT;

		double sumX = 0, sumY = 0;
		for (int i = 0; i < SizeT; i++)
		{
			sumX += pow((p[i].x1 - meanX), 2);
			sumY += pow((p[i].x2 - meanY), 2);
		}
		double sSX = 0, sSY = 0;
		sSX = sqrt(sumX / (SizeT - 1));
		sSY = sqrt(sumY / (SizeT - 1));
		for (int i = 0; i < SizeT; i++)
		{
			p[i].x1 = ((p[i].x1 - meanX) / sSX);
			p[i].x2 = ((p[i].x2 - meanY) / sSY);
		}
	}
	pictureBox1->Refresh();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

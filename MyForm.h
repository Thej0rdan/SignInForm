#pragma once

namespace SignInForm {

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
			termsPanel->Hide();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ termsPanel;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->termsPanel = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->termsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 28, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(41, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(45, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(45, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.25F, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(49, 212);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(283, 17);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(49, 229);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(275, 2);
			this->panel1->TabIndex = 4;
			this->panel1->UseWaitCursor = true;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(49, 299);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(275, 2);
			this->panel2->TabIndex = 6;
			this->panel2->UseWaitCursor = true;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.25F, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(49, 282);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(283, 17);
			this->textBox2->TabIndex = 5;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(46, 332);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(93, 17);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"I agree to the";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AllowDrop = true;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 8.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::OrangeRed;
			this->label4->Location = System::Drawing::Point(135, 333);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Terms and Conditions";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.25F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(46, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 34);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.25F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::OrangeRed;
			this->button2->Location = System::Drawing::Point(138, 370);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 34);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// termsPanel
			// 
			this->termsPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"termsPanel.BackgroundImage")));
			this->termsPanel->Controls->Add(this->button3);
			this->termsPanel->Controls->Add(this->textBox3);
			this->termsPanel->Controls->Add(this->label5);
			this->termsPanel->Location = System::Drawing::Point(227, 12);
			this->termsPanel->Name = L"termsPanel";
			this->termsPanel->Size = System::Drawing::Size(742, 420);
			this->termsPanel->TabIndex = 12;
			this->termsPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::termsPanel_Paint);
			this->termsPanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->termsPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->termsPanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::OrangeRed;
			this->button3->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.25F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(435, 422);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 34);
			this->button3->TabIndex = 11;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.5F, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox3->Location = System::Drawing::Point(97, 124);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(421, 280);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = resources->GetString(L"textBox3.Text");
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18.25F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(92, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(253, 30);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Terms and Conditions";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(861, 531);
			this->Controls->Add(this->termsPanel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->termsPanel->ResumeLayout(false);
			this->termsPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		termsPanel->Show();
	}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked == true) {
		button1->Enabled = true;
	}
	else {
		button1->Enabled = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "admin") {
		if (textBox2->Text == "root") {
			MessageBox::Show("Welcome Admin", "Sign in Successful!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Application::Exit();
		}
		else {
			MessageBox::Show("Invalid Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Invalid Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	termsPanel->Hide();
}

	   //dragging the form
	   bool dragging;
	   Point offset;

private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//enable dragging
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//check if dragging is enabled
	if (dragging) {
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//disable dragging
    dragging = false;
}
private: System::Void termsPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		textBox2->Focus();
	}
}
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		button1->PerformClick();
	}
}
};
}

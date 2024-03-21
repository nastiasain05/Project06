#pragma once

namespace Project06 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->textBox1->Location = System::Drawing::Point(28, 45);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 295);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->button1->Location = System::Drawing::Point(330, 383);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(288, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"������ ��� � �����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->button2->Location = System::Drawing::Point(28, 383);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(279, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"�������� � ����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->button3->Location = System::Drawing::Point(231, 299);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(387, 41);
			this->button3->TabIndex = 3;
			this->button3->Text = L"���������";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->label1->Location = System::Drawing::Point(341, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->label2->Location = System::Drawing::Point(248, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(320, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"������� �����,  ������� 4 :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(630, 472);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����������� ������ 8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fname = "number.txt.txt";
		if (File::Exists(fname))
		{
			StreamReader^ reader = File::OpenText(fname);

			textBox1->Clear();

			String^ fileContent = reader->ReadToEnd();

			array<String^>^ numbers = fileContent->Split(' ');

			for (int i = 0; i < numbers->Length; i++)
			{
				textBox1->AppendText(numbers[i] + Environment::NewLine);
			}

			reader->Close(); 
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int product = 1;

	for (int i = 0; i < textBox1->Lines->Length; i++)
	{
		int number;
		if (int::TryParse(textBox1->Lines[i], number))
		{
			if (number % 4 == 0)
			{
				product *= number;
			}
		}
	}
	label1->Text = Convert::ToString(product);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "output.txt";
	StreamWriter^ writer = File::CreateText(fileName);
	int product = 1;

	for (int i = 0; i < textBox1->Lines->Length; i++)
	{
		int number;
		if (int::TryParse(textBox1->Lines[i], number))
		{
			if (number % 4 == 0)
			{
				product *= number;
				writer->WriteLine(number);
			}
		}
	}
	writer->WriteLine("�������:" + Convert::ToString(product));
	writer->Close();

	MessageBox::Show("����� ����� 4, �� �� ������� ���� �������� � ���� " + fileName);
}
};
}

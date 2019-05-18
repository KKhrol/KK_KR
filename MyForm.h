#pragma once
#include <string>
#include <string.h>
#include <msclr/marshal_cppstd.h>

namespace mobilestation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  _size;

	private: System::Windows::Forms::TextBox^  xtext;
	private: System::Windows::Forms::TextBox^  xfrom;
	private: System::Windows::Forms::TextBox^  outtext;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  ytext;
	private: System::Windows::Forms::TextBox^  atext;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  yfrom;
	private: System::Windows::Forms::TextBox^  xto;
	private: System::Windows::Forms::TextBox^  yto;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->_size = (gcnew System::Windows::Forms::TextBox());
			this->xtext = (gcnew System::Windows::Forms::TextBox());
			this->xfrom = (gcnew System::Windows::Forms::TextBox());
			this->outtext = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ytext = (gcnew System::Windows::Forms::TextBox());
			this->atext = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->yfrom = (gcnew System::Windows::Forms::TextBox());
			this->xto = (gcnew System::Windows::Forms::TextBox());
			this->yto = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(84, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(506, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"How many squares is your region divided into\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(84, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1026, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the coordinates of the square(x,y) and the changes in the number of working"
				L" phones(a)";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkRed;
			this->label3->Location = System::Drawing::Point(84, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(824, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter the coordinates of the space of the region(From(x,y)   -   To(x,y))";
			// 
			// _size
			// 
			this->_size->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->_size->ForeColor = System::Drawing::Color::Olive;
			this->_size->Location = System::Drawing::Point(89, 82);
			this->_size->Name = L"_size";
			this->_size->Size = System::Drawing::Size(381, 37);
			this->_size->TabIndex = 3;
			this->_size->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// xtext
			// 
			this->xtext->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xtext->Location = System::Drawing::Point(141, 209);
			this->xtext->Name = L"xtext";
			this->xtext->Size = System::Drawing::Size(61, 37);
			this->xtext->TabIndex = 4;
			// 
			// xfrom
			// 
			this->xfrom->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xfrom->Location = System::Drawing::Point(267, 319);
			this->xfrom->Name = L"xfrom";
			this->xfrom->Size = System::Drawing::Size(61, 37);
			this->xfrom->TabIndex = 5;
			this->xfrom->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// outtext
			// 
			this->outtext->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outtext->Location = System::Drawing::Point(324, 520);
			this->outtext->Multiline = true;
			this->outtext->Name = L"outtext";
			this->outtext->Size = System::Drawing::Size(489, 102);
			this->outtext->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkRed;
			this->button1->Location = System::Drawing::Point(400, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(322, 61);
			this->button1->TabIndex = 7;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ytext
			// 
			this->ytext->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ytext->Location = System::Drawing::Point(267, 209);
			this->ytext->Name = L"ytext";
			this->ytext->Size = System::Drawing::Size(63, 37);
			this->ytext->TabIndex = 8;
			// 
			// atext
			// 
			this->atext->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->atext->Location = System::Drawing::Point(436, 209);
			this->atext->Name = L"atext";
			this->atext->Size = System::Drawing::Size(64, 37);
			this->atext->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(104, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 26);
			this->label4->TabIndex = 10;
			this->label4->Text = L"x:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(230, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"y:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(400, 212);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"a:";
			// 
			// yfrom
			// 
			this->yfrom->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yfrom->Location = System::Drawing::Point(409, 320);
			this->yfrom->Name = L"yfrom";
			this->yfrom->Size = System::Drawing::Size(61, 37);
			this->yfrom->TabIndex = 13;
			// 
			// xto
			// 
			this->xto->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xto->Location = System::Drawing::Point(661, 319);
			this->xto->Name = L"xto";
			this->xto->Size = System::Drawing::Size(61, 37);
			this->xto->TabIndex = 14;
			// 
			// yto
			// 
			this->yto->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yto->Location = System::Drawing::Point(798, 319);
			this->yto->Name = L"yto";
			this->yto->Size = System::Drawing::Size(60, 37);
			this->yto->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(218, 322);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 26);
			this->label7->TabIndex = 16;
			this->label7->Text = L"x:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(371, 321);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 26);
			this->label8->TabIndex = 17;
			this->label8->Text = L"y:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(624, 322);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 26);
			this->label9->TabIndex = 18;
			this->label9->Text = L"x:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(760, 320);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 26);
			this->label10->TabIndex = 19;
			this->label10->Text = L"y:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(328, 285);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 31);
			this->label11->TabIndex = 20;
			this->label11->Text = L"From:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(738, 289);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 31);
			this->label12->TabIndex = 21;
			this->label12->Text = L"To:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(182, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 31);
			this->button2->TabIndex = 22;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1105, 657);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->yto);
			this->Controls->Add(this->xto);
			this->Controls->Add(this->yfrom);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->atext);
			this->Controls->Add(this->ytext);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->outtext);
			this->Controls->Add(this->xfrom);
			this->Controls->Add(this->xtext);
			this->Controls->Add(this->_size);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Mobile\'s Viewer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	std::string size = msclr::interop::marshal_as<std::string>(_size->Text);
	if (size == "")
	{
		MessageBox::Show("Fill in the field", "Inputing warning");
	}
	else
	{
		int size{};
		static int** reg = new int*[size];
		for (int i = 0; i < size; i++)
			reg[i] = new int[size];

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				reg[i][j] = 0;
			}
		}
	}
}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{

			 std::string x = msclr::interop::marshal_as<std::string>(xtext->Text);
			 std::string y = msclr::interop::marshal_as<std::string>(ytext->Text);
			 std::string a = msclr::interop::marshal_as<std::string>(atext->Text);
			 std::string k = msclr::interop::marshal_as<std::string>(xfrom->Text);
			 std::string r = msclr::interop::marshal_as<std::string>(yfrom->Text);
			 std::string b = msclr::interop::marshal_as<std::string>(xto->Text);
			 std::string t = msclr::interop::marshal_as<std::string>(yto->Text);
			 if (x == "" || y == "" || a == "" || k == "" || r == "" || b == "" || t == "")
			 {
				 MessageBox::Show("Fill in all the fields", "Inputing warning");
			 }

			 else
			 {
				 int x{};
				 int y{};
				 int a{};
				 int k{};
				 int b{};
				 int r{};
				 int t{};
				 int mob_number = 0;
				 /*reg[x][y] = reg[x][y] + a;
				 for (int i = k; i < b; i++)
				 {
					 for (int j = r; j < t; j++)
					 {
						 mob_number += reg[i][j];
					 }
				 }
				 */
			 }
		 }
};
}

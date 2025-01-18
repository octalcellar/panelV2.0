#pragma once
#include"cmath"
namespace panelV2 {

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
	private:double firstNum;
	private:char uAction = ' ';
	private:bool autoClean = false;
	private:bool isEqual = false;
	private:bool err = false;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;




	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:








	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(5, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"9";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Location = System::Drawing::Point(90, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Location = System::Drawing::Point(171, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L"7";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button4->Location = System::Drawing::Point(252, 208);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::btnminus_Clic);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Info;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button5->Location = System::Drawing::Point(252, 284);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 70);
			this->button5->TabIndex = 7;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Clic);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button6->Location = System::Drawing::Point(171, 290);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 70);
			this->button6->TabIndex = 6;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button7->Location = System::Drawing::Point(90, 290);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 70);
			this->button7->TabIndex = 5;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button8->Location = System::Drawing::Point(5, 290);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 70);
			this->button8->TabIndex = 4;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Info;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button9->Location = System::Drawing::Point(252, 360);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 70);
			this->button9->TabIndex = 11;
			this->button9->Text = L"*";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Clic);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button10->Location = System::Drawing::Point(171, 366);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 70);
			this->button10->TabIndex = 10;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button11->Location = System::Drawing::Point(90, 366);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 70);
			this->button11->TabIndex = 9;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button12->Location = System::Drawing::Point(5, 366);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 70);
			this->button12->TabIndex = 8;
			this->button12->Text = L"3";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::Info;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button13->Location = System::Drawing::Point(252, 442);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 70);
			this->button13->TabIndex = 15;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Clic);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::Info;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button14->Location = System::Drawing::Point(171, 442);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 70);
			this->button14->TabIndex = 14;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EqualClick);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button15->Location = System::Drawing::Point(90, 442);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 70);
			this->button15->TabIndex = 13;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Ivory;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button16->Location = System::Drawing::Point(5, 442);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 70);
			this->button16->TabIndex = 12;
			this->button16->Text = L",";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::NumberClic);

			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Red;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(7, 12);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(59, 60);
			this->button17->TabIndex = 16;
			this->button17->Text = L"X";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::Info;
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button22->Location = System::Drawing::Point(252, 132);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 70);
			this->button22->TabIndex = 24;
			this->button22->Text = L"^";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::btnStepen_Clic);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::Info;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button23->Location = System::Drawing::Point(171, 132);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 70);
			this->button23->TabIndex = 23;
			this->button23->Text = L"%";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::Info;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button24->Location = System::Drawing::Point(90, 132);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 70);
			this->button24->TabIndex = 22;
			this->button24->Text = L"AC";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::AC);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::Info;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button25->Location = System::Drawing::Point(5, 132);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 70);
			this->button25->TabIndex = 21;
			this->button25->Text = L"<";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::del);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->label1->Location = System::Drawing::Point(12, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 54);
			this->label1->TabIndex = 25;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(252, 12);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(73, 17);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"auto clear";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::check_AutoClean);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 522);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void math(char action) {
	this->firstNum = System::Convert::ToDouble(this->label1->Text);
	this->uAction = action;
	this->label1->Text = "0";
}
private: System::Void btnPlus_Clic(System::Object^ sender, System::EventArgs^ e) {
	math('+');
}
private: System::Void btnminus_Clic(System::Object^ sender, System::EventArgs^ e) {
	math('-');
}
private: System::Void btnMultiply_Clic(System::Object^ sender, System::EventArgs^ e) {
	math('*');
}
private: System::Void btnDivide_Clic(System::Object^ sender, System::EventArgs^ e) {
	math('/');
}
private: System::Void btnStepen_Clic(System::Object^ sender, System::EventArgs^ e) {
	math('^');
}
private:System::Void NumberClic(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);
	if (this->label1->Text == "0" || autoClean && isEqual) {
		this->label1->Text = button->Text;
		isEqual = false;
	}
	else
		this->label1->Text = this->label1->Text + button->Text;
}
	private:System::Void EqualClick(System::Object^ sender, System::EventArgs^ e) {
		double second = System::Convert::ToDouble(this->label1->Text);
		double result;
		switch (this->uAction) {
		case'+':result = this->firstNum + second;break;
		case'-':result = this->firstNum - second;break;
		case'*':result = this->firstNum * second;break;
		case'/':
			if (second == 0) {
				result = 0;
				MessageBox::Show(this, "ќшибка:деление на 0 небопустимо", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				result = this->firstNum / second;
				break;
			}
		case'^':
			result = pow(this->firstNum, second);break;
			
		}
		isEqual = true;
		this->label1->Text = System::Convert::ToString(result);
	}
	private:System::Void check_AutoClean(System::Object ^ sender, System::EventArgs ^ e) {
		if (this->autoClean == true) {
			this->autoClean = false;
		}
		else
		{
			this->autoClean = true;
		}
	}
	private:System::Void AC(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
	}
	private:System::Void del(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = label1->Text->Substring(0, label1->Text->Length - 1);
		if (label1->Text->Length == 0) {
			this->label1->Text = "0";
		}
	}
};
}


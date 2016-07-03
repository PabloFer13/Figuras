#pragma once
#include <numeric>
namespace Figuras {

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
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::HScrollBar^  MovementScroll;
	private: System::Windows::Forms::RadioButton^  HRadioButton;
	private: System::Windows::Forms::RadioButton^  VRadioButton;
	private: System::Windows::Forms::Label^  Movement_Label;
	private: System::Windows::Forms::HScrollBar^  Rotation_Scroll;
	private: System::Windows::Forms::Label^  Rotation_Label;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->MovementScroll = (gcnew System::Windows::Forms::HScrollBar());
			this->HRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->VRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Movement_Label = (gcnew System::Windows::Forms::Label());
			this->Rotation_Scroll = (gcnew System::Windows::Forms::HScrollBar());
			this->Rotation_Label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->MovementScroll);
			this->panel1->Controls->Add(this->HRadioButton);
			this->panel1->Controls->Add(this->VRadioButton);
			this->panel1->Controls->Add(this->Movement_Label);
			this->panel1->Controls->Add(this->Rotation_Scroll);
			this->panel1->Controls->Add(this->Rotation_Label);
			this->panel1->Location = System::Drawing::Point(570, 303);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(540, 223);
			this->panel1->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(288, 191);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 27);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Borrar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(144, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 27);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Nueva";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 27);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(430, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 27);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Limpiar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MovementScroll
			// 
			this->MovementScroll->Location = System::Drawing::Point(22, 138);
			this->MovementScroll->Name = L"MovementScroll";
			this->MovementScroll->Size = System::Drawing::Size(515, 27);
			this->MovementScroll->TabIndex = 5;
			// 
			// HRadioButton
			// 
			this->HRadioButton->AutoSize = true;
			this->HRadioButton->Location = System::Drawing::Point(311, 106);
			this->HRadioButton->Name = L"HRadioButton";
			this->HRadioButton->Size = System::Drawing::Size(93, 21);
			this->HRadioButton->TabIndex = 4;
			this->HRadioButton->TabStop = true;
			this->HRadioButton->Text = L"Horizontal";
			this->HRadioButton->UseVisualStyleBackColor = true;
			// 
			// VRadioButton
			// 
			this->VRadioButton->AutoSize = true;
			this->VRadioButton->Location = System::Drawing::Point(151, 105);
			this->VRadioButton->Name = L"VRadioButton";
			this->VRadioButton->Size = System::Drawing::Size(76, 21);
			this->VRadioButton->TabIndex = 3;
			this->VRadioButton->TabStop = true;
			this->VRadioButton->Text = L"Vertical";
			this->VRadioButton->UseVisualStyleBackColor = true;
			// 
			// Movement_Label
			// 
			this->Movement_Label->AutoSize = true;
			this->Movement_Label->Location = System::Drawing::Point(237, 77);
			this->Movement_Label->Name = L"Movement_Label";
			this->Movement_Label->Size = System::Drawing::Size(47, 17);
			this->Movement_Label->TabIndex = 2;
			this->Movement_Label->Text = L"Mover";
			// 
			// Rotation_Scroll
			// 
			this->Rotation_Scroll->Location = System::Drawing::Point(22, 40);
			this->Rotation_Scroll->Name = L"Rotation_Scroll";
			this->Rotation_Scroll->Size = System::Drawing::Size(515, 28);
			this->Rotation_Scroll->TabIndex = 1;
			// 
			// Rotation_Label
			// 
			this->Rotation_Label->AutoSize = true;
			this->Rotation_Label->Location = System::Drawing::Point(237, 13);
			this->Rotation_Label->Name = L"Rotation_Label";
			this->Rotation_Label->Size = System::Drawing::Size(43, 17);
			this->Rotation_Label->TabIndex = 0;
			this->Rotation_Label->Text = L"Rotar";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(563, 519);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Controls->Add(this->radioButton3);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Location = System::Drawing::Point(570, 7);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(540, 290);
			this->panel2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Posicion X:";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(468, 6);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(69, 21);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Beizer";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(355, 6);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(72, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Cónica";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(178, 5);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(141, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Poligono Irregular";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 6);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(138, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Poligono Regular";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 532);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

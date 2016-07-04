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
	private: System::Windows::Forms::Button^  Erase_Button;

	protected:

	private: System::Windows::Forms::Button^  New_Button;

	private: System::Windows::Forms::Button^  Save_Button;
	private: System::Windows::Forms::Button^  Clear_Button;


	private: System::Windows::Forms::HScrollBar^  MovementScroll;
	private: System::Windows::Forms::RadioButton^  HRadioButton;
	private: System::Windows::Forms::RadioButton^  VRadioButton;
	private: System::Windows::Forms::Label^  Movement_Label;
	private: System::Windows::Forms::HScrollBar^  Rotation_Scroll;
	private: System::Windows::Forms::Label^  Rotation_Label;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  MainPanel;






	private: System::Windows::Forms::Label^  V1_Triang_X_Label;
	private: System::Windows::Forms::TextBox^  V3_Trian_Y_TextBox;

	private: System::Windows::Forms::TextBox^  V2_Trian_Y_TextBox;

	private: System::Windows::Forms::TextBox^  V1_Trian_Y_TextBox;
	private: System::Windows::Forms::TextBox^  V3_Trian_X_TextBox;


	private: System::Windows::Forms::TextBox^  V2_Trian_X_TextBox;
	private: System::Windows::Forms::Label^  V3_Triang_Y_Label;


	private: System::Windows::Forms::Label^  V3_Triang_X_Label;
	private: System::Windows::Forms::Label^  V2_Triang_Y_Label;


	private: System::Windows::Forms::Label^  V2_Triang_X_Label;

	private: System::Windows::Forms::Label^  V1_Triang_Y_Label;

	private: System::Windows::Forms::Label^  V3_Triang_Label;
	private: System::Windows::Forms::Label^  V2_Triang_Label;
	private: System::Windows::Forms::Label^  V1_Triang_Label;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::RadioButton^  OP4_RButton;

	private: System::Windows::Forms::RadioButton^  OP3_RButton;

	private: System::Windows::Forms::RadioButton^  OP2_RButton;

	private: System::Windows::Forms::RadioButton^  OP1_RButton;


	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::RadioButton^  Beiz_RButton;

	private: System::Windows::Forms::RadioButton^  Conic_RButton;

	private: System::Windows::Forms::RadioButton^  IrrPol_RButton;

	private: System::Windows::Forms::RadioButton^  RegPol_RButton;

	private: System::Windows::Forms::TextBox^  V1_Trian_X_TextBox;
	private: System::Windows::Forms::Button^  RegPol_Button;
	private: System::Windows::Forms::TextBox^  RegPol_Y_TextBox;
	private: System::Windows::Forms::TextBox^  RegPol_R_TextBox;

	private: System::Windows::Forms::Label^  RegPol_R_Label;

	private: System::Windows::Forms::Label^  RegPol_Y_Label;
	private: System::Windows::Forms::Label^  RegPol_Label;
	private: System::Windows::Forms::TextBox^  RegPol_X_TextBox;
	private: System::Windows::Forms::Label^  RegPol_X_Label;
	private: System::Windows::Forms::Label^  Rect_Size_Label;
	private: System::Windows::Forms::TextBox^  Rect_Height_TextBox;
	private: System::Windows::Forms::Label^  Rect_Height_Label;
	private: System::Windows::Forms::Button^  Rect_Button;
	private: System::Windows::Forms::TextBox^  Rect_Y_TextBox;
	private: System::Windows::Forms::TextBox^  Rect_Width_TextBox;
	private: System::Windows::Forms::Label^  Rect_Width_Label;
	private: System::Windows::Forms::Label^  Rect_Y_Label;
	private: System::Windows::Forms::Label^  Rec_Pos_Label;
	private: System::Windows::Forms::TextBox^  Rect_X_TextBox;
	private: System::Windows::Forms::Label^  Rec_XLabel;
	private: System::Windows::Forms::Button^  Triang_Button;
private: System::Windows::Forms::TextBox^  Beiz_NVert_TextBox;
private: System::Windows::Forms::Label^  Beiz_NVert_Label;
private: System::Windows::Forms::Label^  Beiz_VertY_Label;
private: System::Windows::Forms::Label^  Beiz_VertX_Label;
private: System::Windows::Forms::TextBox^  Beiz_VertY_TextBox;

private: System::Windows::Forms::TextBox^  Beiz_VertX_TextBox;
private: System::Windows::Forms::RadioButton^  Beiz_Curva_RButton;


private: System::Windows::Forms::RadioButton^  Beiz_Recta_RButton;
private: System::Windows::Forms::Button^  Circ_Button;
private: System::Windows::Forms::TextBox^  Circ_R_TextBox;
private: System::Windows::Forms::Label^  Circ_R_Label;
private: System::Windows::Forms::Label^  Circ_Y_Label;
private: System::Windows::Forms::Label^  Circ_X_Label;
private: System::Windows::Forms::TextBox^  Circ_Y_TextBox;
private: System::Windows::Forms::TextBox^  Circ_X_TextBox;
private: System::Windows::Forms::Button^  IrrPol_Button;
private: System::Windows::Forms::TextBox^  IrrPol_NV_TextBox;
private: System::Windows::Forms::Label^  IrrPol_NV_Label;
private: System::Windows::Forms::Label^  IrrPol_VY_Label;
private: System::Windows::Forms::Label^  IrrPol_VX_Label;
private: System::Windows::Forms::TextBox^  IrrPol_VY_TextBox;
private: System::Windows::Forms::TextBox^  IrrPol_VX_TextBox;
private: System::Windows::Forms::Button^  Beiz_Button;
private: System::Windows::Forms::TextBox^  Par_Width_TextBox;
private: System::Windows::Forms::Label^  Par_Width_Label;
private: System::Windows::Forms::Button^  Par_Button;

private: System::Windows::Forms::Label^  Par_Y_Label;
private: System::Windows::Forms::Label^  Par_X_Label;
private: System::Windows::Forms::TextBox^  Par_Y_TextBox;
private: System::Windows::Forms::TextBox^  Par_X_TextBox;
private: System::Windows::Forms::TextBox^  Par_Height_TextBox;
private: System::Windows::Forms::TextBox^  Elip_Width_TextBox;
private: System::Windows::Forms::Label^  Elip_Width_Label;
private: System::Windows::Forms::Button^  Elip_Button;
private: System::Windows::Forms::Label^  Elip_Y_Label;
private: System::Windows::Forms::Label^  Elip_X_Label;
private: System::Windows::Forms::TextBox^  Elip_Y_TextBox;
private: System::Windows::Forms::TextBox^  Elip_X_TextBox;
private: System::Windows::Forms::TextBox^  Elip_Height_TextBox;
private: System::Windows::Forms::Label^  Elip_Height_Label;
private: System::Windows::Forms::Label^  Par_Height_Label;


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
			this->Erase_Button = (gcnew System::Windows::Forms::Button());
			this->New_Button = (gcnew System::Windows::Forms::Button());
			this->Save_Button = (gcnew System::Windows::Forms::Button());
			this->Clear_Button = (gcnew System::Windows::Forms::Button());
			this->MovementScroll = (gcnew System::Windows::Forms::HScrollBar());
			this->HRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->VRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Movement_Label = (gcnew System::Windows::Forms::Label());
			this->Rotation_Scroll = (gcnew System::Windows::Forms::HScrollBar());
			this->Rotation_Label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->Par_Height_Label = (gcnew System::Windows::Forms::Label());
			this->Par_Width_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Par_Width_Label = (gcnew System::Windows::Forms::Label());
			this->Par_Button = (gcnew System::Windows::Forms::Button());
			this->Par_Y_Label = (gcnew System::Windows::Forms::Label());
			this->Par_X_Label = (gcnew System::Windows::Forms::Label());
			this->Par_Y_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Par_X_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Par_Height_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Elip_Width_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Elip_Width_Label = (gcnew System::Windows::Forms::Label());
			this->Elip_Button = (gcnew System::Windows::Forms::Button());
			this->Elip_Y_Label = (gcnew System::Windows::Forms::Label());
			this->Elip_X_Label = (gcnew System::Windows::Forms::Label());
			this->Elip_Y_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Elip_X_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Elip_Height_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Elip_Height_Label = (gcnew System::Windows::Forms::Label());
			this->Circ_Button = (gcnew System::Windows::Forms::Button());
			this->Circ_R_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Circ_R_Label = (gcnew System::Windows::Forms::Label());
			this->Circ_Y_Label = (gcnew System::Windows::Forms::Label());
			this->Circ_X_Label = (gcnew System::Windows::Forms::Label());
			this->Circ_Y_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Circ_X_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->IrrPol_Button = (gcnew System::Windows::Forms::Button());
			this->IrrPol_NV_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->IrrPol_NV_Label = (gcnew System::Windows::Forms::Label());
			this->IrrPol_VY_Label = (gcnew System::Windows::Forms::Label());
			this->IrrPol_VX_Label = (gcnew System::Windows::Forms::Label());
			this->IrrPol_VY_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->IrrPol_VX_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Beiz_Button = (gcnew System::Windows::Forms::Button());
			this->Beiz_NVert_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Beiz_NVert_Label = (gcnew System::Windows::Forms::Label());
			this->Beiz_VertY_Label = (gcnew System::Windows::Forms::Label());
			this->Beiz_VertX_Label = (gcnew System::Windows::Forms::Label());
			this->Beiz_VertY_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Beiz_VertX_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Beiz_Curva_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->Beiz_Recta_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->RegPol_Button = (gcnew System::Windows::Forms::Button());
			this->RegPol_Y_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegPol_R_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegPol_R_Label = (gcnew System::Windows::Forms::Label());
			this->RegPol_Y_Label = (gcnew System::Windows::Forms::Label());
			this->RegPol_Label = (gcnew System::Windows::Forms::Label());
			this->RegPol_X_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->RegPol_X_Label = (gcnew System::Windows::Forms::Label());
			this->Rect_Size_Label = (gcnew System::Windows::Forms::Label());
			this->Rect_Height_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Rect_Height_Label = (gcnew System::Windows::Forms::Label());
			this->Rect_Button = (gcnew System::Windows::Forms::Button());
			this->Rect_Y_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Rect_Width_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Rect_Width_Label = (gcnew System::Windows::Forms::Label());
			this->Rect_Y_Label = (gcnew System::Windows::Forms::Label());
			this->Rec_Pos_Label = (gcnew System::Windows::Forms::Label());
			this->Rect_X_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Rec_XLabel = (gcnew System::Windows::Forms::Label());
			this->Triang_Button = (gcnew System::Windows::Forms::Button());
			this->V3_Trian_Y_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->V2_Trian_Y_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->V1_Trian_Y_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->V3_Trian_X_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->V2_Trian_X_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->V3_Triang_Y_Label = (gcnew System::Windows::Forms::Label());
			this->V3_Triang_X_Label = (gcnew System::Windows::Forms::Label());
			this->V2_Triang_Y_Label = (gcnew System::Windows::Forms::Label());
			this->V2_Triang_X_Label = (gcnew System::Windows::Forms::Label());
			this->V1_Triang_Y_Label = (gcnew System::Windows::Forms::Label());
			this->V3_Triang_Label = (gcnew System::Windows::Forms::Label());
			this->V2_Triang_Label = (gcnew System::Windows::Forms::Label());
			this->V1_Triang_Label = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->OP4_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->OP3_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->OP2_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->OP1_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Beiz_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->Conic_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->IrrPol_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->RegPol_RButton = (gcnew System::Windows::Forms::RadioButton());
			this->V1_Trian_X_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->V1_Triang_X_Label = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->MainPanel->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Erase_Button);
			this->panel1->Controls->Add(this->New_Button);
			this->panel1->Controls->Add(this->Save_Button);
			this->panel1->Controls->Add(this->Clear_Button);
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
			// Erase_Button
			// 
			this->Erase_Button->Location = System::Drawing::Point(288, 191);
			this->Erase_Button->Name = L"Erase_Button";
			this->Erase_Button->Size = System::Drawing::Size(106, 27);
			this->Erase_Button->TabIndex = 9;
			this->Erase_Button->Text = L"Borrar";
			this->Erase_Button->UseVisualStyleBackColor = true;
			// 
			// New_Button
			// 
			this->New_Button->Location = System::Drawing::Point(144, 191);
			this->New_Button->Name = L"New_Button";
			this->New_Button->Size = System::Drawing::Size(106, 27);
			this->New_Button->TabIndex = 8;
			this->New_Button->Text = L"Nueva";
			this->New_Button->UseVisualStyleBackColor = true;
			// 
			// Save_Button
			// 
			this->Save_Button->Location = System::Drawing::Point(6, 191);
			this->Save_Button->Name = L"Save_Button";
			this->Save_Button->Size = System::Drawing::Size(107, 27);
			this->Save_Button->TabIndex = 7;
			this->Save_Button->Text = L"Guardar";
			this->Save_Button->UseVisualStyleBackColor = true;
			// 
			// Clear_Button
			// 
			this->Clear_Button->Location = System::Drawing::Point(430, 191);
			this->Clear_Button->Name = L"Clear_Button";
			this->Clear_Button->Size = System::Drawing::Size(107, 27);
			this->Clear_Button->TabIndex = 6;
			this->Clear_Button->Text = L"Limpiar";
			this->Clear_Button->UseVisualStyleBackColor = true;
			// 
			// MovementScroll
			// 
			this->MovementScroll->LargeChange = 1;
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
			this->Rotation_Scroll->LargeChange = 1;
			this->Rotation_Scroll->Location = System::Drawing::Point(22, 40);
			this->Rotation_Scroll->Maximum = 359;
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
			// MainPanel
			// 
			this->MainPanel->Controls->Add(this->Par_Height_Label);
			this->MainPanel->Controls->Add(this->Par_Width_TextBox);
			this->MainPanel->Controls->Add(this->Par_Width_Label);
			this->MainPanel->Controls->Add(this->Par_Button);
			this->MainPanel->Controls->Add(this->Par_Y_Label);
			this->MainPanel->Controls->Add(this->Par_X_Label);
			this->MainPanel->Controls->Add(this->Par_Y_TextBox);
			this->MainPanel->Controls->Add(this->Par_X_TextBox);
			this->MainPanel->Controls->Add(this->Par_Height_TextBox);
			this->MainPanel->Controls->Add(this->Elip_Width_TextBox);
			this->MainPanel->Controls->Add(this->Elip_Width_Label);
			this->MainPanel->Controls->Add(this->Elip_Button);
			this->MainPanel->Controls->Add(this->Elip_Y_Label);
			this->MainPanel->Controls->Add(this->Elip_X_Label);
			this->MainPanel->Controls->Add(this->Elip_Y_TextBox);
			this->MainPanel->Controls->Add(this->Elip_X_TextBox);
			this->MainPanel->Controls->Add(this->Elip_Height_TextBox);
			this->MainPanel->Controls->Add(this->Elip_Height_Label);
			this->MainPanel->Controls->Add(this->Circ_Button);
			this->MainPanel->Controls->Add(this->Circ_R_TextBox);
			this->MainPanel->Controls->Add(this->Circ_R_Label);
			this->MainPanel->Controls->Add(this->Circ_Y_Label);
			this->MainPanel->Controls->Add(this->Circ_X_Label);
			this->MainPanel->Controls->Add(this->Circ_Y_TextBox);
			this->MainPanel->Controls->Add(this->Circ_X_TextBox);
			this->MainPanel->Controls->Add(this->IrrPol_Button);
			this->MainPanel->Controls->Add(this->IrrPol_NV_TextBox);
			this->MainPanel->Controls->Add(this->IrrPol_NV_Label);
			this->MainPanel->Controls->Add(this->IrrPol_VY_Label);
			this->MainPanel->Controls->Add(this->IrrPol_VX_Label);
			this->MainPanel->Controls->Add(this->IrrPol_VY_TextBox);
			this->MainPanel->Controls->Add(this->IrrPol_VX_TextBox);
			this->MainPanel->Controls->Add(this->Beiz_Button);
			this->MainPanel->Controls->Add(this->Beiz_NVert_TextBox);
			this->MainPanel->Controls->Add(this->Beiz_NVert_Label);
			this->MainPanel->Controls->Add(this->Beiz_VertY_Label);
			this->MainPanel->Controls->Add(this->Beiz_VertX_Label);
			this->MainPanel->Controls->Add(this->Beiz_VertY_TextBox);
			this->MainPanel->Controls->Add(this->Beiz_VertX_TextBox);
			this->MainPanel->Controls->Add(this->Beiz_Curva_RButton);
			this->MainPanel->Controls->Add(this->Beiz_Recta_RButton);
			this->MainPanel->Controls->Add(this->RegPol_Button);
			this->MainPanel->Controls->Add(this->RegPol_Y_TextBox);
			this->MainPanel->Controls->Add(this->RegPol_R_TextBox);
			this->MainPanel->Controls->Add(this->RegPol_R_Label);
			this->MainPanel->Controls->Add(this->RegPol_Y_Label);
			this->MainPanel->Controls->Add(this->RegPol_Label);
			this->MainPanel->Controls->Add(this->RegPol_X_TextBox);
			this->MainPanel->Controls->Add(this->RegPol_X_Label);
			this->MainPanel->Controls->Add(this->Rect_Size_Label);
			this->MainPanel->Controls->Add(this->Rect_Height_TextBox);
			this->MainPanel->Controls->Add(this->Rect_Height_Label);
			this->MainPanel->Controls->Add(this->Rect_Button);
			this->MainPanel->Controls->Add(this->Rect_Y_TextBox);
			this->MainPanel->Controls->Add(this->Rect_Width_TextBox);
			this->MainPanel->Controls->Add(this->Rect_Width_Label);
			this->MainPanel->Controls->Add(this->Rect_Y_Label);
			this->MainPanel->Controls->Add(this->Rec_Pos_Label);
			this->MainPanel->Controls->Add(this->Rect_X_TextBox);
			this->MainPanel->Controls->Add(this->Rec_XLabel);
			this->MainPanel->Controls->Add(this->Triang_Button);
			this->MainPanel->Controls->Add(this->V3_Trian_Y_TextBox);
			this->MainPanel->Controls->Add(this->V2_Trian_Y_TextBox);
			this->MainPanel->Controls->Add(this->V1_Trian_Y_TextBox);
			this->MainPanel->Controls->Add(this->V3_Trian_X_TextBox);
			this->MainPanel->Controls->Add(this->V2_Trian_X_TextBox);
			this->MainPanel->Controls->Add(this->V3_Triang_Y_Label);
			this->MainPanel->Controls->Add(this->V3_Triang_X_Label);
			this->MainPanel->Controls->Add(this->V2_Triang_Y_Label);
			this->MainPanel->Controls->Add(this->V2_Triang_X_Label);
			this->MainPanel->Controls->Add(this->V1_Triang_Y_Label);
			this->MainPanel->Controls->Add(this->V3_Triang_Label);
			this->MainPanel->Controls->Add(this->V2_Triang_Label);
			this->MainPanel->Controls->Add(this->V1_Triang_Label);
			this->MainPanel->Controls->Add(this->panel4);
			this->MainPanel->Controls->Add(this->panel3);
			this->MainPanel->Controls->Add(this->V1_Trian_X_TextBox);
			this->MainPanel->Controls->Add(this->V1_Triang_X_Label);
			this->MainPanel->Location = System::Drawing::Point(570, 7);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(540, 290);
			this->MainPanel->TabIndex = 4;
			// 
			// Par_Height_Label
			// 
			this->Par_Height_Label->AutoSize = true;
			this->Par_Height_Label->Location = System::Drawing::Point(320, 191);
			this->Par_Height_Label->Name = L"Par_Height_Label";
			this->Par_Height_Label->Size = System::Drawing::Size(78, 17);
			this->Par_Height_Label->TabIndex = 89;
			this->Par_Height_Label->Text = L"Posicion Y:";
			this->Par_Height_Label->Visible = false;
			// 
			// Par_Width_TextBox
			// 
			this->Par_Width_TextBox->Location = System::Drawing::Point(319, 148);
			this->Par_Width_TextBox->Name = L"Par_Width_TextBox";
			this->Par_Width_TextBox->Size = System::Drawing::Size(122, 22);
			this->Par_Width_TextBox->TabIndex = 88;
			this->Par_Width_TextBox->Visible = false;
			// 
			// Par_Width_Label
			// 
			this->Par_Width_Label->AutoSize = true;
			this->Par_Width_Label->Location = System::Drawing::Point(320, 128);
			this->Par_Width_Label->Name = L"Par_Width_Label";
			this->Par_Width_Label->Size = System::Drawing::Size(78, 17);
			this->Par_Width_Label->TabIndex = 87;
			this->Par_Width_Label->Text = L"Posicion Y:";
			this->Par_Width_Label->Visible = false;
			// 
			// Par_Button
			// 
			this->Par_Button->Location = System::Drawing::Point(212, 251);
			this->Par_Button->Name = L"Par_Button";
			this->Par_Button->Size = System::Drawing::Size(132, 26);
			this->Par_Button->TabIndex = 86;
			this->Par_Button->Text = L"Dibujar";
			this->Par_Button->UseVisualStyleBackColor = true;
			this->Par_Button->Visible = false;
			// 
			// Par_Y_Label
			// 
			this->Par_Y_Label->AutoSize = true;
			this->Par_Y_Label->Location = System::Drawing::Point(126, 191);
			this->Par_Y_Label->Name = L"Par_Y_Label";
			this->Par_Y_Label->Size = System::Drawing::Size(78, 17);
			this->Par_Y_Label->TabIndex = 85;
			this->Par_Y_Label->Text = L"Posicion Y:";
			this->Par_Y_Label->Visible = false;
			// 
			// Par_X_Label
			// 
			this->Par_X_Label->AutoSize = true;
			this->Par_X_Label->Location = System::Drawing::Point(123, 128);
			this->Par_X_Label->Name = L"Par_X_Label";
			this->Par_X_Label->Size = System::Drawing::Size(78, 17);
			this->Par_X_Label->TabIndex = 84;
			this->Par_X_Label->Text = L"Posicion X:";
			this->Par_X_Label->Visible = false;
			// 
			// Par_Y_TextBox
			// 
			this->Par_Y_TextBox->Location = System::Drawing::Point(123, 211);
			this->Par_Y_TextBox->Name = L"Par_Y_TextBox";
			this->Par_Y_TextBox->Size = System::Drawing::Size(122, 22);
			this->Par_Y_TextBox->TabIndex = 83;
			this->Par_Y_TextBox->Visible = false;
			// 
			// Par_X_TextBox
			// 
			this->Par_X_TextBox->Location = System::Drawing::Point(123, 148);
			this->Par_X_TextBox->Name = L"Par_X_TextBox";
			this->Par_X_TextBox->Size = System::Drawing::Size(122, 22);
			this->Par_X_TextBox->TabIndex = 82;
			this->Par_X_TextBox->Visible = false;
			// 
			// Par_Height_TextBox
			// 
			this->Par_Height_TextBox->Location = System::Drawing::Point(319, 211);
			this->Par_Height_TextBox->Name = L"Par_Height_TextBox";
			this->Par_Height_TextBox->Size = System::Drawing::Size(122, 22);
			this->Par_Height_TextBox->TabIndex = 81;
			this->Par_Height_TextBox->Visible = false;
			// 
			// Elip_Width_TextBox
			// 
			this->Elip_Width_TextBox->Location = System::Drawing::Point(319, 148);
			this->Elip_Width_TextBox->Name = L"Elip_Width_TextBox";
			this->Elip_Width_TextBox->Size = System::Drawing::Size(122, 22);
			this->Elip_Width_TextBox->TabIndex = 80;
			this->Elip_Width_TextBox->Visible = false;
			// 
			// Elip_Width_Label
			// 
			this->Elip_Width_Label->AutoSize = true;
			this->Elip_Width_Label->Location = System::Drawing::Point(320, 128);
			this->Elip_Width_Label->Name = L"Elip_Width_Label";
			this->Elip_Width_Label->Size = System::Drawing::Size(78, 17);
			this->Elip_Width_Label->TabIndex = 79;
			this->Elip_Width_Label->Text = L"Posicion Y:";
			this->Elip_Width_Label->Visible = false;
			// 
			// Elip_Button
			// 
			this->Elip_Button->Location = System::Drawing::Point(212, 251);
			this->Elip_Button->Name = L"Elip_Button";
			this->Elip_Button->Size = System::Drawing::Size(132, 26);
			this->Elip_Button->TabIndex = 78;
			this->Elip_Button->Text = L"Dibujar";
			this->Elip_Button->UseVisualStyleBackColor = true;
			this->Elip_Button->Visible = false;
			// 
			// Elip_Y_Label
			// 
			this->Elip_Y_Label->AutoSize = true;
			this->Elip_Y_Label->Location = System::Drawing::Point(126, 191);
			this->Elip_Y_Label->Name = L"Elip_Y_Label";
			this->Elip_Y_Label->Size = System::Drawing::Size(78, 17);
			this->Elip_Y_Label->TabIndex = 77;
			this->Elip_Y_Label->Text = L"Posicion Y:";
			this->Elip_Y_Label->Visible = false;
			// 
			// Elip_X_Label
			// 
			this->Elip_X_Label->AutoSize = true;
			this->Elip_X_Label->Location = System::Drawing::Point(123, 128);
			this->Elip_X_Label->Name = L"Elip_X_Label";
			this->Elip_X_Label->Size = System::Drawing::Size(78, 17);
			this->Elip_X_Label->TabIndex = 76;
			this->Elip_X_Label->Text = L"Posicion X:";
			this->Elip_X_Label->Visible = false;
			// 
			// Elip_Y_TextBox
			// 
			this->Elip_Y_TextBox->Location = System::Drawing::Point(123, 211);
			this->Elip_Y_TextBox->Name = L"Elip_Y_TextBox";
			this->Elip_Y_TextBox->Size = System::Drawing::Size(122, 22);
			this->Elip_Y_TextBox->TabIndex = 75;
			this->Elip_Y_TextBox->Visible = false;
			// 
			// Elip_X_TextBox
			// 
			this->Elip_X_TextBox->Location = System::Drawing::Point(123, 148);
			this->Elip_X_TextBox->Name = L"Elip_X_TextBox";
			this->Elip_X_TextBox->Size = System::Drawing::Size(122, 22);
			this->Elip_X_TextBox->TabIndex = 74;
			this->Elip_X_TextBox->Visible = false;
			// 
			// Elip_Height_TextBox
			// 
			this->Elip_Height_TextBox->Location = System::Drawing::Point(319, 211);
			this->Elip_Height_TextBox->Name = L"Elip_Height_TextBox";
			this->Elip_Height_TextBox->Size = System::Drawing::Size(122, 22);
			this->Elip_Height_TextBox->TabIndex = 73;
			this->Elip_Height_TextBox->Visible = false;
			// 
			// Elip_Height_Label
			// 
			this->Elip_Height_Label->AutoSize = true;
			this->Elip_Height_Label->Location = System::Drawing::Point(320, 191);
			this->Elip_Height_Label->Name = L"Elip_Height_Label";
			this->Elip_Height_Label->Size = System::Drawing::Size(78, 17);
			this->Elip_Height_Label->TabIndex = 72;
			this->Elip_Height_Label->Text = L"Posicion Y:";
			this->Elip_Height_Label->Visible = false;
			// 
			// Circ_Button
			// 
			this->Circ_Button->Location = System::Drawing::Point(212, 251);
			this->Circ_Button->Name = L"Circ_Button";
			this->Circ_Button->Size = System::Drawing::Size(132, 26);
			this->Circ_Button->TabIndex = 71;
			this->Circ_Button->Text = L"Dibujar";
			this->Circ_Button->UseVisualStyleBackColor = true;
			this->Circ_Button->Visible = false;
			// 
			// Circ_R_TextBox
			// 
			this->Circ_R_TextBox->Location = System::Drawing::Point(221, 105);
			this->Circ_R_TextBox->Name = L"Circ_R_TextBox";
			this->Circ_R_TextBox->Size = System::Drawing::Size(122, 22);
			this->Circ_R_TextBox->TabIndex = 70;
			this->Circ_R_TextBox->Visible = false;
			// 
			// Circ_R_Label
			// 
			this->Circ_R_Label->AutoSize = true;
			this->Circ_R_Label->Location = System::Drawing::Point(221, 85);
			this->Circ_R_Label->Name = L"Circ_R_Label";
			this->Circ_R_Label->Size = System::Drawing::Size(45, 17);
			this->Circ_R_Label->TabIndex = 69;
			this->Circ_R_Label->Text = L"Radio";
			this->Circ_R_Label->Visible = false;
			// 
			// Circ_Y_Label
			// 
			this->Circ_Y_Label->AutoSize = true;
			this->Circ_Y_Label->Location = System::Drawing::Point(224, 191);
			this->Circ_Y_Label->Name = L"Circ_Y_Label";
			this->Circ_Y_Label->Size = System::Drawing::Size(78, 17);
			this->Circ_Y_Label->TabIndex = 68;
			this->Circ_Y_Label->Text = L"Posicion Y:";
			this->Circ_Y_Label->Visible = false;
			// 
			// Circ_X_Label
			// 
			this->Circ_X_Label->AutoSize = true;
			this->Circ_X_Label->Location = System::Drawing::Point(221, 128);
			this->Circ_X_Label->Name = L"Circ_X_Label";
			this->Circ_X_Label->Size = System::Drawing::Size(78, 17);
			this->Circ_X_Label->TabIndex = 67;
			this->Circ_X_Label->Text = L"Posicion X:";
			this->Circ_X_Label->Visible = false;
			// 
			// Circ_Y_TextBox
			// 
			this->Circ_Y_TextBox->Location = System::Drawing::Point(221, 211);
			this->Circ_Y_TextBox->Name = L"Circ_Y_TextBox";
			this->Circ_Y_TextBox->Size = System::Drawing::Size(122, 22);
			this->Circ_Y_TextBox->TabIndex = 66;
			this->Circ_Y_TextBox->Visible = false;
			// 
			// Circ_X_TextBox
			// 
			this->Circ_X_TextBox->Location = System::Drawing::Point(221, 148);
			this->Circ_X_TextBox->Name = L"Circ_X_TextBox";
			this->Circ_X_TextBox->Size = System::Drawing::Size(122, 22);
			this->Circ_X_TextBox->TabIndex = 65;
			this->Circ_X_TextBox->Visible = false;
			// 
			// IrrPol_Button
			// 
			this->IrrPol_Button->Location = System::Drawing::Point(212, 251);
			this->IrrPol_Button->Name = L"IrrPol_Button";
			this->IrrPol_Button->Size = System::Drawing::Size(132, 26);
			this->IrrPol_Button->TabIndex = 64;
			this->IrrPol_Button->Text = L"Guardar";
			this->IrrPol_Button->UseVisualStyleBackColor = true;
			this->IrrPol_Button->Visible = false;
			// 
			// IrrPol_NV_TextBox
			// 
			this->IrrPol_NV_TextBox->Location = System::Drawing::Point(259, 87);
			this->IrrPol_NV_TextBox->Name = L"IrrPol_NV_TextBox";
			this->IrrPol_NV_TextBox->Size = System::Drawing::Size(122, 22);
			this->IrrPol_NV_TextBox->TabIndex = 63;
			this->IrrPol_NV_TextBox->Visible = false;
			// 
			// IrrPol_NV_Label
			// 
			this->IrrPol_NV_Label->AutoSize = true;
			this->IrrPol_NV_Label->Location = System::Drawing::Point(120, 90);
			this->IrrPol_NV_Label->Name = L"IrrPol_NV_Label";
			this->IrrPol_NV_Label->Size = System::Drawing::Size(133, 17);
			this->IrrPol_NV_Label->TabIndex = 62;
			this->IrrPol_NV_Label->Text = L"Numero de Vertices";
			this->IrrPol_NV_Label->Visible = false;
			// 
			// IrrPol_VY_Label
			// 
			this->IrrPol_VY_Label->AutoSize = true;
			this->IrrPol_VY_Label->Location = System::Drawing::Point(224, 191);
			this->IrrPol_VY_Label->Name = L"IrrPol_VY_Label";
			this->IrrPol_VY_Label->Size = System::Drawing::Size(78, 17);
			this->IrrPol_VY_Label->TabIndex = 61;
			this->IrrPol_VY_Label->Text = L"Posicion Y:";
			this->IrrPol_VY_Label->Visible = false;
			// 
			// IrrPol_VX_Label
			// 
			this->IrrPol_VX_Label->AutoSize = true;
			this->IrrPol_VX_Label->Location = System::Drawing::Point(221, 128);
			this->IrrPol_VX_Label->Name = L"IrrPol_VX_Label";
			this->IrrPol_VX_Label->Size = System::Drawing::Size(78, 17);
			this->IrrPol_VX_Label->TabIndex = 60;
			this->IrrPol_VX_Label->Text = L"Posicion X:";
			this->IrrPol_VX_Label->Visible = false;
			// 
			// IrrPol_VY_TextBox
			// 
			this->IrrPol_VY_TextBox->Location = System::Drawing::Point(221, 211);
			this->IrrPol_VY_TextBox->Name = L"IrrPol_VY_TextBox";
			this->IrrPol_VY_TextBox->Size = System::Drawing::Size(122, 22);
			this->IrrPol_VY_TextBox->TabIndex = 59;
			this->IrrPol_VY_TextBox->Visible = false;
			// 
			// IrrPol_VX_TextBox
			// 
			this->IrrPol_VX_TextBox->Location = System::Drawing::Point(221, 148);
			this->IrrPol_VX_TextBox->Name = L"IrrPol_VX_TextBox";
			this->IrrPol_VX_TextBox->Size = System::Drawing::Size(122, 22);
			this->IrrPol_VX_TextBox->TabIndex = 58;
			this->IrrPol_VX_TextBox->Visible = false;
			// 
			// Beiz_Button
			// 
			this->Beiz_Button->Location = System::Drawing::Point(211, 251);
			this->Beiz_Button->Name = L"Beiz_Button";
			this->Beiz_Button->Size = System::Drawing::Size(132, 26);
			this->Beiz_Button->TabIndex = 57;
			this->Beiz_Button->Text = L"Guardar";
			this->Beiz_Button->UseVisualStyleBackColor = true;
			this->Beiz_Button->Visible = false;
			// 
			// Beiz_NVert_TextBox
			// 
			this->Beiz_NVert_TextBox->Location = System::Drawing::Point(258, 87);
			this->Beiz_NVert_TextBox->Name = L"Beiz_NVert_TextBox";
			this->Beiz_NVert_TextBox->Size = System::Drawing::Size(122, 22);
			this->Beiz_NVert_TextBox->TabIndex = 56;
			this->Beiz_NVert_TextBox->Visible = false;
			// 
			// Beiz_NVert_Label
			// 
			this->Beiz_NVert_Label->AutoSize = true;
			this->Beiz_NVert_Label->Location = System::Drawing::Point(119, 90);
			this->Beiz_NVert_Label->Name = L"Beiz_NVert_Label";
			this->Beiz_NVert_Label->Size = System::Drawing::Size(133, 17);
			this->Beiz_NVert_Label->TabIndex = 55;
			this->Beiz_NVert_Label->Text = L"Numero de Vertices";
			this->Beiz_NVert_Label->Visible = false;
			// 
			// Beiz_VertY_Label
			// 
			this->Beiz_VertY_Label->AutoSize = true;
			this->Beiz_VertY_Label->Location = System::Drawing::Point(126, 191);
			this->Beiz_VertY_Label->Name = L"Beiz_VertY_Label";
			this->Beiz_VertY_Label->Size = System::Drawing::Size(78, 17);
			this->Beiz_VertY_Label->TabIndex = 54;
			this->Beiz_VertY_Label->Text = L"Posicion Y:";
			this->Beiz_VertY_Label->Visible = false;
			// 
			// Beiz_VertX_Label
			// 
			this->Beiz_VertX_Label->AutoSize = true;
			this->Beiz_VertX_Label->Location = System::Drawing::Point(123, 128);
			this->Beiz_VertX_Label->Name = L"Beiz_VertX_Label";
			this->Beiz_VertX_Label->Size = System::Drawing::Size(78, 17);
			this->Beiz_VertX_Label->TabIndex = 53;
			this->Beiz_VertX_Label->Text = L"Posicion X:";
			this->Beiz_VertX_Label->Visible = false;
			// 
			// Beiz_VertY_TextBox
			// 
			this->Beiz_VertY_TextBox->Location = System::Drawing::Point(123, 211);
			this->Beiz_VertY_TextBox->Name = L"Beiz_VertY_TextBox";
			this->Beiz_VertY_TextBox->Size = System::Drawing::Size(122, 22);
			this->Beiz_VertY_TextBox->TabIndex = 52;
			this->Beiz_VertY_TextBox->Visible = false;
			// 
			// Beiz_VertX_TextBox
			// 
			this->Beiz_VertX_TextBox->Location = System::Drawing::Point(123, 148);
			this->Beiz_VertX_TextBox->Name = L"Beiz_VertX_TextBox";
			this->Beiz_VertX_TextBox->Size = System::Drawing::Size(122, 22);
			this->Beiz_VertX_TextBox->TabIndex = 51;
			this->Beiz_VertX_TextBox->Visible = false;
			// 
			// Beiz_Curva_RButton
			// 
			this->Beiz_Curva_RButton->AutoSize = true;
			this->Beiz_Curva_RButton->Location = System::Drawing::Point(319, 211);
			this->Beiz_Curva_RButton->Name = L"Beiz_Curva_RButton";
			this->Beiz_Curva_RButton->Size = System::Drawing::Size(66, 21);
			this->Beiz_Curva_RButton->TabIndex = 50;
			this->Beiz_Curva_RButton->TabStop = true;
			this->Beiz_Curva_RButton->Text = L"Curva";
			this->Beiz_Curva_RButton->UseVisualStyleBackColor = true;
			this->Beiz_Curva_RButton->Visible = false;
			// 
			// Beiz_Recta_RButton
			// 
			this->Beiz_Recta_RButton->AutoSize = true;
			this->Beiz_Recta_RButton->Location = System::Drawing::Point(319, 148);
			this->Beiz_Recta_RButton->Name = L"Beiz_Recta_RButton";
			this->Beiz_Recta_RButton->Size = System::Drawing::Size(66, 21);
			this->Beiz_Recta_RButton->TabIndex = 49;
			this->Beiz_Recta_RButton->TabStop = true;
			this->Beiz_Recta_RButton->Text = L"Recta";
			this->Beiz_Recta_RButton->UseVisualStyleBackColor = true;
			this->Beiz_Recta_RButton->Visible = false;
			// 
			// RegPol_Button
			// 
			this->RegPol_Button->Location = System::Drawing::Point(211, 251);
			this->RegPol_Button->Name = L"RegPol_Button";
			this->RegPol_Button->Size = System::Drawing::Size(132, 26);
			this->RegPol_Button->TabIndex = 48;
			this->RegPol_Button->Text = L"Dibujar";
			this->RegPol_Button->UseVisualStyleBackColor = true;
			this->RegPol_Button->Visible = false;
			// 
			// RegPol_Y_TextBox
			// 
			this->RegPol_Y_TextBox->Location = System::Drawing::Point(122, 211);
			this->RegPol_Y_TextBox->Name = L"RegPol_Y_TextBox";
			this->RegPol_Y_TextBox->Size = System::Drawing::Size(122, 22);
			this->RegPol_Y_TextBox->TabIndex = 47;
			this->RegPol_Y_TextBox->Visible = false;
			// 
			// RegPol_R_TextBox
			// 
			this->RegPol_R_TextBox->Location = System::Drawing::Point(323, 148);
			this->RegPol_R_TextBox->Name = L"RegPol_R_TextBox";
			this->RegPol_R_TextBox->Size = System::Drawing::Size(122, 22);
			this->RegPol_R_TextBox->TabIndex = 46;
			this->RegPol_R_TextBox->Visible = false;
			// 
			// RegPol_R_Label
			// 
			this->RegPol_R_Label->AutoSize = true;
			this->RegPol_R_Label->Location = System::Drawing::Point(320, 128);
			this->RegPol_R_Label->Name = L"RegPol_R_Label";
			this->RegPol_R_Label->Size = System::Drawing::Size(194, 17);
			this->RegPol_R_Label->TabIndex = 45;
			this->RegPol_R_Label->Text = L"Distancia del centro al vertice";
			this->RegPol_R_Label->Visible = false;
			// 
			// RegPol_Y_Label
			// 
			this->RegPol_Y_Label->AutoSize = true;
			this->RegPol_Y_Label->Location = System::Drawing::Point(123, 191);
			this->RegPol_Y_Label->Name = L"RegPol_Y_Label";
			this->RegPol_Y_Label->Size = System::Drawing::Size(78, 17);
			this->RegPol_Y_Label->TabIndex = 44;
			this->RegPol_Y_Label->Text = L"Posicion Y:";
			this->RegPol_Y_Label->Visible = false;
			// 
			// RegPol_Label
			// 
			this->RegPol_Label->AutoSize = true;
			this->RegPol_Label->Location = System::Drawing::Point(123, 85);
			this->RegPol_Label->Name = L"RegPol_Label";
			this->RegPol_Label->Size = System::Drawing::Size(61, 17);
			this->RegPol_Label->TabIndex = 43;
			this->RegPol_Label->Text = L"Posicion";
			this->RegPol_Label->Visible = false;
			// 
			// RegPol_X_TextBox
			// 
			this->RegPol_X_TextBox->Location = System::Drawing::Point(122, 148);
			this->RegPol_X_TextBox->Name = L"RegPol_X_TextBox";
			this->RegPol_X_TextBox->Size = System::Drawing::Size(122, 22);
			this->RegPol_X_TextBox->TabIndex = 42;
			this->RegPol_X_TextBox->Visible = false;
			// 
			// RegPol_X_Label
			// 
			this->RegPol_X_Label->AutoSize = true;
			this->RegPol_X_Label->Location = System::Drawing::Point(120, 128);
			this->RegPol_X_Label->Name = L"RegPol_X_Label";
			this->RegPol_X_Label->Size = System::Drawing::Size(78, 17);
			this->RegPol_X_Label->TabIndex = 41;
			this->RegPol_X_Label->Text = L"Posicion X:";
			this->RegPol_X_Label->Visible = false;
			// 
			// Rect_Size_Label
			// 
			this->Rect_Size_Label->AutoSize = true;
			this->Rect_Size_Label->Location = System::Drawing::Point(320, 85);
			this->Rect_Size_Label->Name = L"Rect_Size_Label";
			this->Rect_Size_Label->Size = System::Drawing::Size(89, 17);
			this->Rect_Size_Label->TabIndex = 40;
			this->Rect_Size_Label->Text = L"Dimensiones";
			this->Rect_Size_Label->Visible = false;
			// 
			// Rect_Height_TextBox
			// 
			this->Rect_Height_TextBox->Location = System::Drawing::Point(319, 211);
			this->Rect_Height_TextBox->Name = L"Rect_Height_TextBox";
			this->Rect_Height_TextBox->Size = System::Drawing::Size(122, 22);
			this->Rect_Height_TextBox->TabIndex = 39;
			this->Rect_Height_TextBox->Visible = false;
			// 
			// Rect_Height_Label
			// 
			this->Rect_Height_Label->AutoSize = true;
			this->Rect_Height_Label->Location = System::Drawing::Point(320, 191);
			this->Rect_Height_Label->Name = L"Rect_Height_Label";
			this->Rect_Height_Label->Size = System::Drawing::Size(78, 17);
			this->Rect_Height_Label->TabIndex = 38;
			this->Rect_Height_Label->Text = L"Posicion Y:";
			this->Rect_Height_Label->Visible = false;
			// 
			// Rect_Button
			// 
			this->Rect_Button->Location = System::Drawing::Point(211, 251);
			this->Rect_Button->Name = L"Rect_Button";
			this->Rect_Button->Size = System::Drawing::Size(132, 26);
			this->Rect_Button->TabIndex = 37;
			this->Rect_Button->Text = L"Dibujar";
			this->Rect_Button->UseVisualStyleBackColor = true;
			this->Rect_Button->Visible = false;
			// 
			// Rect_Y_TextBox
			// 
			this->Rect_Y_TextBox->Location = System::Drawing::Point(122, 211);
			this->Rect_Y_TextBox->Name = L"Rect_Y_TextBox";
			this->Rect_Y_TextBox->Size = System::Drawing::Size(122, 22);
			this->Rect_Y_TextBox->TabIndex = 36;
			this->Rect_Y_TextBox->Visible = false;
			// 
			// Rect_Width_TextBox
			// 
			this->Rect_Width_TextBox->Location = System::Drawing::Point(323, 148);
			this->Rect_Width_TextBox->Name = L"Rect_Width_TextBox";
			this->Rect_Width_TextBox->Size = System::Drawing::Size(122, 22);
			this->Rect_Width_TextBox->TabIndex = 35;
			this->Rect_Width_TextBox->Visible = false;
			// 
			// Rect_Width_Label
			// 
			this->Rect_Width_Label->AutoSize = true;
			this->Rect_Width_Label->Location = System::Drawing::Point(320, 128);
			this->Rect_Width_Label->Name = L"Rect_Width_Label";
			this->Rect_Width_Label->Size = System::Drawing::Size(78, 17);
			this->Rect_Width_Label->TabIndex = 34;
			this->Rect_Width_Label->Text = L"Posicion X:";
			this->Rect_Width_Label->Visible = false;
			// 
			// Rect_Y_Label
			// 
			this->Rect_Y_Label->AutoSize = true;
			this->Rect_Y_Label->Location = System::Drawing::Point(123, 191);
			this->Rect_Y_Label->Name = L"Rect_Y_Label";
			this->Rect_Y_Label->Size = System::Drawing::Size(78, 17);
			this->Rect_Y_Label->TabIndex = 33;
			this->Rect_Y_Label->Text = L"Posicion Y:";
			this->Rect_Y_Label->Visible = false;
			// 
			// Rec_Pos_Label
			// 
			this->Rec_Pos_Label->AutoSize = true;
			this->Rec_Pos_Label->Location = System::Drawing::Point(123, 85);
			this->Rec_Pos_Label->Name = L"Rec_Pos_Label";
			this->Rec_Pos_Label->Size = System::Drawing::Size(61, 17);
			this->Rec_Pos_Label->TabIndex = 32;
			this->Rec_Pos_Label->Text = L"Posicion";
			this->Rec_Pos_Label->Visible = false;
			// 
			// Rect_X_TextBox
			// 
			this->Rect_X_TextBox->Location = System::Drawing::Point(122, 148);
			this->Rect_X_TextBox->Name = L"Rect_X_TextBox";
			this->Rect_X_TextBox->Size = System::Drawing::Size(122, 22);
			this->Rect_X_TextBox->TabIndex = 31;
			this->Rect_X_TextBox->Visible = false;
			// 
			// Rec_XLabel
			// 
			this->Rec_XLabel->AutoSize = true;
			this->Rec_XLabel->Location = System::Drawing::Point(120, 128);
			this->Rec_XLabel->Name = L"Rec_XLabel";
			this->Rec_XLabel->Size = System::Drawing::Size(78, 17);
			this->Rec_XLabel->TabIndex = 30;
			this->Rec_XLabel->Text = L"Posicion X:";
			this->Rec_XLabel->Visible = false;
			// 
			// Triang_Button
			// 
			this->Triang_Button->Location = System::Drawing::Point(211, 251);
			this->Triang_Button->Name = L"Triang_Button";
			this->Triang_Button->Size = System::Drawing::Size(132, 26);
			this->Triang_Button->TabIndex = 21;
			this->Triang_Button->Text = L"Dibujar";
			this->Triang_Button->UseVisualStyleBackColor = true;
			this->Triang_Button->Visible = false;
			// 
			// V3_Trian_Y_TextBox
			// 
			this->V3_Trian_Y_TextBox->Location = System::Drawing::Point(413, 211);
			this->V3_Trian_Y_TextBox->Name = L"V3_Trian_Y_TextBox";
			this->V3_Trian_Y_TextBox->Size = System::Drawing::Size(122, 22);
			this->V3_Trian_Y_TextBox->TabIndex = 20;
			this->V3_Trian_Y_TextBox->Visible = false;
			// 
			// V2_Trian_Y_TextBox
			// 
			this->V2_Trian_Y_TextBox->Location = System::Drawing::Point(222, 211);
			this->V2_Trian_Y_TextBox->Name = L"V2_Trian_Y_TextBox";
			this->V2_Trian_Y_TextBox->Size = System::Drawing::Size(122, 22);
			this->V2_Trian_Y_TextBox->TabIndex = 19;
			this->V2_Trian_Y_TextBox->Visible = false;
			// 
			// V1_Trian_Y_TextBox
			// 
			this->V1_Trian_Y_TextBox->Location = System::Drawing::Point(21, 211);
			this->V1_Trian_Y_TextBox->Name = L"V1_Trian_Y_TextBox";
			this->V1_Trian_Y_TextBox->Size = System::Drawing::Size(122, 22);
			this->V1_Trian_Y_TextBox->TabIndex = 18;
			this->V1_Trian_Y_TextBox->Visible = false;
			// 
			// V3_Trian_X_TextBox
			// 
			this->V3_Trian_X_TextBox->Location = System::Drawing::Point(413, 148);
			this->V3_Trian_X_TextBox->Name = L"V3_Trian_X_TextBox";
			this->V3_Trian_X_TextBox->Size = System::Drawing::Size(122, 22);
			this->V3_Trian_X_TextBox->TabIndex = 17;
			this->V3_Trian_X_TextBox->Visible = false;
			// 
			// V2_Trian_X_TextBox
			// 
			this->V2_Trian_X_TextBox->Location = System::Drawing::Point(222, 148);
			this->V2_Trian_X_TextBox->Name = L"V2_Trian_X_TextBox";
			this->V2_Trian_X_TextBox->Size = System::Drawing::Size(122, 22);
			this->V2_Trian_X_TextBox->TabIndex = 16;
			this->V2_Trian_X_TextBox->Visible = false;
			// 
			// V3_Triang_Y_Label
			// 
			this->V3_Triang_Y_Label->AutoSize = true;
			this->V3_Triang_Y_Label->Location = System::Drawing::Point(413, 191);
			this->V3_Triang_Y_Label->Name = L"V3_Triang_Y_Label";
			this->V3_Triang_Y_Label->Size = System::Drawing::Size(70, 17);
			this->V3_Triang_Y_Label->TabIndex = 15;
			this->V3_Triang_Y_Label->Text = L"Psicion Y:";
			this->V3_Triang_Y_Label->Visible = false;
			// 
			// V3_Triang_X_Label
			// 
			this->V3_Triang_X_Label->AutoSize = true;
			this->V3_Triang_X_Label->Location = System::Drawing::Point(410, 128);
			this->V3_Triang_X_Label->Name = L"V3_Triang_X_Label";
			this->V3_Triang_X_Label->Size = System::Drawing::Size(78, 17);
			this->V3_Triang_X_Label->TabIndex = 14;
			this->V3_Triang_X_Label->Text = L"Posicion X:";
			this->V3_Triang_X_Label->Visible = false;
			// 
			// V2_Triang_Y_Label
			// 
			this->V2_Triang_Y_Label->AutoSize = true;
			this->V2_Triang_Y_Label->Location = System::Drawing::Point(222, 191);
			this->V2_Triang_Y_Label->Name = L"V2_Triang_Y_Label";
			this->V2_Triang_Y_Label->Size = System::Drawing::Size(70, 17);
			this->V2_Triang_Y_Label->TabIndex = 13;
			this->V2_Triang_Y_Label->Text = L"Psicion Y:";
			this->V2_Triang_Y_Label->Visible = false;
			// 
			// V2_Triang_X_Label
			// 
			this->V2_Triang_X_Label->AutoSize = true;
			this->V2_Triang_X_Label->Location = System::Drawing::Point(219, 128);
			this->V2_Triang_X_Label->Name = L"V2_Triang_X_Label";
			this->V2_Triang_X_Label->Size = System::Drawing::Size(78, 17);
			this->V2_Triang_X_Label->TabIndex = 12;
			this->V2_Triang_X_Label->Text = L"Posicion X:";
			this->V2_Triang_X_Label->Visible = false;
			// 
			// V1_Triang_Y_Label
			// 
			this->V1_Triang_Y_Label->AutoSize = true;
			this->V1_Triang_Y_Label->Location = System::Drawing::Point(22, 191);
			this->V1_Triang_Y_Label->Name = L"V1_Triang_Y_Label";
			this->V1_Triang_Y_Label->Size = System::Drawing::Size(70, 17);
			this->V1_Triang_Y_Label->TabIndex = 11;
			this->V1_Triang_Y_Label->Text = L"Psicion Y:";
			this->V1_Triang_Y_Label->Visible = false;
			// 
			// V3_Triang_Label
			// 
			this->V3_Triang_Label->AutoSize = true;
			this->V3_Triang_Label->Location = System::Drawing::Point(413, 85);
			this->V3_Triang_Label->Name = L"V3_Triang_Label";
			this->V3_Triang_Label->Size = System::Drawing::Size(85, 17);
			this->V3_Triang_Label->TabIndex = 10;
			this->V3_Triang_Label->Text = L"Vertice Tres";
			this->V3_Triang_Label->Visible = false;
			// 
			// V2_Triang_Label
			// 
			this->V2_Triang_Label->AutoSize = true;
			this->V2_Triang_Label->Location = System::Drawing::Point(222, 85);
			this->V2_Triang_Label->Name = L"V2_Triang_Label";
			this->V2_Triang_Label->Size = System::Drawing::Size(81, 17);
			this->V2_Triang_Label->TabIndex = 9;
			this->V2_Triang_Label->Text = L"Vertice Dos";
			this->V2_Triang_Label->Visible = false;
			// 
			// V1_Triang_Label
			// 
			this->V1_Triang_Label->AutoSize = true;
			this->V1_Triang_Label->Location = System::Drawing::Point(22, 85);
			this->V1_Triang_Label->Name = L"V1_Triang_Label";
			this->V1_Triang_Label->Size = System::Drawing::Size(80, 17);
			this->V1_Triang_Label->TabIndex = 8;
			this->V1_Triang_Label->Text = L"Vertice uno";
			this->V1_Triang_Label->Visible = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->OP4_RButton);
			this->panel4->Controls->Add(this->OP3_RButton);
			this->panel4->Controls->Add(this->OP2_RButton);
			this->panel4->Controls->Add(this->OP1_RButton);
			this->panel4->Location = System::Drawing::Point(0, 35);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(540, 30);
			this->panel4->TabIndex = 7;
			// 
			// OP4_RButton
			// 
			this->OP4_RButton->AutoSize = true;
			this->OP4_RButton->Location = System::Drawing::Point(416, 4);
			this->OP4_RButton->Name = L"OP4_RButton";
			this->OP4_RButton->Size = System::Drawing::Size(110, 21);
			this->OP4_RButton->TabIndex = 3;
			this->OP4_RButton->TabStop = true;
			this->OP4_RButton->Text = L"radioButton8";
			this->OP4_RButton->UseVisualStyleBackColor = true;
			this->OP4_RButton->Visible = false;
			// 
			// OP3_RButton
			// 
			this->OP3_RButton->AutoSize = true;
			this->OP3_RButton->Location = System::Drawing::Point(284, 4);
			this->OP3_RButton->Name = L"OP3_RButton";
			this->OP3_RButton->Size = System::Drawing::Size(110, 21);
			this->OP3_RButton->TabIndex = 2;
			this->OP3_RButton->TabStop = true;
			this->OP3_RButton->Text = L"radioButton7";
			this->OP3_RButton->UseVisualStyleBackColor = true;
			this->OP3_RButton->Visible = false;
			// 
			// OP2_RButton
			// 
			this->OP2_RButton->AutoSize = true;
			this->OP2_RButton->Location = System::Drawing::Point(151, 4);
			this->OP2_RButton->Name = L"OP2_RButton";
			this->OP2_RButton->Size = System::Drawing::Size(110, 21);
			this->OP2_RButton->TabIndex = 1;
			this->OP2_RButton->TabStop = true;
			this->OP2_RButton->Text = L"radioButton6";
			this->OP2_RButton->UseVisualStyleBackColor = true;
			this->OP2_RButton->Visible = false;
			// 
			// OP1_RButton
			// 
			this->OP1_RButton->AutoSize = true;
			this->OP1_RButton->Location = System::Drawing::Point(4, 4);
			this->OP1_RButton->Name = L"OP1_RButton";
			this->OP1_RButton->Size = System::Drawing::Size(110, 21);
			this->OP1_RButton->TabIndex = 0;
			this->OP1_RButton->TabStop = true;
			this->OP1_RButton->Text = L"radioButton5";
			this->OP1_RButton->UseVisualStyleBackColor = true;
			this->OP1_RButton->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->Beiz_RButton);
			this->panel3->Controls->Add(this->Conic_RButton);
			this->panel3->Controls->Add(this->IrrPol_RButton);
			this->panel3->Controls->Add(this->RegPol_RButton);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(540, 35);
			this->panel3->TabIndex = 6;
			// 
			// Beiz_RButton
			// 
			this->Beiz_RButton->AutoSize = true;
			this->Beiz_RButton->Location = System::Drawing::Point(457, 7);
			this->Beiz_RButton->Name = L"Beiz_RButton";
			this->Beiz_RButton->Size = System::Drawing::Size(69, 21);
			this->Beiz_RButton->TabIndex = 7;
			this->Beiz_RButton->TabStop = true;
			this->Beiz_RButton->Text = L"Beizer";
			this->Beiz_RButton->UseVisualStyleBackColor = true;
			// 
			// Conic_RButton
			// 
			this->Conic_RButton->AutoSize = true;
			this->Conic_RButton->Location = System::Drawing::Point(354, 7);
			this->Conic_RButton->Name = L"Conic_RButton";
			this->Conic_RButton->Size = System::Drawing::Size(72, 21);
			this->Conic_RButton->TabIndex = 6;
			this->Conic_RButton->TabStop = true;
			this->Conic_RButton->Text = L"Cónica";
			this->Conic_RButton->UseVisualStyleBackColor = true;
			this->Conic_RButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Conic_RButton_CheckedChanged);
			// 
			// IrrPol_RButton
			// 
			this->IrrPol_RButton->AutoSize = true;
			this->IrrPol_RButton->Location = System::Drawing::Point(177, 6);
			this->IrrPol_RButton->Name = L"IrrPol_RButton";
			this->IrrPol_RButton->Size = System::Drawing::Size(141, 21);
			this->IrrPol_RButton->TabIndex = 5;
			this->IrrPol_RButton->TabStop = true;
			this->IrrPol_RButton->Text = L"Poligono Irregular";
			this->IrrPol_RButton->UseVisualStyleBackColor = true;
			this->IrrPol_RButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IrrPol_RButton_CheckedChanged);
			// 
			// RegPol_RButton
			// 
			this->RegPol_RButton->AutoSize = true;
			this->RegPol_RButton->Location = System::Drawing::Point(5, 7);
			this->RegPol_RButton->Name = L"RegPol_RButton";
			this->RegPol_RButton->Size = System::Drawing::Size(138, 21);
			this->RegPol_RButton->TabIndex = 4;
			this->RegPol_RButton->TabStop = true;
			this->RegPol_RButton->Text = L"Poligono Regular";
			this->RegPol_RButton->UseVisualStyleBackColor = true;
			this->RegPol_RButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RegPol_RButton_CheckedChanged);
			// 
			// V1_Trian_X_TextBox
			// 
			this->V1_Trian_X_TextBox->Location = System::Drawing::Point(21, 148);
			this->V1_Trian_X_TextBox->Name = L"V1_Trian_X_TextBox";
			this->V1_Trian_X_TextBox->Size = System::Drawing::Size(122, 22);
			this->V1_Trian_X_TextBox->TabIndex = 5;
			this->V1_Trian_X_TextBox->Visible = false;
			// 
			// V1_Triang_X_Label
			// 
			this->V1_Triang_X_Label->AutoSize = true;
			this->V1_Triang_X_Label->Location = System::Drawing::Point(19, 128);
			this->V1_Triang_X_Label->Name = L"V1_Triang_X_Label";
			this->V1_Triang_X_Label->Size = System::Drawing::Size(78, 17);
			this->V1_Triang_X_Label->TabIndex = 4;
			this->V1_Triang_X_Label->Text = L"Posicion X:";
			this->V1_Triang_X_Label->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 532);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->MainPanel->ResumeLayout(false);
			this->MainPanel->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void RegPol_RButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (RegPol_RButton->Checked == false) {
		RegPol_Button->Visible = false;
		RegPol_Y_TextBox->Visible = false;
		RegPol_R_TextBox->Visible = false;
		RegPol_R_Label->Visible = false;
		RegPol_Y_Label->Visible = false;
		RegPol_Label->Visible = false;
		RegPol_X_TextBox->Visible = false;
		RegPol_X_Label->Visible = false;

	}
	else {
		RegPol_Button->Visible = true;
		RegPol_Y_TextBox->Visible = true;
		RegPol_R_TextBox->Visible = true;
		RegPol_R_Label->Visible = true;
		RegPol_Y_Label->Visible = true;
		RegPol_Label->Visible = true;
		RegPol_X_TextBox->Visible = true;
		RegPol_X_Label->Visible = true;
		OP1_RButton->Visible = false;
		OP2_RButton->Visible = false;
		OP3_RButton->Visible = false;
		OP4_RButton->Visible = false;
	}
}
private: System::Void IrrPol_RButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (IrrPol_RButton->Checked == false) {
		IrrPol_Button->Visible = false;
		IrrPol_NV_TextBox->Visible = false;
		IrrPol_NV_Label->Visible = false;
		IrrPol_VY_Label->Visible = false;
		IrrPol_VX_Label->Visible = false;
		IrrPol_VY_TextBox->Visible = false;
		IrrPol_VX_TextBox->Visible = false;

		Rect_Size_Label->Visible = false;
		Rect_Height_TextBox->Visible = false;
		Rect_Height_Label->Visible = false;
		Rect_Button->Visible = false;
		Rect_Y_TextBox->Visible = false;
		Rect_Width_TextBox->Visible = false;
		Rect_Width_Label->Visible = false;
		Rect_Y_Label->Visible = false;
		Rec_Pos_Label->Visible = false;
		Rect_X_TextBox->Visible = false;
		Rec_XLabel->Visible = false;

		V1_Triang_X_Label->Visible = false;
		V3_Trian_Y_TextBox->Visible = false;
		V2_Trian_Y_TextBox->Visible = false;
		V1_Trian_Y_TextBox->Visible = false;
		V3_Trian_X_TextBox->Visible = false;
		V2_Trian_X_TextBox->Visible = false;
		V3_Triang_Y_Label->Visible = false;
		V3_Triang_X_Label->Visible = false;
		V2_Triang_Y_Label->Visible = false;
		V2_Triang_X_Label->Visible = false;
		V1_Triang_Y_Label->Visible = false;
		V3_Triang_Label->Visible = false;
		V2_Triang_Label->Visible = false;
		V1_Triang_Label->Visible = false;
		V1_Trian_X_TextBox->Visible = false;
		Triang_Button->Visible = false;
	}
	else {
		OP1_RButton->Text = "Triangulo";
		OP1_RButton->Visible = true;
		OP2_RButton->Text = "Rectangulo";
		OP2_RButton->Visible = true;
		OP3_RButton->Text = "Personalizado";
		OP3_RButton->Visible = true;
	}
}
private: System::Void Conic_RButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Conic_RButton->Checked == false) {
		//
	}
	else {
		OP1_RButton->Text = "Circulo";
		OP2_RButton->Text = "Prabola";
		OP3_RButton->Text = "Elipse";
		OP1_RButton->Visible = true;
		OP2_RButton->Visible = true;
		OP3_RButton->Visible = true;
	}
}
};
}

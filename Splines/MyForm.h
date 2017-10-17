#pragma once

#include "MyFormController.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class MyForm : public System::Windows::Forms::Form
{

public:

	MyFormController^ controller;

	MyForm(void)
	{
		InitializeComponent();
		
		controller = gcnew MyFormController(this->pictureBox);

		controller->OnFormLoad();
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
private: System::Windows::Forms::GroupBox^  pictureGroupBox;
protected:
private: System::Windows::Forms::PictureBox^  pictureBox;
private: System::Windows::Forms::GroupBox^  toolsGroupBox;
private: System::Windows::Forms::Label^  label4;


private: System::Windows::Forms::Label^  label3;


private: System::Windows::Forms::Label^  label2;


private: System::Windows::Forms::Label^  label1;












private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::HScrollBar^  hScrollBar6;
private: System::Windows::Forms::HScrollBar^  hScrollBar5;
private: System::Windows::Forms::HScrollBar^  hScrollBar4;
private: System::Windows::Forms::HScrollBar^  shiftZScrollBar;
private: System::Windows::Forms::HScrollBar^  shiftYScrollBar;
private: System::Windows::Forms::HScrollBar^  shiftXScrollBar;



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
		this->pictureGroupBox = (gcnew System::Windows::Forms::GroupBox());
		this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
		this->toolsGroupBox = (gcnew System::Windows::Forms::GroupBox());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->shiftXScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->shiftYScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->shiftZScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->hScrollBar4 = (gcnew System::Windows::Forms::HScrollBar());
		this->hScrollBar5 = (gcnew System::Windows::Forms::HScrollBar());
		this->hScrollBar6 = (gcnew System::Windows::Forms::HScrollBar());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->pictureGroupBox->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
		this->toolsGroupBox->SuspendLayout();
		this->SuspendLayout();
		// 
		// pictureGroupBox
		// 
		this->pictureGroupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->pictureGroupBox->Controls->Add(this->pictureBox);
		this->pictureGroupBox->Location = System::Drawing::Point(156, 12);
		this->pictureGroupBox->Name = L"pictureGroupBox";
		this->pictureGroupBox->Size = System::Drawing::Size(560, 452);
		this->pictureGroupBox->TabIndex = 0;
		this->pictureGroupBox->TabStop = false;
		this->pictureGroupBox->Text = L"»зображение";
		// 
		// pictureBox
		// 
		this->pictureBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->pictureBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->pictureBox->Location = System::Drawing::Point(6, 19);
		this->pictureBox->Name = L"pictureBox";
		this->pictureBox->Size = System::Drawing::Size(548, 427);
		this->pictureBox->TabIndex = 0;
		this->pictureBox->TabStop = false;
		// 
		// toolsGroupBox
		// 
		this->toolsGroupBox->Controls->Add(this->label8);
		this->toolsGroupBox->Controls->Add(this->hScrollBar6);
		this->toolsGroupBox->Controls->Add(this->hScrollBar5);
		this->toolsGroupBox->Controls->Add(this->hScrollBar4);
		this->toolsGroupBox->Controls->Add(this->shiftZScrollBar);
		this->toolsGroupBox->Controls->Add(this->shiftYScrollBar);
		this->toolsGroupBox->Controls->Add(this->shiftXScrollBar);
		this->toolsGroupBox->Controls->Add(this->label5);
		this->toolsGroupBox->Controls->Add(this->label6);
		this->toolsGroupBox->Controls->Add(this->label7);
		this->toolsGroupBox->Controls->Add(this->label4);
		this->toolsGroupBox->Controls->Add(this->label3);
		this->toolsGroupBox->Controls->Add(this->label2);
		this->toolsGroupBox->Controls->Add(this->label1);
		this->toolsGroupBox->Location = System::Drawing::Point(12, 12);
		this->toolsGroupBox->Name = L"toolsGroupBox";
		this->toolsGroupBox->Size = System::Drawing::Size(138, 452);
		this->toolsGroupBox->TabIndex = 1;
		this->toolsGroupBox->TabStop = false;
		this->toolsGroupBox->Text = L"»нструменты";
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(6, 163);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(14, 13);
		this->label5->TabIndex = 19;
		this->label5->Text = L"Z";
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Location = System::Drawing::Point(6, 142);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(14, 13);
		this->label6->TabIndex = 18;
		this->label6->Text = L"Y";
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Location = System::Drawing::Point(6, 125);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(14, 13);
		this->label7->TabIndex = 17;
		this->label7->Text = L"X";
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(6, 69);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(14, 13);
		this->label4->TabIndex = 6;
		this->label4->Text = L"Z";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(6, 52);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(14, 13);
		this->label3->TabIndex = 4;
		this->label3->Text = L"Y";
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(6, 35);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(14, 13);
		this->label2->TabIndex = 2;
		this->label2->Text = L"X";
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(6, 19);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(80, 13);
		this->label1->TabIndex = 0;
		this->label1->Text = L"ѕеремещение";
		// 
		// shiftXScrollBar
		// 
		this->shiftXScrollBar->Location = System::Drawing::Point(23, 35);
		this->shiftXScrollBar->Maximum = 1000;
		this->shiftXScrollBar->Name = L"shiftXScrollBar";
		this->shiftXScrollBar->Size = System::Drawing::Size(80, 17);
		this->shiftXScrollBar->TabIndex = 20;
		this->shiftXScrollBar->Value = 500;
		this->shiftXScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnXScroll);
		// 
		// shiftYScrollBar
		// 
		this->shiftYScrollBar->Location = System::Drawing::Point(23, 52);
		this->shiftYScrollBar->Maximum = 1000;
		this->shiftYScrollBar->Name = L"shiftYScrollBar";
		this->shiftYScrollBar->Size = System::Drawing::Size(80, 17);
		this->shiftYScrollBar->TabIndex = 21;
		this->shiftYScrollBar->Value = 500;
		this->shiftYScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnYScroll);
		// 
		// shiftZScrollBar
		// 
		this->shiftZScrollBar->Location = System::Drawing::Point(23, 69);
		this->shiftZScrollBar->Maximum = 1000;
		this->shiftZScrollBar->Name = L"shiftZScrollBar";
		this->shiftZScrollBar->Size = System::Drawing::Size(80, 17);
		this->shiftZScrollBar->TabIndex = 22;
		this->shiftZScrollBar->Value = 500;
		this->shiftZScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnZScroll);
		// 
		// hScrollBar4
		// 
		this->hScrollBar4->Location = System::Drawing::Point(23, 125);
		this->hScrollBar4->Maximum = 1000;
		this->hScrollBar4->Name = L"hScrollBar4";
		this->hScrollBar4->Size = System::Drawing::Size(80, 17);
		this->hScrollBar4->TabIndex = 23;
		this->hScrollBar4->Value = 500;
		// 
		// hScrollBar5
		// 
		this->hScrollBar5->Location = System::Drawing::Point(23, 142);
		this->hScrollBar5->Maximum = 1000;
		this->hScrollBar5->Name = L"hScrollBar5";
		this->hScrollBar5->Size = System::Drawing::Size(80, 17);
		this->hScrollBar5->TabIndex = 24;
		this->hScrollBar5->Value = 500;
		// 
		// hScrollBar6
		// 
		this->hScrollBar6->Location = System::Drawing::Point(23, 159);
		this->hScrollBar6->Maximum = 1000;
		this->hScrollBar6->Name = L"hScrollBar6";
		this->hScrollBar6->Size = System::Drawing::Size(80, 17);
		this->hScrollBar6->TabIndex = 25;
		this->hScrollBar6->Value = 500;
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->Location = System::Drawing::Point(6, 112);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(59, 13);
		this->label8->TabIndex = 26;
		this->label8->Text = L"¬ращение";
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(728, 476);
		this->Controls->Add(this->toolsGroupBox);
		this->Controls->Add(this->pictureGroupBox);
		this->Name = L"MyForm";
		this->Text = L"3D";
		this->pictureGroupBox->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
		this->toolsGroupBox->ResumeLayout(false);
		this->toolsGroupBox->PerformLayout();
		this->ResumeLayout(false);

	}
#pragma endregion
	
	void OnMouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
	void OnMouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
	void OnMouseUp(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
	void OnXScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnYScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnZScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
};





void MyForm::OnMouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
{
	controller->OnMarkerMouseDown();
}


void MyForm::OnMouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
{
	Point cursorPoint = pictureBox->PointToClient(System::Windows::Forms::Cursor::Position);
	
	controller->OnMarkerMouseMove(cursorPoint);
}


void MyForm::OnMouseUp(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
{
	controller->OnMarkerMouseUp();
}



void MyForm::OnXScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScroll(0, delta > 0 ? true : false);
}


void MyForm::OnYScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScroll(1, delta > 0 ? true : false);
}


void MyForm::OnZScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScroll(2, delta > 0 ? true : false);
}

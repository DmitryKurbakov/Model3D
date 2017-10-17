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
	/// Освободить все используемые ресурсы.
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
private: System::Windows::Forms::HScrollBar^  rotationZScrollBar;

private: System::Windows::Forms::HScrollBar^  rotationYScrollBar;

private: System::Windows::Forms::HScrollBar^  rotationXScrollBar;


private: System::Windows::Forms::HScrollBar^  shiftZScrollBar;
private: System::Windows::Forms::HScrollBar^  shiftYScrollBar;
private: System::Windows::Forms::HScrollBar^  shiftXScrollBar;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::HScrollBar^  scalingZScrollBar;
private: System::Windows::Forms::HScrollBar^  scalingYScrollBar;
private: System::Windows::Forms::HScrollBar^  scalingXScrollBar;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;



private:
	/// <summary>
	/// Обязательная переменная конструктора.
	/// </summary>
	System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Требуемый метод для поддержки конструктора — не изменяйте 
	/// содержимое этого метода с помощью редактора кода.
	/// </summary>
	void InitializeComponent(void)
	{
		this->pictureGroupBox = (gcnew System::Windows::Forms::GroupBox());
		this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
		this->toolsGroupBox = (gcnew System::Windows::Forms::GroupBox());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->rotationZScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->rotationYScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->rotationXScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->shiftZScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->shiftYScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->shiftXScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->scalingZScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->scalingYScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->scalingXScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->label12 = (gcnew System::Windows::Forms::Label());
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
		this->pictureGroupBox->Text = L"Изображение";
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
		this->toolsGroupBox->Controls->Add(this->label9);
		this->toolsGroupBox->Controls->Add(this->scalingZScrollBar);
		this->toolsGroupBox->Controls->Add(this->scalingYScrollBar);
		this->toolsGroupBox->Controls->Add(this->scalingXScrollBar);
		this->toolsGroupBox->Controls->Add(this->label10);
		this->toolsGroupBox->Controls->Add(this->label11);
		this->toolsGroupBox->Controls->Add(this->label12);
		this->toolsGroupBox->Controls->Add(this->label8);
		this->toolsGroupBox->Controls->Add(this->rotationZScrollBar);
		this->toolsGroupBox->Controls->Add(this->rotationYScrollBar);
		this->toolsGroupBox->Controls->Add(this->rotationXScrollBar);
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
		this->toolsGroupBox->Text = L"Инструменты";
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->Location = System::Drawing::Point(6, 96);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(59, 13);
		this->label8->TabIndex = 26;
		this->label8->Text = L"Вращение";
		// 
		// rotationZScrollBar
		// 
		this->rotationZScrollBar->Location = System::Drawing::Point(23, 143);
		this->rotationZScrollBar->Maximum = 1000;
		this->rotationZScrollBar->Name = L"rotationZScrollBar";
		this->rotationZScrollBar->Size = System::Drawing::Size(80, 17);
		this->rotationZScrollBar->TabIndex = 25;
		this->rotationZScrollBar->Value = 500;
		this->rotationZScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnRZScroll);
		// 
		// rotationYScrollBar
		// 
		this->rotationYScrollBar->Location = System::Drawing::Point(23, 126);
		this->rotationYScrollBar->Maximum = 1000;
		this->rotationYScrollBar->Name = L"rotationYScrollBar";
		this->rotationYScrollBar->Size = System::Drawing::Size(80, 17);
		this->rotationYScrollBar->TabIndex = 24;
		this->rotationYScrollBar->Value = 500;
		this->rotationYScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnRYScroll);
		// 
		// rotationXScrollBar
		// 
		this->rotationXScrollBar->Location = System::Drawing::Point(23, 109);
		this->rotationXScrollBar->Maximum = 1000;
		this->rotationXScrollBar->Name = L"rotationXScrollBar";
		this->rotationXScrollBar->Size = System::Drawing::Size(80, 17);
		this->rotationXScrollBar->TabIndex = 23;
		this->rotationXScrollBar->Value = 500;
		this->rotationXScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnRXScroll);
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
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(6, 147);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(14, 13);
		this->label5->TabIndex = 19;
		this->label5->Text = L"Z";
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Location = System::Drawing::Point(6, 126);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(14, 13);
		this->label6->TabIndex = 18;
		this->label6->Text = L"Y";
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Location = System::Drawing::Point(6, 109);
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
		this->label1->Text = L"Перемещение";
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->Location = System::Drawing::Point(6, 177);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(101, 13);
		this->label9->TabIndex = 33;
		this->label9->Text = L"Масштабирование";
		// 
		// scalingZScrollBar
		// 
		this->scalingZScrollBar->Location = System::Drawing::Point(23, 224);
		this->scalingZScrollBar->Maximum = 1000;
		this->scalingZScrollBar->Name = L"scalingZScrollBar";
		this->scalingZScrollBar->Size = System::Drawing::Size(80, 17);
		this->scalingZScrollBar->TabIndex = 32;
		this->scalingZScrollBar->Value = 500;
		this->scalingZScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnZSScroll);
		// 
		// scalingYScrollBar
		// 
		this->scalingYScrollBar->Location = System::Drawing::Point(23, 207);
		this->scalingYScrollBar->Maximum = 1000;
		this->scalingYScrollBar->Name = L"scalingYScrollBar";
		this->scalingYScrollBar->Size = System::Drawing::Size(80, 17);
		this->scalingYScrollBar->TabIndex = 31;
		this->scalingYScrollBar->Value = 500;
		this->scalingYScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnYSScroll);
		// 
		// scalingXScrollBar
		// 
		this->scalingXScrollBar->Location = System::Drawing::Point(23, 190);
		this->scalingXScrollBar->Maximum = 1000;
		this->scalingXScrollBar->Name = L"scalingXScrollBar";
		this->scalingXScrollBar->Size = System::Drawing::Size(80, 17);
		this->scalingXScrollBar->TabIndex = 30;
		this->scalingXScrollBar->Value = 500;
		this->scalingXScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnSScroll);
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Location = System::Drawing::Point(6, 228);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(14, 13);
		this->label10->TabIndex = 29;
		this->label10->Text = L"Z";
		// 
		// label11
		// 
		this->label11->AutoSize = true;
		this->label11->Location = System::Drawing::Point(6, 207);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(14, 13);
		this->label11->TabIndex = 28;
		this->label11->Text = L"Y";
		// 
		// label12
		// 
		this->label12->AutoSize = true;
		this->label12->Location = System::Drawing::Point(6, 190);
		this->label12->Name = L"label12";
		this->label12->Size = System::Drawing::Size(14, 13);
		this->label12->TabIndex = 27;
		this->label12->Text = L"X";
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
	void OnRXScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnRYScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnRZScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnYSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnZSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
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


void MyForm::OnRXScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnRotation(0, delta > 0 ? true : false);
}


void MyForm::OnRYScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{

	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnRotation(1, delta > 0 ? true : false);
}


void MyForm::OnRZScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnRotation(2, delta > 0 ? true : false);
}


void MyForm::OnSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScaling(0, delta > 0 ? true : false);
}


void MyForm::OnYSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScaling(1, delta > 0 ? true : false);
}


void MyForm::OnZSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScaling(2, delta > 0 ? true : false);
}

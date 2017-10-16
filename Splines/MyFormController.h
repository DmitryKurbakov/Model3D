#pragma once


using namespace System::Windows::Forms;


ref class MyFormController 
{
public:

	PictureBox^ pictureBox;

	MyFormController(PictureBox^ p);
	~MyFormController();

	void OnFormLoad();

};


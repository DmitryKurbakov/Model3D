#pragma once

#include "ModelsDrawing.h"

using namespace System::Windows::Forms;


ref class MyFormController 
{
public:

	PictureBox^ pictureBox;

	ModelsDrawing^ mod;

	MyFormController(PictureBox^ p);
	~MyFormController();

	void OnFormLoad();

};


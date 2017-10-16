#include "MyFormController.h"



MyFormController::MyFormController(PictureBox^ p)
{

	this->pictureBox = p;
	this->mod = gcnew ModelsDrawing();
}


MyFormController::~MyFormController()
{
}

void MyFormController::OnFormLoad()
{
	mod->DrawTetrahedron();
}

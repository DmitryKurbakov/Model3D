#include "MyFormController.h"



MyFormController::MyFormController(PictureBox^ p)
{

	this->pictureBox = p;

}


MyFormController::~MyFormController()
{
}

void MyFormController::OnFormLoad()
{
	throw gcnew System::NotImplementedException();
}

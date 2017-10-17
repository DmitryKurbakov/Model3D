#include "MyFormController.h"



MyFormController::MyFormController(PictureBox^ p)
{
	this->pictureBox = p;
	this->pictureBox->Image = gcnew Bitmap(1000, 1000);

	this->mod = gcnew ModelsDrawing();
}


MyFormController::~MyFormController()
{
}

void MyFormController::OnFormLoad()
{

	Bitmap^ inputBitmap = gcnew Bitmap(pictureBox->Image);
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	resultBitmap = mod->DrawTetrahedron(inputBitmap);

	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;
}

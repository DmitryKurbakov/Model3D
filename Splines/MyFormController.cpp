#include "MyFormController.h"



MyFormController::MyFormController(PictureBox^ p)
{
	this->pictureBox = p;
	this->pictureBox->Image = gcnew Bitmap(1000, 1000);

	this->mod = gcnew ModelsDrawing();

	cursor.X = 250;
	cursor.Y = 200;

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

void MyFormController::OnMarkerMouseDown()
{
	mod->tet->marker->MouseDown();
}

void MyFormController::OnMarkerMouseMove(Point p)
{
	if (!(mod->tet->marker->isDrag)) return;
	
	Bitmap^ inputBitmap = gcnew Bitmap(pictureBox->Image);
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	if (mode == 0)
	{
		
		mod->tet->transVertixMatrix = mod->tet->GetShiftsMatrix(mod->tet->transVertixMatrix,

			p.X == 0 ? 0 : p.X < cursor.X ? -2 : 2, 
			p.Y == 0 ? 0 : p.Y < cursor.Y ? -2 : 2, 

			0);

		resultBitmap = mod->DrawTetrahedron(resultBitmap);
	}
	
	cursor = p;

	delete inputBitmap;
	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;
}

void MyFormController::OnMarkerMouseUp()
{
	mod->tet->marker->MouseUp();
}

void MyFormController::OnScroll(int val, bool d)
{
	Bitmap^ inputBitmap = gcnew Bitmap(pictureBox->Image);
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	int delta = d ? 2 : -2;

	mod->tet->transVertixMatrix = mod->tet->GetShiftsMatrix(mod->tet->transVertixMatrix,
		val == 0 ? delta : 0,
		val == 1 ? delta : 0,
		val == 2 ? delta : 0
	);

	resultBitmap = mod->DrawTetrahedron(resultBitmap);

	//delta = d;

	//delete inputBitmap;
	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;
	delete inputBitmap;
}

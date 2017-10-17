#pragma once

#include "ModelsDrawing.h"

using namespace System::Windows::Forms;


ref class MyFormController 
{
public:
	
	PictureBox^ pictureBox;

	ModelsDrawing^ mod;

	Point cursor;

	int mode = 0;

	//int delta = 500;

	MyFormController(PictureBox^ p);
	~MyFormController();

	void OnFormLoad();
	void OnMarkerMouseDown();
	void OnMarkerMouseMove(Point p);
	void OnMarkerMouseUp();
	void OnScroll(int val, bool d);
};


#pragma once

#include "Algorithms.h"
#include "Tetrahedron.h"

using namespace System::Drawing;

ref class ModelsDrawing :
	public Algorithms
{

public:


	ModelsDrawing();
	~ModelsDrawing();

	Bitmap^ DrawTetrahedron();
};


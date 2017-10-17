#pragma once

#include "Algorithms.h"
#include "Tetrahedron.h"

using namespace System::Drawing;
using namespace System::Collections::Generic;


ref class ModelsDrawing :
	public Algorithms
{

	

public:

	Tetrahedron^ tet;

	ModelsDrawing();
	~ModelsDrawing();

	Bitmap^ DrawTetrahedron(Bitmap^ bm);

	List<PointF>^ GetListOfTetrahedronPoints(array<float, 2>^ m); 
};


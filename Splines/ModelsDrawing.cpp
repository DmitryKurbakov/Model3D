#include "ModelsDrawing.h"

ModelsDrawing::ModelsDrawing()
{
	tet = gcnew Tetrahedron();
}


ModelsDrawing::~ModelsDrawing()
{
}

Bitmap ^ ModelsDrawing::DrawTetrahedron()
{
	array<float, 2>^ tt = tet->GetParallelProjectionMatrix(tet->transVertixMatrix);
	//tt = tet->GetRotationMatrix(tt, 2, 0.3);
	return gcnew Bitmap(10, 10);
}

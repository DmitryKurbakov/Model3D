#pragma once

using namespace System;
using namespace System::Collections::Generic;


ref class Tetrahedron
{
public:

	array<float, 2>^ vertixMatrix;
	array<float, 2>^ faceMatrix;
	array<float, 2>^ transVertixMatrix;

	Tetrahedron(array<float, 2>^ t, array<float, 2>^ f);

	Tetrahedron();
	~Tetrahedron();

	void MakeVertixMatrix();
	void MakeFaceMatrix();

	array<float, 2>^ HomogeneousCoordinateMethod(array<float, 2>^ m);

	array<float, 2>^ GetRotationMatrix(array<float, 2>^ m, int axis, float angle);
	array<float, 2>^ GetShiftsMatrix(array<float, 2>^ m, int dx, int dy, int dz);
	array<float, 2>^ GetScalingMatrix(array<float, 2>^ m, int p, int q, int r, int s);

	array<float, 2>^ GetParallelProjectionMatrix(array<float, 2>^ m);
	array<float, 2>^ GetSinglePointPerspectiveProjectionMatrix(array<float, 2>^ m, int z);

	array<float, 2>^ MatrixMultiply(array<float, 2>^ a, array<float, 2>^ b);
};


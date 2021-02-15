#pragma once
#include <math.h>
#include "matrix.h"

struct samples
{
	double x1;
	double x2;
	double* d;
	double id;
};

int index = 0;
int SizeT, Size1, Size2, Size3, Size4, Size5, Size6;

bool drawWeight = false;
bool randomPressed = false;
bool sizeofClass = false;	
int Ypoint(int x, double xx, double y, double z, int Carpan);

Matrix^ sgn(Matrix^ x);
Matrix^ fActivation(Matrix^ x);
Matrix^ fTurev(Matrix^ x);
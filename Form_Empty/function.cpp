#pragma once
#include <math.h>
#include "matrix.h"
int Ypoint(int x, double xx, double y, double z, int Carpan) {
	double temp = 0;
	temp = (x-Carpan) * xx / y + (z / y)+Carpan ;
	return temp;
}
Matrix^ sgn(Matrix^ x) {
	Matrix^ temp = gcnew Matrix(x->row, x->column);
	for (int i = 0; i < x->row; i++)
	{
		if (x->get(i, 0) < 0)
			temp->set(-1, i, 0);
		else
			temp->set(1, i, 0);
	}
	return temp;
}
Matrix^ fActivation(Matrix^ x) {
	Matrix^ temp = gcnew Matrix(x->row, x->column);
	for (int i = 0; i < x->row; i++)
	{
		temp->set((tanh(x->get(i, 0))), i, 0);
	}
	return temp;
}
Matrix^ fTurev(Matrix^ x) {
	Matrix^ temp = gcnew Matrix(x->row, x->column);
	for (int i = 0; i < x->row; i++)
	{
		temp->set((1-pow(tanh(x->get(i,0)),2)), i, 0);
	}
	return temp;
}
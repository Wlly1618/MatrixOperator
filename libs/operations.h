#ifndef OPERATIONSMATRIX_H
#define OPERATIONSMATRIX_H

#include "matrix.h"

void additionMatrix(Matrix *, Matrix *, Matrix *);
void productMatrix(Matrix *, Matrix *, Matrix *);
void productMatrixN(Matrix *, int);
void determinantMatrix(Matrix *);
void transverseMatrix(Matrix *, Matrix *);
void transposedMatrix(Matrix *, Matrix *);

#endif
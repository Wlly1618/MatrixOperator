#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  int **data;
  int col, row;
  char id;
} Matrix;


/// @brief for initialize matrix
/// @param Matrix* matrix to initialize
/// @param int rows will have the matrix
/// @param int cols will have the matrix
/// @param char id will have the matrix 
void initMatrixWithId(Matrix*, int, int, char);

void initMatrix(Matrix*, int, int);

void freeMatrix(Matrix*);

void showMatrix(const Matrix);

typedef struct
{
  Matrix *matrix;
  int amount;
} MatrixArray;

/// @brief for to initialize array matrix
/// @param MatrixArray* MatrixArray to initialize
/// @param int amount of matrix
void initMatrixArray(MatrixArray*, int);

void freeMatrixArray(MatrixArray*);

void showMatrixArray(const MatrixArray);

#endif
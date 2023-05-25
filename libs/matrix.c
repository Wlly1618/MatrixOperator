#include "matrix.h"

void initMatrixWithId(Matrix *matrix, int row, int col, char id)
{
  matrix->data = malloc(sizeof(int*) * row);
  for (int i=0; i < row; i++)
  {
    matrix->data[i] = malloc(sizeof(int) * col);
  }
  matrix->row = row;
  matrix->col = col;
  matrix->id = id;
}

void initMatrix(Matrix *matrix, int row, int col)
{
  matrix->data = malloc(sizeof(int*) * row);
  for (int i=0; i < row; i++)
  {
    matrix->data[i] = malloc(sizeof(int) * col);
  }
  matrix->row = row;
  matrix->col = col;
}

void freeMatrix(Matrix *matrix)
{
  for (int i=0; i < matrix->row; i++)
  {
    free(matrix->data[i]);
  }
  free(matrix->data);
  matrix->id = ' ';
  matrix->col = 0;
  matrix->row = 0;
}

void showMatrix(const Matrix matrix)
{
  for (int i=0; i < matrix.row; i++)
  {
    for (int j=0; j < matrix.col; j++)
        printf("[%i]\t", matrix.data[i][j]);
    printf("\n");
  }
}

void initMatrixArray(MatrixArray *array, int amount)
{
  array->matrix = malloc(sizeof(Matrix) * amount);
  array->amount = amount;
}

void freeMatrixArray(MatrixArray *array)
{
  for (int i=0; i < array->amount; i++)
  {
    freeMatrix(&array->matrix[i]);
  }
  
  free(array->matrix);
  array->amount = 0;
}

void showMatrixArray(const MatrixArray array)
{
  for (int i=0; i < array.amount; i++)
  {
    printf("Matrix %c:\n", array.matrix[i].id);
    showMatrix(array.matrix[i]);
  }
}
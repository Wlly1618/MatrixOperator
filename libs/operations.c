#include "operations.h"

void additionMatrix(Matrix *matrixA, Matrix *matrixB, Matrix *temp)
{
  initMatrix(temp, matrixA->row, matrixA->col);
  
  for (int i=0; i < matrixA->row; i++)
  {
    for (int j=0; j < matrixA->col; j++)
    {
      temp->data[i][j] = (matrixA->data[i][j] + matrixB->data[i][j]);
    }
  }
}

void productMatrix(Matrix *matrixA, Matrix *matrixB, Matrix *temp)
{
  initMatrix(temp, matrixA->col, matrixB->row);

  for (int i=0; i < matrixA->row; i++)
  {
    for (int j=0; j < matrixB->col; j++)
    {
      int n = 0;
      for (int k=0; k < matrixA->col; k++)
      {
        n = matrixA->data[i][k] * matrixB->data[k][j];
      }
      temp->data[i][j] = n;
    }
  }
}

void productMatrixN(Matrix *matrix, int n)
{
  for (int i=0; i < matrix->row; i++)
  {
    for (int j=0; j < matrix->col; j++)
    {
      matrix->data[i][j] = (n) * matrix->data[i][j];
    }
  }
}

void determinantMatrix(Matrix *matrix)
{
  printf("in process");
}

void transverseMatrix(Matrix *matrix, Matrix *temp)
{
  for (int i=0; i < matrix->row; i++)
  {
    for (int j=0; j < matrix->col; j++)
    {
      temp->data[i][j] = (-1) * matrix->data[i][j];
    }
  }
}

void transposedMatrix(Matrix *matrix, Matrix *temp)
{
  initMatrix(temp, matrix->col, matrix->row);

  for (int i=0; i < temp->row; i++)
  {
    for (int j=0; j < temp->col; j++)
    {
      temp->data[i][j] = matrix->data[j][i];
    }
  }
}
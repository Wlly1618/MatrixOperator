#include "dataCollector.h"

MatrixArray collectMatrix(FILE *file, int amount)
{
  MatrixArray matrixArray;
  initMatrixArray(&matrixArray, amount);

  int row, col;
  char id;
  for (int i=0; i < matrixArray.amount; i++)
  {
    fscanf(file, "%i %i %c", &row, &col, id);
    initMatrixWithId(&matrixArray.matrix[i], row, col, id);

    for (int j=0; j < matrixArray.matrix[i].row; j++)
    {
      for (int k=0; k < matrixArray.matrix[i].col; k++)
      {
        fscanf(file, "%i", &matrixArray.matrix[i].data[j][k]);
      }
    }
  }

  return matrixArray;
}

Matrix format(char format, Matrix *matrix)
{
  if (format == 't')
  {
    Matrix temp;
    initMatrix(&temp, matrix->col, matrix->row);

    transposedMatrix(matrix, &temp);

    return temp;
  }

  if (format == '-')
  {
    Matrix temp;
    initMatrix(&temp, matrix->row, matrix->col);

    transverseMatrix(matrix, &temp);

    return temp;
  }

  return *matrix;
}

Matrix result(char *operation, Matrix *matrixA, Matrix *matrixB)
{
  Matrix temp;

  return temp;
}

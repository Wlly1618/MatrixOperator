#include "../libs/matrix.h"
#include "../libs/operations.h"
#include "../libs/dataCollector.h"
#include "../libs/fileReader.h"

int main()
{
  Matrix m1;
  initMatrixWithId(&m1, 3, 3, 'a');

  for (int i=0; i < 3; i++)
  {
    for (int j=0; j < 3; j++)
    {
      m1.data[i][j] = i+1 * j+2;
    }
  }

  showMatrix(m1);

  Matrix temp;
  temp = format('t', &m1);

  showMatrix(temp);

  return 0;
}

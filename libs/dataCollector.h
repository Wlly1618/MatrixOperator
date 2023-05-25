#ifndef DATACOLLECTOR_H
#define DATACOLLECTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix.h"
#include "operations.h"

/// @brief esta funcionalidad se encarga de cargar los datos desde un archivo, y devuelve un puntero de matrices
/// @param File* este sera el archivo con el cual se realizara la lectura de datos
/// @param int este parametro es la cantidad de matrices que habra en el archivo
/// @return un array tridimensional que posee n elementos
MatrixArray collectMatrix(FILE *, int);

/// @brief esta funcionalidad permite formatear la matriz
/// @param char para el tipo de formato
/// @param Matrix* la matriz con la cual se trabajara
/// @return Matrix formateada
Matrix format(char, Matrix *);

Matrix result(char *, Matrix *, Matrix *);

#endif
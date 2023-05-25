#ifndef FILEREADER_H
#define FILEREADER_H

#include <stdio.h>

/// @brief Esta funcion se encarga de buscar el archivo a leer
/// @param char* en el cual estara la direccion del archivo
/// @return el archivo listo para manipular
FILE* readFile(char*);

#endif
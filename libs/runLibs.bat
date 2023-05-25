gcc -c matrix.c -o matrix.o
ar rsc libMatrix.a matrix.o

gcc -c fileReader.c -o fileReader.o
ar rsc libFileReader.a fileReader.o

gcc -c operations.c -o operations.o -L. -l:libMatrix.a
ar rsc libOperations.a operations.o 

gcc -c dataCollector.c -o dataCollector.o -L. -l:libOperations.a -l:libMatrix.a 
ar rsc libDataCollector.a dataCollector.o
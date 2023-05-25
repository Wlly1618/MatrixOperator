gcc -c matrix.c -o matrix.o

gcc -c fileReader.c -o fileReader.o

gcc -c operations.c -o operations.o -L. -l:libMatrix.a

gcc -c dataCollector.c -o dataCollector.o -L. -l:libOperations.a -l:libMatrix.a

ar rsc lib.a matrix.o fileReader.o operations.o dataCollector.o
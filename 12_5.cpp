#include <stdio.h>
#include <stdlib.h>

void allocMemory(void**ptr, int size);

void main() {
	double* numPtr;
	int size;
	printf("Input size : ");
	scanf("%d",&size);
	allocMemory((void**)&numPtr,size);
	if (numPtr == NULL) printf("err\n");
	*numPtr = 10;
	printf("*numPtr= %lf", *numPtr);

	free(numPtr);
}

void allocMemory(void** ptr, int size) {
	*ptr = malloc(sizeof(double));
}
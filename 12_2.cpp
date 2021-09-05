//두개의 배열값 사이즈 입력받고 출력하기

#include <stdio.h>
#include <stdlib.h>

void Scanf(int size, int *arr);

void main(){
	int s1, s2;
	printf("size of arr1 and arr2: ");
	scanf("%d %d", &s1, &s2);

	int* arr1 = (int*)malloc(sizeof(int) * s1);
	int* arr2 = (int*)malloc(sizeof(int) * s2);

	Scanf(s1, arr1);	
	Scanf(s2, arr2);

	free(arr1);
	free(arr2);
}

void Scanf(int size, int* arr) {
	for (int i = 0; i < size; i++) {
		printf("%dth element of arr : ",i);
		scanf("%d", arr + i);
	}
	printf("{");
	for (int j = 0; j < size; j++) {
		printf("%d ", *(arr + j));
	}
	printf("}\n");
}

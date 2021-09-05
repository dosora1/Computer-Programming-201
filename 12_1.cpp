//배열 사이즈 입력 받기 malloc으로 동적할당

#include <stdio.h>
#include <stdlib.h>

void Scanf(int *arr,int size);

void main() {
	int size;
	printf("개수 입력: ");
	scanf("%d",&size);
	int*A = (int*)malloc(sizeof(int) * size);
	Scanf(A, size);

	printf("Ouput: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(A + i));
	}

	free(A);
}

void Scanf(int *arr,int size) {
	for (int i = 0; i < size; i++) {
		printf("%d번째 입력 : ", i+1);
		scanf("%d", arr + i);
	}
}
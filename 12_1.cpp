//�迭 ������ �Է� �ޱ� malloc���� �����Ҵ�

#include <stdio.h>
#include <stdlib.h>

void Scanf(int *arr,int size);

void main() {
	int size;
	printf("���� �Է�: ");
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
		printf("%d��° �Է� : ", i+1);
		scanf("%d", arr + i);
	}
}
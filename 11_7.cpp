//�迭 �� �Է� �ް� �ٸ� �迭�� copy�� �����ͷ� ����

#include <stdio.h>

void Copy(int* A, int* B);

void main() {
	int A[5] = { 0 };
	int B[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		printf("Input %dth of A: ",i);
		scanf("%d", A + i);
	}
	Copy(A, B);
}

void Copy(int* A, int* B) {
	printf("B is : ");
	for (int i = 0; i < 5; i++) {
		*(B + i) = *(A + i);
		printf("%d ", *(B + i));
	}	
}
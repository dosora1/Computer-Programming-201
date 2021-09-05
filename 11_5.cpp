//거듭제곱을 세가지 함수로 구현

#include <stdio.h>

void NormVar(int x,int y,int result);
int NormVar2(int x, int y, int result);
int PointerVar(int *x, int *y, int *result);

void main() {
	int x, y;
	int result1 = 1;
	int result2 = 1;
	int result3 = 1;
	printf("Plz Input #1: ");
	scanf("%d", &x);
	printf("Plz Input #2: ");
	scanf("%d", &y);
	printf("Process of using normal variable in void function...\n");
	NormVar(x, y, result1);
	printf("Result 1: %d\n",result1);

	printf("Process of using normal variable in int function...\n");
	printf("Result 2: %d\n", NormVar2(x, y, result2));

	printf("Process of using pointer variable in void function...\n");
	printf("Result 3: %d\n", PointerVar(&x, &y, &result3));
}
void NormVar(int x, int y, int result) {
	for (int i = 0; i < y; i++) {
		result *= x;
	}
}
int NormVar2(int x, int y, int result) {
	for (int i = 0; i < y; i++) {
		result *= x;
	}
	return result;
}
int PointerVar(int* x, int* y, int* result) {
	for (int i = 0; i < (*y); i++) {
		(*result) *= (*x);
	}
	return *result;
}

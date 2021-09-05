//포인터는 주소값이라고 생각하자. 메인함수에서 포인터로 선언되지 않아도 함수가 주소값으로 전달 받으면 포인터로 사용가능.

#include <stdio.h>

void Fun(int x, int y, double* R1, double* R2, double* R3, double* R4);

void main() {
	int x, y;
	printf("Input X and Y: ");
	scanf("%d %d",&x,&y);
	double R1,R2, R3, R4;
	Fun(x, y, &R1, &R2, &R3, &R4);
	printf("Sum : %lf\n", R1);
	printf("Diff : %lf\n", R2);
	printf("Mul : %lf\n",R3);
	printf("Div : %lf\n", R4);
}

void Fun(int x, int y, double* R1, double* R2, double* R3, double* R4){
	*R1 = x + y;
	*R2 = x - y;
	*R3 = x * y;
	*R4 = x / y;
}

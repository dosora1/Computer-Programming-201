//�����ʹ� �ּҰ��̶�� ��������. �����Լ����� �����ͷ� ������� �ʾƵ� �Լ��� �ּҰ����� ���� ������ �����ͷ� ��밡��.

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

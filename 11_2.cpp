#include <stdio.h>

//�����͸� �̿��� ������ ����

int main(void) {
	int n;
	int* p;
	printf("input num: ");
	scanf("%d",&n);
	p = &n;
	*p -= 3;
	printf("changed a= %d\n", n);
	return 0;
}
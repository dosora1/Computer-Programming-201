#include <stdio.h>

//포인터를 이용해 변수값 변경

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
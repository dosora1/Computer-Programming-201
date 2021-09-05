/*
* 변수값, 변수주소, 포인터가 가리키는 주소에 저장되어 있는 값, 포인터가 가리키는 주소, 포인터의 주소
*/
#include <stdio.h>

int main(void) {
	int a;
	int* pa;
	printf("input a: ");
	scanf("%d", &a);
	pa = &a;
	printf("a= %d\n", a);
	printf("address of a= %d\n", &a);
	printf("pa pointing value= %d\n", *pa);
	printf("pa have an address= %d\n", pa);
	printf("address of pa= %d\n", &pa);
	return 0;

}
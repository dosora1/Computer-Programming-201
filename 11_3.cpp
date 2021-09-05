#include <stdio.h>

int main() {
	int n1,n2;
	printf("input n1 and n2: ");
	scanf("%d %d", &n1, &n2);
	int* ptr1;
	int* ptr2;
	int** dptr=&ptr1;
	
	*dptr = &n2;
	dptr = &ptr2;
	*dptr = &n1;

	printf("*ptr1=%d\n", *ptr1);
	printf("*ptr2=%d\n", *ptr2);
	printf("**dptr=%d\n", **dptr);
	return 0;
}
// 배열에서 sum과 swap

#include <stdio.h>

void main() {
	int arr[5];
	printf("input 5 values: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", (arr+i));
	}
	int Sum=0;
	for (int i = 0; i < 5; i++) {
		Sum += *(arr + i);
	}
	printf("sum of all values: %d\n",Sum);
	int temp;
	temp = *arr;
	*arr = *(arr+4);
	*(arr + 4) = temp;

	printf("after swap---\n");
	printf("arr[5] = ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(arr + i));
	}
}
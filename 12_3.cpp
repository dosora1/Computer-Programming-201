//중요, 이중포인터와 포인터로 배열을 입출력, swap.

#include <stdio.h>
#include <stdlib.h>

void Scanf(int s, int* arr);
void Printf(int **dptr, int s1, int s2);
void Change(int **dptr, int *s1, int *s2);

void main() {
	int s1, s2;

	printf("Input size of arr1 and arr2 : ");
	scanf("%d %d", &s1, &s2);
	int* arr1 = (int*)malloc(sizeof(int) * s1);
	int* arr2 = (int*)malloc(sizeof(int) * s2);
	int* ptr[] = { arr1,arr2 };
	int** dptr = ptr; //선언할때 그냥 포인터 변수로 선언!!
	
//arr1과 arr2 입력을 받는다.
	Scanf(s1, arr1);
	Scanf(s2, arr2);

	Printf(dptr, s1, s2);
	Change(dptr, &s1, &s2);
	Printf(dptr, s1, s2);

	free(arr1);
	free(arr2);
}

void Scanf(int s, int* arr) {
	for (int i = 0; i < s; i++) {
		printf("%dth Element: ",i);
		scanf("%d", arr + i);
	}
}
void Printf(int **dptr, int s1, int s2) {
	int size[] = { s1,s2 };
	for (int i = 0; i < 2; i++) { //몇 번째 배열인가
		for (int j = 0; j < size[i]; j++) { //몇 번째 원소인가
			printf("%d ",*(*(dptr+i)+j));
		}
		printf("\n");
	}
}
void Change(int** dptr, int *s1, int *s2) {
	int temp; //size를 저장
	int* ptemp; //pointer을 저장

	//배열의 사이즈를 바꿈
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	//이중포인터가 가리키는 값을 바꿈.
	ptemp = *dptr;
	*dptr = *(dptr + 1);
	*(dptr + 1) = ptemp;
}
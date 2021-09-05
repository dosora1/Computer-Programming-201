//�迭 ũ�� �Է� �ޱ�, malloc, �迭 ��ġ��, �������� ����

#include <stdio.h>
#include <stdlib.h>

void Scanf(int s, int *m);
void NewIn(int s1, int s2, int* m1, int* m2, int* m3);

void main() {
	int s1, s2;
	printf("Input size of m1 and m2: ");
	scanf("%d %d", &s1, &s2);

	int* m1 = (int*)malloc(sizeof(int) * s1);
	int* m2 = (int*)malloc(sizeof(int) * s2);
	int* m3 = (int*)malloc(sizeof(int) * (s1 + s2));

	Scanf(s1, m1);
	Scanf(s2, m2);

	NewIn(s1,s2, m1, m2, m3);

	free(m1);
	free(m2);
	free(m3);
}

void Scanf(int s, int* m) {
	for (int i = 0; i < s; i++) {
		printf("%dth Element of Mat: ", i);
		scanf("%d", m + i);
	}
}

void NewIn(int s1, int s2, int* m1, int* m2, int* m3) {
//m3�� �� �ֱ�
	for (int i = 0; i < s1+s2; i++) {
		if (i < s1) 
			*(m3 + i) = *(m1 + i);
		else
			*(m3 + i) = *(m2 + i-s1); // �̺κ� ����!!
	}
//�����ϱ�
	
	for (int i = s1+s2-1; i >0; i--) {
		int temp;
		for (int j = 0; j < i; j++) {
			if (*(m3 + j) > *(m3 + j + 1)) {
				temp = *(m3 + j);
				*(m3 + j) = *(m3 + j + 1);
				*(m3 + j + 1) = temp;
			}
		}
	}
	for (int i = 0; i < s1 + s2; i++) {
		printf("%d ", *(m3 + i));
	}
}

#include <stdio.h>
#include <string.h>

int main(void) {
	char sentence[100];
	char s2[100] = { 0 };
	printf("Plz input the sentence: ");
	scanf("%s", sentence);
	for (int i = 0; i<strlen(sentence); i++) {
		strncat(s2, sentence + (strlen(sentence) - 1) - i, 1); // 1�� �ѱ��ھ�, �������� null�̶� 1�� ���־����.
	}

	printf("Inversed Sentence: ");
	printf("%s\n",s2);

	return 0;
}
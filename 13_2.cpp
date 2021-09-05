#include <stdio.h>
#include <string.h>

int main(void) {
	char sentence[100];
	char s2[100] = { 0 };
	printf("Plz input the sentence: ");
	scanf("%s", sentence);
	for (int i = 0; i<strlen(sentence); i++) {
		strncat(s2, sentence + (strlen(sentence) - 1) - i, 1); // 1은 한글자씩, 마지막은 null이라서 1을 빼주어야함.
	}

	printf("Inversed Sentence: ");
	printf("%s\n",s2);

	return 0;
}
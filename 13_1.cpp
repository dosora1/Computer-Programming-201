// 사전순으로

#include <stdio.h>
#include <string.h>

void Compare(char* a, char* b) {
	char tmp[20];
	if (strcmp(a, b) > 0) {// b가 사전순 앞서면
		strcpy(tmp, a);
		strcpy(a, b);
		strcpy(b, tmp);
	}
}

int main() {
	char word[3][20];
	for (int i = 0; i < 3; i++) {
		printf("Plz Input word%d : ", i);
		scanf("%s", word[i]);
	}
	Compare(word[0], word[1]);
	Compare(word[1], word[2]);
	Compare(word[0], word[1]);

	printf("%s %s %s\n", word[0], word[1], word[2]);
}
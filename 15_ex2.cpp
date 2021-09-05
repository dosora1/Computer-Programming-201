#include <stdio.h>
#include <string.h>

int main() {
	FILE *fn1= fopen("./ex1.txt", "rt");
	fclose(fn1);
}
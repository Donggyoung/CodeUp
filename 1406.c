#include<stdio.h>

int main() {
	char a[10];
	gets(a);
	if (strcmp(a,"love") == 0) {
		printf("I love you.");
	}
	
	return 0;
}

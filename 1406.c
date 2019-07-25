#include<stdio.h>

int main() {
	char a[10];
	gets(a);
	if (strcmp(a,"love") == 0) { // strcmp(a,b)의 리턴 값이 0이면 
		printf("I love you.");
	}
	
	return 0;
}

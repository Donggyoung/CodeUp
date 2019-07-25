#include<stdio.h>

int main() {
	char x;
	scanf_s(" %c", &x);
	
	for (char i = 'a'; i <= x; i++) {
		printf("%c ", i);
	}

	return 0;
}

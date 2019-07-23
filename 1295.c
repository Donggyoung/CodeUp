#include<stdio.h>

// 아스키 코드에서 대문자 A는 65, 소문자 a는 97로 시작

int main() {
	char a[1001];
	gets(a);
	for (int i = 0; i < strlen(a); i++) {
		if ('a' <= a[i] && a[i] <= 'z') {
			printf("%c", a[i] - 32);
		}
		else if ('A' <= a[i] && a[i] <= 'Z') {
			printf("%c", a[i] + 32);
		}
		else {
			printf("%c", a[i]);
		}
	}
	return 0;
}

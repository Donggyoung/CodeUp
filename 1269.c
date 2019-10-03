#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 시작값 a, 곱할값 b, 더할값 c, n번째항
	int a, b, c, n;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	for (int i = 1; i < n; i++) {
		a = a*b + c;
	}
	printf("%d", a);
	return 0;
}

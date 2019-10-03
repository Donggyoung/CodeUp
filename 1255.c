#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double a, b;
	double i;

	scanf("%lf %lf", &a, &b);

	for (i = a; i <= b; i += 0.01) {
		printf("%.2lf ", i); // 소수점 2번째 자리까지 표현한다.
	}
	return 0;
}

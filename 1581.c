#include<stdio.h>

int myswap(int* x, int* y) {
	int tmp;
	if (*y >  *x) {
		tmp = *y;
		*y = *x;
		*x = tmp;
	}
	tmp = *x;
	*x = *y;
	*y = tmp;
}


int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	myswap(&a, &b);
	printf("%d %d", a, b);
  return 0;
}

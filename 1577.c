#include <stdio.h>


int myabs(int x) {
	if (x < 0) {
		return -1 * x;
	}
	else {
		return x;
	}
}

int main()
{
	int a;
	scanf_s("%d", &a);
	printf("%d", myabs(a));
  return 0;
}

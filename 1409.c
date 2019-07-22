#include<stdio.h>

int main() {
	int a[10];
	int k;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &k);

	printf("%d", a[k-1]);
	
	return 0;
}

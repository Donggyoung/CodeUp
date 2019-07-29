#include<stdio.h>

int main() {
	int n;
	int* x;

	scanf_s("%d", &n);
	x = calloc(sizeof(int),n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &x[i]);
	}
	for (int i = n-1; i >= 0; i--) {
		printf("%d ", x[i]);
	}

	free(x);

	return 0;

}

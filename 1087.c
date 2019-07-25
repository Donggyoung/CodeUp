#include<stdio.h>

int main() {
	int n;
	int sum = 0;
	int count = 1;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
		if (sum > n) {
			break;
		}
	}

	printf("%d", sum);

	return 0;
}

#include <stdio.h>

int main()
{
	int n; 
	int i = 0;
	int sum = 0;

	scanf_s("%d", &n);

	while (sum < n)
	{
		i++;
		sum += i;
	}
	printf("%d", i);

	return 0;
}

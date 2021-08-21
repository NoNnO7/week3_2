#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int x = 1; x <= n; x++) {
		printf("*", x);
	}
	return 0;
}
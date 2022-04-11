#include<stdio.h>
int main()
{
	int a = 10;
	if (a < 18)
		printf("未成年\n");
	else if (a >= 18 && a < 28)
		printf("青年\n");
	else
		printf("老不死\n");
	return 0;
}
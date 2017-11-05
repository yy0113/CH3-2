#include<stdio.h>
#include<stdlib.h>

int integerPower(int a, int b);
int main(void)
{
	int a, b;
	printf("integerPower(a,b):");
	scanf_s("%d %d", &a, &b);
	int integerPower(a, b);
	printf("%d \n", integerPower(a, b));
	while (b >= 1)
	{
		for (b = b; b >= 1; b--)
		{
			if (b>1)
			{
				printf("%d*", a);
			}
			else
			{
				printf("%d\n", a);
			}
		}

	}
	system("pause");
	return 0;
}
int integerPower(int a, int b)
{
	if (b == 0) return 1;
	if (b == 1) return a;
	return a*integerPower(a, b - 1);
}
/*int main(void)
{
	int a, b;
	printf("integerPower(a,b):");
	scanf_s("%d %d", &a,&b);
	while (b>=1)
	{
		for (b = b; b>=1; b--)
		{
			if (b>1)
			{
				printf("%d*", a);
			}
			else
			{
				printf("%d\n", a);
			}
		}
		
	}
	system("pause");
	return 0;
}*/
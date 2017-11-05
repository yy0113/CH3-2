#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	unsigned int n;
	unsigned long long fib;
	int n1 = 0, n2 = 1, i;
	while (1)
	{
		printf("請輸入第n個數字\n輸入99999即跳出:");
		scanf_s("%d", &n);
		printf("\n");
		if (n==0)
		{
			fib = n1;
		}
		else if(n==1)
		{
			fib = n2;
		}
		else if (n ==99999 )
		{
			system("pause");
			return 0;
		}
		else
		{
			for ( i = 2; i <=n; i++)
			{
				fib = n1 + n2;
				n1 = n2;
				n2 = fib;
			}
			n1 = 0;
			n2 = 1;
		}
		printf("The fib=%d\n", fib);
		system("pause");

		
	}
	
}


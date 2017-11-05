#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, i,lcm;
	printf("請輸入兩數:");
	scanf_s("%d %d", &a, &b);
	while (a<=0||b<=0)
	{
		printf("error code\n");
		printf("請再重新輸入:");
		scanf_s("%d %d",&a,&b);
	}
	for ( i = 1; i <=a; i++)
	{
		if (a%i==0)
		{
			if (b%i==0)
			{
				c = i;
			}
		}
	}
	lcm = a*b / c;
	printf("最小公倍數為%d\n", lcm);
	system("pause");
	return 0;
}
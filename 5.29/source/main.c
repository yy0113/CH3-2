#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, i,lcm;
	printf("�п�J���:");
	scanf_s("%d %d", &a, &b);
	while (a<=0||b<=0)
	{
		printf("error code\n");
		printf("�ЦA���s��J:");
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
	printf("�̤p�����Ƭ�%d\n", lcm);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a,b;
	printf("�п�J�@�^��r��:");
	scanf_s("%c", &a);
	
	if (a >= 'a'&& a <= 'z')
	{
		b = a - 32;
	}
	else
	{
		b = a + 32;
	}
	printf("%c\n",b);
	system("pause");
	return 0;
}
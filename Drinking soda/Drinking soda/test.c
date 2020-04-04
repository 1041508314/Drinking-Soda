#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Drinking_soda(int money)
{
	int total = money;
	int empty = money;
	while (empty > 1)
	{
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;

	}
	return total;
}

int main()
{
	int money = 20;
	int ret = Drinking_soda(money);
	printf("∫»%d∆ø\n", ret);

	return 0;
}
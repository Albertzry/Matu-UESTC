#include<stdio.h>


int main()
{
	int i, x=1, sum=0;
	for (i = 0; i < 9; i++)
	{

		x = (x + 1) * 2;

		printf("%d,", x);
	}
	printf("%d", x);
	
	
	return 0;
}

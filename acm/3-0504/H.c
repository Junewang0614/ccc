#include<stdio.h>

int main()
{
	int n;
	int x,y;
	int num;

	while(scanf("%d",&n) != EOF)
	{
		n = n / 2;
		num = 0;
		x = 1;y = n-x;

		while(x < y)
		{
			num++;
			x++;
			y = n - x;
		}

		printf("%d\n",num);
	}
	return 0;
}


			

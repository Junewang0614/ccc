#include<stdio.h>
//求1到n的和。
int main()
{
	int n;int i = 1;
	long int sum;
	while(scanf("%d",&n) != EOF)
	{
		sum = 0;
		for(i = 1;i <= n;i++)
		{
			sum += i;
		}

		printf("%ld\n",sum);
	}

	return 0;
}
		

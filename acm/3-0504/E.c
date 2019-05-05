#include<stdio.h>


int chengji(int a[],int n)
{
	int i = 0;
	int chengji0 = 1;
	for(i = 0;i < n;i++)
	{
		if(a[i] % 2 != 0)
			chengji0 *= a[i];
	}
	return chengji0;
}

int main()
{
	int n;
	int a[1000] = {0};
	int b[500] = {0};
	int i;
	int chengji0;

	while(scanf("%d",&n) != EOF)
	{
		for(i = 0;i < n;i++)
		{
			scanf("%d",&a[i]);
		}

		chengji0 = chengji(a,n);
		printf("%d\n",chengji0);
	}

	return 0;
}	

		

		




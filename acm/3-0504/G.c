#include<stdio.h>

int  main()
{
	int n,m;
	int i = 1,j = 1;
	int num = 0;

	scanf("%d%d",&n,&m);
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= m;j++)
		{
			if((i + j) % 5 == 0)
			       num++;
		}
	}
	
	printf("%d\n",num);
}	




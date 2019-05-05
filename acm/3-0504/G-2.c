#include<stdio.h>

int main()
{
	int n,m;
	int i,j;
	int y;
	int num = 0;
	scanf("%d%d",&n,&m);

	for(i = 1;i <= n;i++)
	{
		for(j = 1;j*5 <= m + n;j++)
		{
			y = j*5 - i;
			if(y >= 1 && y <= m)
				num++;
		}
		//printf("%d\n",num);
	}

	printf("%d\n",num);
}

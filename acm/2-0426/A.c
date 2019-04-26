#include<stdio.h>

int zhengchu(int a[])
{
	int tag = 0;
	if(a[0] % a[1] == 0)
		tag = 1;
	return tag;
}

int main()
{
	int T;
	//printf("T = ");
	scanf("%d",&T);
	int i = 0,j = 0;
	int a[T][2];
	int b[T];
	for(i = 0;i < T;i++)
	{
		for(j = 0;j < 2;j++)
			scanf("%d",&a[i][j]);
	}

	for(i = 0;i < T;i++)
	{
		b[i] = zhengchu(a[i]);
	}

	for(i = 0;i < T;i++)
	{
		if(b[i] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}


	return 0;
}


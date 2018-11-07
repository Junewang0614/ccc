#include<stdio.h>

int judge(long int a,long int b,long int c)
{
	int r;
	if (a + b > c)
		r = 1;
	else 
		r = 0;

	return r;
}

int main()
{
	int t;scanf("%d",&t);

	int a[t][3];

	int i,j;
	int count;
	for (i = 0;i < t;i++)
	{
		for (j = 0;j < 3;j++)
			scanf("%d",&a[i][j]);
	}

	for (i = 0;i < t;i++)
	{
		count = judge(a[i][0],a[i][1],a[i][2]);
		if (count)
			printf("Case #%d: true",i+1);
		else
			printf("Case #%d: false",i+1);
		putchar('\n');
	}

	return 0;
}


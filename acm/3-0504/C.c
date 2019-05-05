#include<stdio.h>
//注意数组以及变量的归零
//#define DEBUG

int main()
{
	int n,m;
	int i = 0;
	int a[100] = {0};
	int b[100] = {0};
	int j = 0;
	int *p;

	while(scanf("%d%d",&n,&m) != EOF)
	{
		p = a;
		a[0] = 2;
		j = 0;
		for(i = 1;i < n;i++)
		{
			a[i] = a[i-1] + 2;
		}

		while(n >= m)
		{
			for(i = 0;i < m;i++)
			{
				b[j] += *p;
				p++;
			}
			#ifdef DEBUG
			printf("b[%d] = %d ",j,b[j]);
			#endif
			b[j] = b[j] / m;
			j++;
			n = n-m;
		}
		j = j - 1;
		
		if(n)
		{
			j = j + 1;
			for(i = 0;i < n;i++)
			{
				b[j] += *p;
				p++;
			}
			b[j] = b[j] / n;
		}

		for(i = 0;i <= j;i++)
		{
			if(i == j)
			       printf("%d\n",b[i]);	
			else
				printf("%d ",b[i]);
			b[i] = 0;
		}
	}

	return 0;
}






#include<stdio.h>
#define LIF(x) ((x)*(x)*(x))

int shuixian(int x)
{
	int a,b,c;
	int sum = 0;
	int tag = 0;
	a = x % 10;
	c = x / 100;
	b = (x / 10) % 10;
	sum = LIF(a) + LIF(b) + LIF(c);
	#ifdef DEBUG
	printf("%d %d %d ",a,b,c);
	printf("%d\n",sum);
	#endif
	if(sum == x)
		tag = 1;
	return tag;
}

int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n) != EOF)
	{
		int i = m;
		int t;int num = 0;
		int a[100] ={0};
		for(i = m;i <= n;i++)
		{
			t = shuixian(i);
			if(t == 1)
			{
				a[num] = i;
				num++;
			}			
		}

		for(i = 0;i < num ;i++)
		{
			if(i == num - 1)
				printf("%d",a[i]);
			else
				printf("%d ",a[i]);
		}

		if(num == 0)
			printf("no\n");
		else
			putchar('\n');

				
	}
	#ifdef DEBUG
	printf("%d",shuixian(370));
	#endif


	return 0;
}



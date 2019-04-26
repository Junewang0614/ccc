#include<stdio.h>
#include<string.h>

void count(int a[3],float b[],int n)
{
	int i = 0;
	for(i = 0;i < n;i++)
	{
		if(b[i] < 0)
			a[0]++;
		else if(b[i] == 0)
			a[1]++;
		else if(b[i] > 0)
			a[2]++;
	}
}

int main()
{
	int n;int i;
	float a[100];
	int b[3] = {0};//在while循环中需要将数组清零。

	while(scanf("%d",&n) != EOF)
	{
		if(n == 0)
			break;
		for(i = 0;i < n;i++)
		{
			scanf("%f",&a[i]);
		}
		
		count(b,a,n);
		for(i = 0;i < 3;i++)
		{
			if(i == 2)
				printf("%d",b[i]);
			else
				printf("%d ",b[i]);
		}
		putchar('\n');
		memset(b,0,3*sizeof(int));

	}

	return 0;
}




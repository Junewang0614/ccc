#include<stdio.h>
#define DENG 30
int main()
{
	int a[10];
	int i = 0;
	int len = 0;
	int num = 0;

	for(i = 0;i < 10;i++)
	{
		scanf("%d",&a[i]);
	}

	scanf("%d",&len);

	for(i = 0;i < 10;i++)
	{
		if(a[i] <= (len + DENG))
			num++;
	}

	printf("%d\n",num);

	return 0;
}



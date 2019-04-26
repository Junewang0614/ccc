#include<stdio.h>

int main()
{
	int n;int i = 0;
	int r;
	int a[5] = {100,20,10,5,1};
	int num = 0;

	scanf("%d",&n);
	for(i = 0;i < 5;i++)
	{
		r = n / a[i];
		if(r > 0)
		{
			num += r;
			n = n % a[i];
		}
	}

	printf("%d\n",num);

	return 0;
}
		


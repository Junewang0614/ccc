#include<stdio.h>
//#define DEBUG
int taozi(int n)
{
	int f;
	if(n == 1)
	{
		f = 1;
	}
	else
	{
		f = 2*(taozi(n - 1) + 1);
	}

	return f;
}

int main()
{
	#ifdef DEBUG
	int n0 = 2;
	printf("%d\n",taozi(n0));
	#endif

	int n;
	int m;
	while(scanf("%d",&n) != EOF)
	{
		m = taozi(n);
		printf("%d\n",m);
	}

	return 0;
}

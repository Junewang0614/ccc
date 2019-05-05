#include<stdio.h>
//辗转相除法最大公因数
int gongyueshu(int a,int b)
{
	int r;
	int max,min;
	max = (a > b)?a:b;
	min = (a > b)?b:a;
	r = max % min;

	while(r)
	{
		max = min;
		min = r;
		r = max % min;
	}

	return min;
}


int main()
{

	int x,y;
	int jieguo;

	while(scanf("%d%d",&x,&y) != EOF)
	{
		jieguo = gongyueshu(x,y);
		printf("%d\n",jieguo);
	}

	return 0;
}

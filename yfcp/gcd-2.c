#include <stdio.h>

/*相减法*/

int gcd(int a,int b){
	int max,min;

	max = (a > b)?a:b;
	min = (a <= b)?a:b;

	while (max != min )
	{       int temp;
		temp = max - min;

		max = (temp > min)?temp:min;
		min = (temp <= min)?temp:min;
	}

	return max;
}

int main()
{
	int a,b;
	int gcdx;
	printf("a = "); scanf("%d",&a);
	printf("b = "); scanf("%d",&b);

	gcdx = gcd(a,b);

	printf("最大公因数%d \n",gcdx);

	return 0;
}

	

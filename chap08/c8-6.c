#include <stdio.h>
/*不递归计算阶乘*/

int factorial (int n){
	int i;
	int temp = 1;

	for ( i = n; i > 0; i--)
	{
		temp *= i;

	}

	return temp;
}
int main()
{
	int n;
	scanf("%d",&n);

	int facn;
	facn = factorial(n);

	printf("%d\n",facn);

	return 0;
}


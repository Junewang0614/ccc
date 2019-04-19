#include<stdio.h>
//求实数的绝对值

double jueduizhi(double n)
{
	if(n > 0)
		return (n);
	else if(n == 0 || n == -0)
		return (0);
	else if(n < 0)
		return (-n);
}


int main()
{
	double n;
	while(scanf("%lf",&n) != EOF)
	{
		double n1 = jueduizhi(n);
		printf("%.2f\n",n1);
	}
	return 0;
}


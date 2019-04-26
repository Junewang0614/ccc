#include<stdio.h>
#define PI 3.1415927
//求球的体积

double tiji(double r)
{
	double v;
	v = ( (double)4 / 3) * PI * r*r*r;
       return (v);
}

int main()
{
	double r;
	double v;

	while(scanf("%lf",&r) != EOF)
	{
		v = tiji(r);
		printf("%.3lf\n",v);
	}

	return 0;
}



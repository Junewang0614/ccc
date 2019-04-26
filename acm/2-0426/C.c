#include<stdio.h>
#define PI  3.14159
#define cm3(x) ((x)*1000)
#define v(h,r) (PI * (r)*(r)*(h))

int main()
{
	int h,r;
	scanf("%d%d",&h,&r);
	float v0; int n;
	v0 = v(h,r);

	if(cm3(20) / v0 == 0)
		n = cm3(20) / v0;
	else
	{
		n = cm3(20) / v0;
		n++;
	}

	printf("%d\n",n);
	return 0;
}


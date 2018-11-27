#include<stdio.h>
#include<math.h>

int main()
{
	double p1,r1,p2,r2;
	scanf("%lf %lf %lf %lf ",&r1,&p1,&r2,&p2);

	double a1,a2,b1,b2;
	a1 = r1*cos(p1);
	a2 = r2*cos(p2);
	b1 = r1*sin(p1);
	b2 = r2*sin(p2);

	double A,B;
	A = a1*a2 - b1*b2;
	B = a1*b2 + a2*b1;

	if (B >= 0)
		printf("%.2f+%.2fi\n",A,B);
	else if (B < 0)
		printf("%.2f-%.2fi\n",A,-B);
	return 0;
}



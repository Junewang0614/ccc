#include <stdio.h>
#define MNUM 12

int main()
{
	int Y,M,D;
	scanf("%d/ %d/ %d",&Y,&M,&D);

	int a[MNUM] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (Y % 4 == 0)
		a[1] = 29;

	int sum;int sum1 = 0;
	int i;
	for (i = 0; i < M-1;i++)
	       sum1 += a[i];
	sum = sum1 + D;
	printf("%d \n",sum);

	return 0;
}	

	


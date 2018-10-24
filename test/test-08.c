#include <stdio.h>
int sumx(int a[],int n)
{
	int i;
	int max,min;
	int temp;

	max = a[0];
	min = a[0];

	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		else if (a[i] < min )
			min = a[i];
	}

	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}

	int sum1 = sum - max - min;
	return sum1;
}

int main()
{
	int n;
	scanf("%d",&n);

	int a[n];
	int i;
	for ( i = 0; i < n; i++)
		scanf("%d",&a[i]);

	int sum = sumx(a,n);
	double avg = (double)sum /(n-2);

	printf("%.2f \n", avg);

	return 0;
}

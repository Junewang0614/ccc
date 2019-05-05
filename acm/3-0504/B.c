#include<stdio.h>


int main()
{
	int n;
	int a[101] = {0};
	int i;
	int *p;
	int max,min;
	float aver; 

	while(scanf("%d",&n) != EOF)
	{
		for(i = 0;i < n;i++)
		{
			scanf("%d",&a[i]);
		}

		p = a;
		max = p[0];min = p[0];
		aver = p[0];

		for(i = 1;i < n;i++)
		{
			if(max < *(p + i))
				max = *(p + i);
			if(min > *(p + i))
				min = *(p + i);
			
			aver = aver + *(p + i);
		}

 		aver = (float)(aver - min - max) / (n - 2);

		printf("%.2f\n",aver);
	}

	return 0;
}


		
			







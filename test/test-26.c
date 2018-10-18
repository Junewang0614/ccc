#include <stdio.h>

int lcm(int a,int b)
{
	int r;
	int max,min;
	int temp;
	max = (a > b)?a:b;
	min = (a <= b)?a:b;
	r = max % min;

	if (r == 0)
		temp = max;
	else
		while (r != 0 )
		{
			max = min;
			min = r;
			r = max % min;
		}	
		temp = a*b/min;
	return temp;
}

int main()
{
	int a,b;
       	do{
    	   	 scanf("%d %d",&a,&b);
       		 if (a <= 0 || b <= 0)
        	        puts("请输入两个正整数。");
        }while( a<=0 || b <= 0);

	int lcmx;
	lcmx = lcm(a,b);

	printf("%d\n",lcmx);
	return 0;
}

	


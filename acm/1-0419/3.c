#include<stdio.h>
#include<math.h>
//求两点间距离公式

int pingfanghe(int a, int b)//求平方和
{
	int sum;
	sum = a*a + b*b;
	return(sum);
}

int main()
{
	int x1,y1,x2,y2;
	float d  = 0.0;

	while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2) != EOF)
	{
		d = 0;
		d = sqrt( pingfanghe(x1-x2,y1-y2) );
		printf("%.2f\n",d);
	}

	return 0;
}
	     		

#include <stdio.h>

int lcm(int a,int b)
{
	int i;
	int max;
	max = (a > b)?a:b;

	for (i = max; ; i++){
		if (i % a == 0 && i % b == 0)
			break;
	}

	return i;
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
}

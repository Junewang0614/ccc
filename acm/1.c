#include<stdio.h>

int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		printf("%d",a+b);
		putchar('\n');
	}

	return 0;
}

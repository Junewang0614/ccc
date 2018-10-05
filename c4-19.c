#include <stdio.h>

int main(void)
{
	int i, n,num;

	printf("整数值：");
	scanf("%d", &n);

        num=0;
	for (i = 1; i <= n; i++)
		if (n % i == 0){
			printf("%d \n", i);
			num++;
		}

	printf("因数有%d个。",num);
	putchar('\n');

	return 0;
}

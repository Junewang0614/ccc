#include <stdio.h>
int main(void){
	int x,i;
	printf("整数值：");scanf("%d",&x);

	for(i=1;i<=x;i+=2)
		printf("%d ",i);
	putchar('\n');

        return 0;
}


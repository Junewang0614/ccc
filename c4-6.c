#include <stdio.h>
int main(void){
	int x,i;
	printf("请输入一个整数：");scanf("%d",&x);

	i=0;
	while (i<x)
		printf("%d ",i+=2);
	printf("\n");
	
	return 0;
}

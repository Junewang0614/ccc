#include <stdio.h>
int main(void){
	int x,a;
	printf("请输入一个整数：");scanf("%d",&x);
        
	a=2;
	while (a<x){
		printf("%d ",a);
		a=a*2;}

	return 0;
}

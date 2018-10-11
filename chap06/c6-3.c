#include <stdio.h>
int cude(int x){
	return x*x*x;
}

int main(void){
	int x;
	printf("请输入一个整数：");
	scanf("%d",&x);

	printf("该整数的立方为%d.\n",cude(x));



        return 0;
}


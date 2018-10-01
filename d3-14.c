#include <stdio.h>
int main(void){
	int n1,n2,max;

	puts("请输入两个整数：");
	printf("n1:"); scanf("%d",&n1);
	printf("n2:"); scanf("%d",&n2);

	max=(n1>n2)?n1:n2;

	printf("较大的数是%d.\n",max);

	return 0;
}

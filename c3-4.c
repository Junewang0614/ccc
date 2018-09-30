#include <stdio.h>
int main(void){
	int a,b;

	printf("请输入两个整数 \n");
	printf("a="); scanf("%d",&a);
	printf("b="); scanf("%d",&b);

	if (a==b)
		puts("a和b相等");
	else if (a>b)
		puts("a大于b");
	else if (a<b)
		puts("a小于b");

	return 0;
}


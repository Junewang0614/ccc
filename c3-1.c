#include <stdio.h>
int main(void){
	int A,B;
	puts("请输入两个整数。");

	printf("A=");scanf("%d",&A);
	printf("B=");scanf("%d",&B);

	if (A%B)
		puts("B不是A的因数。");
	else
		puts("B是A的因数。");
	return 0;
}

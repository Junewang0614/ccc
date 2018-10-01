#include <stdio.h>
int main(void){
	int n1,n2,n3,min;

	puts("请输入三个整数：");
	printf("n1=");scanf("%d",&n1);
	printf("n2=");scanf("%d",&n2);
	printf("n3=");scanf("%d",&n3);

	min=(((n1<n2)?n1:n2)<n3)?((n1<n2)?n1:n2):n3;

	printf("最小的值是%d\n",min);
	
	return 0;
}


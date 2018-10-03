#include <stdio.h>
int main(void){
	int a,b,max,min,sum,min0;
	sum=0;
	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);

	max=a>=b?a:b;
	min=a<b?a:b;
	min0=min;

	do {
		sum=sum+min;
		min=min+1;
	}while (!(min>max));

	printf("大于等于%d小于等于%d的所有整数的和是%d.\n",min0,max,sum);

	return 0;
}



#include <stdio.h>
int main(void){
	int A,B;int max,min;
	puts("请输入两个整数");
        printf("A=");scanf("%d",&A);
        printf("B=");scanf("%d",&B);

	max=(A-B>=0)?A:B;
        min=(A-B<0)?A:B;

       
	if (max-min<10 ||max-min==10)
		puts("它们的差小于等于10");
	else
		puts("他们的差大于等于11");

	return	0;
}








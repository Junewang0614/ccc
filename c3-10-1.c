#include <stdio.h>
int main(void){
	int A,B,C;
        printf("A=");scanf("%d",&A);
        printf("B=");scanf("%d",&B);
        printf("C=");scanf("%d",&C);

	if (A==B && B==C)
		puts("三个值都相等。");
	else if (A==B || A==C ||B==C)
		puts("有两个值相等。");
	else
		puts("三个值都不同。");





        return  0;
}


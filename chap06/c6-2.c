#include <stdio.h>
int min3(int a, int b, int c){
	int min;

	min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

int main(void){
	int a,b,c;

	printf("a:");scanf("%d",&a);
	printf("b:");scanf("%d",&b);
	printf("c:");scanf("%d",&c);

	printf("最小值为%d.\n",min3(a,b,c));



        return 0;
}


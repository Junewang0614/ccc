#include <stdio.h>

int min2 (int a, int b){
	int min;
	if (a<b)
		min = a;
	else
		min = b;
	return min;
}


int main(void){
	int a,b;
	printf("a:");scanf("%d",&a);
	printf("b:");scanf("%d",&b);

	printf("最小的值是%d.\n",min2(a,b));

	return 0;
}

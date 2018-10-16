#include <stdio.h>

int main(void){

	int a,b;
	int retry = 1;
	do {
		printf("a="); scanf("%d",&a);
		printf("b="); scanf("%d",&b);

		if ( a <= 0 || b <= 0){
			puts("请输入正整数！");
			retry = 0;}
	}while (retry == 0);


	int max,min;
	max = (a>=b)?a:b;
	min = (a<b)?a:b;

 	int r;
	r = max % min;
	while (r != 0){
		max = min;
		min = r;
		r = max % min;
	}

	printf("%d",min);

	putchar('\n');

	return 0;
}

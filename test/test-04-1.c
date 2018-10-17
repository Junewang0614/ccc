#include <stdio.h>
int main(){
	int a,b;
	int r;
	int retry = 1;

	do {
		printf("a="); scanf("%d",&a);
		printf("b="); scanf("%d",&b);

		if (a <= 0 || b <= 0){
			puts("请输入正整数。");
			retry = 0;
		}
	} while(retry == 0);

 	r = a % b;
	while (r != 0){
		r = a % b;
		a = b;
		b = r;
	}

	printf ("两个数的最大公因数是%d.\n",a);
	
	return 0;
}






#include <stdio.h>
int main(void){
	int x,i;
	printf("长方形整数面积为：");scanf("%d",&x);
	puts("其边长为：");

	for (i=1;i<=x;i++){
		if (i*i>x) break;
		if (x%i!=0) continue;
		printf ("%d X %d \n",i,x/i);
	}



        return 0;
}


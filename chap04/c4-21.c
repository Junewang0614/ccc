/*显示以所输入整数为边长的正方形*/
#include <stdio.h>
int main(void){
	int i,j,x;
	puts("生成一个正方形。");
	printf("正方形有几层：");scanf("%d",&x);

	for (i=1;i<=x;i++){
		for(j=1;j<=x;j++)
			printf("*");
		putchar('\n');
	}


        return 0;
}


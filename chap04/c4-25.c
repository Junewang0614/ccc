/*显示输入整数层的向下的金字塔形状，第i行显示i%10的结果。*/
#include <stdio.h>
int main(void){
	int i,j,x;
	puts("让我们来画一个向下的金字塔。");
	printf("x=");scanf("%d",&x);

	for (i=1;i<=x;i++){
		for (j=1;j<=i-1;j++)
			printf(" ");
		for (j=1;j<=2*(x-i)+1;j++)
			printf("%d",i%10);
		putchar('\n');
	}



        return 0;
}


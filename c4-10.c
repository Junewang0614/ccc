#include <stdio.h>
int main(void){
	int x,i;
	printf("正整数：");scanf("%d",&x);

        i=0;
	while (i++<x){
		putchar('*');
		putchar('\n');}

	return 0;
}

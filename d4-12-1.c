#include <stdio.h>
int main(void){
	int x;
	printf("正整数：");scanf("%d",&x);

	for (x>0;x--;)
		printf("*");
	putchar('\n');

	return 0;
}

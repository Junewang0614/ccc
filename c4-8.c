#include <stdio.h>
int main(void){
	int no,no0;
	printf("正整数：");scanf("%d",&no);
	
	no0=no;
	while (no-->0)
		putchar('*');
	if (no0>0)
		putchar('\n');
		
	return 0;
}

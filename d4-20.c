/*输入一个整数，显示该整数个*（循环次数可任意指定）*/
#include <stdio.h>
int main(void){
	int retry;
	do {
		int no,i;
		do {
			printf("请输入一个正整数：");scanf("%d",&no);
			if (no<=0)
				puts("请不要输入非正整数");
		}while (no<=0);

		for (i=1;i<=no;i++)
			printf("*");
		putchar('\n');

		printf("是否继续执行：[yes……0/no……9]");scanf("%d",&retry);
	}while (retry==0);



        return 0;
}


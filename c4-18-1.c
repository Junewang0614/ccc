#include <stdio.h>
int main(void){
	int x;
	printf("显示多少个*：");scanf("%d",&x);

	while (x/5>1){
		printf("***** \n");
		x-=5;}
	switch (x%5){
		case 0:printf("*****");break;
		case 1:printf("*");break;
		case 2:printf("**");break;
		case 3:printf("***");break;
		case 4:printf("****");break;
	}
	putchar ('\n');





        return 0;
}


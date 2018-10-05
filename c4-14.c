#include <stdio.h>
int main(void){
	int x,i;
	printf("请输入一个整数：");scanf("%d",&x);

	for (i=0;i<(x/10);i++)
		printf("1234567890");

	switch (x%10){
		case 0:putchar('\n');break;
		case 1:puts("1");break;
		case 2:puts("12");break;
		case 3:puts("123");break;
		case 4:puts("1234");break;
		case 5:puts("12345");break;
		case 6:puts("123456");break;
		case 7:puts("1234567");break;
		case 8:puts("12345678");break;
		case 9:puts("123456789");break;
	}



	return 0;
}

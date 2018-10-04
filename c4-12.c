#include <stdio.h>
int main(void){
	int no,a,i;

	do {
		printf("请输入一个正整数：");
		scanf("%d",&no);
		if (no<=0)
			puts("请不要输入非正数。");
	}while(no<=0);

	a=no;i=0;
	printf("%d的位数是：",a);
	while (no>0){
		i++;
		no/=10;}
	printf("%d \n",i);

	return 0;
}

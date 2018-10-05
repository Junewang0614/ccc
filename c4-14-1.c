#include <stdio.h>
int main(void){
	int a=1;int n,i;
	printf("请输入一个整数：");scanf("%d",&n);

	for (i=0;i<n;i++){
		if (a==10)
			a-=10;
		printf("%d",a);a++;
	}
	putchar('\n');


        return 0;
}  
/* by 张可学长 */ 


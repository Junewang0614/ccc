#include <stdio.h>

#define NUMBER 80

int main(void){
	int n; /*实际人数*/
	int i; /*循环使用*/
	int tensu[NUMBER];

	printf("数据个数："),scanf("%d",&n);

	for (i = 0; i < n; i++){
		printf("%d号:",i + 1);
		scanf("%d",&tensu[i]);
	}

	printf("{");
	for (i = 0; i < n-1; i++)
		printf("%d,",tensu[i]);
	printf("%d",tensu[n-1]);
	puts("}");




        return 0;
}


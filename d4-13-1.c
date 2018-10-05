#include <stdio.h>
int main(void){
	int num,x;
	int i;int sum=0;

	printf("要输入多少个整数：");scanf("%d",&num);

	for (i=1;i<=num;i++){
		printf("NO.%d:",i);scanf("%d",&x);
		sum=sum+x;}

	printf("合计值：%d.\n",sum);
	printf("平均值：%.2f\n",(double)sum/num);





	return 0;
}

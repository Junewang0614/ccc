#include <stdio.h>
int main(void){
	int x1,x2,num;
	double y;
	printf("开始数值(cm)：");scanf("%d",&x1);
	printf("结束数值(cm)：");scanf("%d",&x2);
	printf("间隔数值(cm)：");scanf("%d",&num);

	for(;x1<=x2;x1+=num){
		y=((double)x1-100)*0.9;
		printf("%dcm   %.2fkg\n",x1,(double)y);
	}



	return 0;
}

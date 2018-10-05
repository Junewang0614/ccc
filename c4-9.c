#include <stdio.h>
int main(void){
	int x,a;
	printf("正整数:");scanf("%d",&x);
	a=x;

	while (x>1){
		printf("+-");
		x=x-2;}

	if (x%2==1)
		printf("+\n");
	else
		printf("\n");
	return 0;
}

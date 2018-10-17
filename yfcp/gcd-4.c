#include <stdio.h>

/*最小公倍数枚举*/

int gcdp(int a,int b){
	int i;
	i = (a >= b)?a:b;

	for ( ; ; i++){
		if (i % a == 0 && i % b == 0)
			break;
	}
	return i;
}

int main(){
	int a,b;
	printf("a = ");scanf("%d",&a);
	printf("b = ");scanf("%d",&b);

	int gcdxp;
	gcdxp = gcdp(a,b);

	printf("%d\n",gcdxp);

	return 0;
}

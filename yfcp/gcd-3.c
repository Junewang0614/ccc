#include <stdio.h>

/*穷举法*/

int gcd(int a,int b)
{
	int i;
	i = (a <= b)?a:b;

	for ( ; ;i--){
		if (a % i == 0 && b % i == 0)
			break;
	}

	return i;
}

int main(){
	int a,b;
	printf("a="); scanf("%d",&a);
	printf("b="); scanf("%d",&b);

	int gcdx;
	gcdx = gcd(a,b);

	printf("%d\n",gcdx);

	return 0;
}
	

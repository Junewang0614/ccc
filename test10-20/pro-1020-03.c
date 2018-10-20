#include <stdio.h>
int gcd(int a,int b){
	int r = a%b;
	if (r == 0)
		return b;
	while (r != 0){
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}


int main()
{
	int x0,y0;
	int retry = 1;

	do{
		scanf("%d %d", &x0,&y0);
		if ( x0 < 2 || y0 < 2){
			retry = 0;
			puts("请重新输入");
		}
		else if (x0 > 10000 || y0 > 10000){
			retry = 0;
			puts ("请重新输入");
		}
	} while (retry == 0);

	int temp = x0 * y0;
	int i,j;
	int k = 0;

	int max,min;
	max = (x0 > y0)?x0:y0;
	min = (x0 <= y0)?x0:y0;

	for ( i = min; i <= max ;i++){
		j = temp/i;
 		if (i*j == temp && gcd(i,j) == min)
			k++;
	}
	printf("%d\n",k);	

	return 0;
}	


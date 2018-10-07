/*
	画一个长方形,较大的数作为列数
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;
	int a,b;

	puts("让我们来画一个长方形。");
	printf("一边：");   scanf("%d", &height);
	printf("另一边：");   scanf("%d", &width);

	a=(height>width?height:width);
	b=(height<width?height:width);

	for (i = 1; i <= b; i++) {	
		for (j = 1; j <= a; j++)		
			putchar('*');
		putchar('\n');					
	}
	return 0;
}

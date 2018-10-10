#include <stdio.h>

int main(void)
{
	int i;
	double v[5] = {0};		/* 初始化 */

	for (i = 0; i < 5; i++)			/* 显示元素的值 */
		printf("v[%d] = %.2f\n", i, v[i]);

	return 0;}

/*
	用对象式宏定义元素个数,对数组的全部元素进行倒序排列
*/

#include <stdio.h>
#define NUMBER 9
int main(void)
{
	int i;
	int x[NUMBER];					

	for (i = 0; i < NUMBER; i++) {	/* 输入元素的值 */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < NUMBER/2; i++) {	/* 对数组元素进行倒序排列 */
		int temp = x[i];
		x[i]     = x[NUMBER - 1 - i];
		x[NUMBER - 1 - i] = temp;
	}

	puts("倒序排列了。");
	for (i = 0; i < NUMBER; i++)		/* 显示元素的值 */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}

#include <stdio.h>
#include <string.h>
#define number 10
int main()
{
	int i = 0;
	char s[number][128];

	for(i = 0;i < number; i++)
	{
		printf("s[%d]: ",i);
		scanf("%s",s[i]);
		if (strcmp(s[i],"$$$$$") == 0)
			break;
	}

	for(i = 0;i < number;i++)
	{
		if (strcmp(s[i], "$$$$$") == 0)
			break;
		else
			printf("%s\n",s[i]);
	}

	return 0;
}

/*报错
 * “s[i] == "$$$$"”不运行
 * 需要借助函数strcmp（）== 0?来判断字符串是否相等
 */

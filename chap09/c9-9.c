#include<stdio.h>


void rev_string(char s[])
{
	char temp;
	int i = 0;
	int len = 0;/*计算长度*/
	while(s[len])
	{
		len++;
	}


	for(i = 0;i < len/2 ;i++)
	{
		temp = s[i];
		s[i] = s[len-1-i];
		s[len-1-i] = temp;
	}

	printf("%s",s);
}

int main()
{
	char s[128];
	scanf("%s",s);

	rev_string(s);
	putchar('\n');
	return 0;
}
		

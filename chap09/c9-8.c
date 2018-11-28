#include<stdio.h>

void put_string(const char s[])
{
	int len = 0;
	int i = 0;
	while(s[len])
	{
		len++;
	}

	for(i = 0;i < len; i++)
	{
		printf("%c",s[len-1-i]);
	}
}

int main()
{
	char s[] = "SEC";
	put_string(s);
	putchar('\n');

	return 0;
}

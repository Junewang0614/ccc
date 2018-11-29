#include<stdio.h>
void null_string(char s[])
{
	s[0] = '\0';
}

 int main()
{
	char s[128];
	scanf("%s",s);
	null_string(s);
	printf("%s\n",s);

	return 0;
}


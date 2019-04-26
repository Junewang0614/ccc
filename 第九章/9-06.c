#include<stdio.h>

void fun(char *s)
{
	int i = 0;
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i]  >= '0' && s[i] <= '9')
			s[i] = '';
	}
}

int main()
{
	return 0;
}


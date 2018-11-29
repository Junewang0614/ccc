#include<stdio.h>

int str_chnum(const char s[],int c)
{
	int count = 0;
	int i = 0;
	while(s[i])
	{
		if (s[i] == c + '0')
		{
			count++;
		}
		i++;
	}

	return count;
}

int main()
{
	int c;scanf("%d",&c);
	char s[128];
	scanf("%s",s);

	int b = str_chnum(s,c);
	printf("%d\n",b);

	return 0;
}
	

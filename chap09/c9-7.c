#include<stdio.h>
void put_string1(const char s[],int n)
{
	int i = 0;int j = 0;
	putchar('"');
	for( ;j < n; j++)
	{
		i = 0;
		while(s[i])
		{
			putchar(s[i++]);
		}
	}
	printf("\"\n");
}

void put_string2(const char s[],int n)
{
	int i = 0;
	putchar('"');
	for(i = 0;i < n;i++)
	{
		printf("%s",s);
	}
	printf("\"\n");
}

int main()
{
	char s[128];scanf("%s",s);
	int n;scanf("%d",&n);
	put_string1(s,n);
	put_string2(s,n);

	return 0;
}




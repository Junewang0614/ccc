#include<stdio.h>

void del_digit(char s[])
{
	char t[128];
	int i = 0;int j = 0;
	while (s[i]) 
	{
		if (s[i] < '0' || s[i] > '9')
		{
			t[j] = s[i];
			j++;
		}
		i++;
	}

	printf("%s",t);
}

int main()
{
	char s[128];
	scanf("%s",s);
	del_digit(s);
	printf("\n");
	return 0;
}




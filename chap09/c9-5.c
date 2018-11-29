#include<stdio.h>

int str_char(const char s[], int c)
{
	int i = 0;
	int a = -1;
	while(s[i])
	{
		if (s[i] == c + '0'){
			a = i; 
			break;
		}
		i++;
	}

	return a;
}

int main()
{
	char s[128];
	scanf("%s",s);
	int c;scanf("%d",&c);
	int a;
	a = str_char(s,c);
	printf("%d\n",a);

	return 0;
}

/*报错：
 *没有int a
 */

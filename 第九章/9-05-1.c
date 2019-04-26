#include<stdio.h>
#include<string.h>

void strlshif(char *s,int n)
{
	int i = 0;
	char *p = s;
	char *q;
	int len;
	s = s + n;
	q = s + strlen(s);
	len = strlen(p) - strlen(s);

	for(i = 0;i < len;i++)
		*(q + i) = *(p + i);
		

	*(q + len) = '\0';
}

int main()
{
	int n;
	char a[100] = {'\0'};
	char *p = a;
	scanf("%s",a);
	scanf("%d",&n);

	strlshif(p,n);

	printf("%s\n",p);
	return 0;
}


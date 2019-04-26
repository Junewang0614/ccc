#include<stdio.h>
#include<string.h>

void strlshif(char *s1, char *s2, int n)
{
	int i = 0;
	char *p = s2;
	char *q;
	int len;
	//s = s + n;
	q = s1 + strlen(s1);
	len = strlen(p) - strlen(s1);

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
	
	p = p + n;
	strlshif(p,a,n);

	printf("%s\n",p);
	return 0;
}



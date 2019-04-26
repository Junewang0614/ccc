#include<stdio.h>
#include<string.h>

char *substr(char *s, int startloc, int len)
{
	char *p;
	p = s + startloc;
	p[len] = '\0';
        
	return p;
}	

int main()
{
	char a[100] = {'\0'};
	char *p0;
	gets (a);

	p0 = substr(a,3,4);

	printf("%s\n",p0);

	return 0;
}
	
	

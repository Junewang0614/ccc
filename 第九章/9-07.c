#include<stdio.h>
#include<string.h>
#define DEBUG
int totsubstrnum(char *str,char *substr)
{
	int num = 0;
	char *p = str;
	char *q = substr;
	int i = 0,j = 0;

	for(i = 0;p[i] != '\0'; )
	{
		while(1)
		{
			if(p[i] == q[0])
			{
				j++;
			
			}

			if(q[0] != '\0')
			{
				q++;
				i++;
			}

			else
			{	
				q = substr;
				break;
			}
		}

		if(j == strlen(substr))
			num++;
			j = 0;
	}

	return num;
}

int main()
{
	#ifdef DEBUG
	printf("%d\n", totsubstrnum("ABCABCABC","ABC"));
	#endif
	
	char a[100] = {'\0'};
	char b[100] = {'\0'};
	int n = 0;
	scanf("%s",a);
	scanf("%s",b);

	n = totsubstrnum(a,b);

	printf("%d\n",n);

	return 0;
}	

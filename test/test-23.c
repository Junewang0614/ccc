#include<stdio.h>
/*负责数数*/
int count(const char s[],int n)
{
	int len = 0;
	int i = 0;
	while(s[i]){
		if(s[i] == n + '0')
			len++;
		i++;
	}
	return len;
}

int main()
{
	/*字符串输入*/
	char str[1000];
	scanf("%s",str);

	int i = 0;
	for(i = 0; i <= 9; i++)
	{
		int num;
		num = count(str,i);
		if(num != 0)
			printf("%d : %d\n",i,num);
	}

	return 0;
}





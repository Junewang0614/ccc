#include <stdio.h>

int abc(int a,int b)
{
	 if (a > 100 || a <0)
                return 0;
	 else if (b < 0 || b > 100)
                return 0;
	 if ( a > 60 && b > 60 )
		return 1;
	 else 
		return 2;
}

int main()
{
	int a,b;

	scanf("%d%d",&a,&b);

	switch(abc(a,b)){
		case 0 : puts("it is error.");    break;
	 	case 1 : puts("it is pass.");     break;
	 	case 2 : puts("it is not pass."); break;
	}



	return 0;
}

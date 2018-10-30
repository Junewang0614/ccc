#include <stdio.h>

int ddd(int x)
{
	int i;int dd;
	if (x == 1)
		dd = 0;
	else if (x == 2)
		dd = 1;
	else{
		for (i = 2;i < x; i++){
			if (x % i == 0)
			{
				dd = 0;
				break;
			}
	  		else 
				dd = 1;

		}
	}
	return dd;
}

int main(){
	int x,y;
	int i;
	int count;
	int temp;

	while (scanf("%d %d",&x,&y) != EOF)
	{
		count = 0;
		if (x == 0 && y == 0)
			break;	
		for (i = x ; i <= y;i++)
		{
			temp = i*i+i+41;

			if (ddd(temp) == 0)
			{
				count = 1;
				break;
			}

		}

		if (count == 0)
	                puts("OK");
      		else
        	        puts("Sorry");
	}
        return 0;
	
}

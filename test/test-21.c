#include<stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int m = 1;
		int a,bc;
		a = 2;bc = 2;
		int sum = 0;
		if ( n == 0)
			break;
		if ((n == 2) || (n == 3))
			sum = 2;
		if (n > 3){
			for(int i = 0;i < n-2; i++){
				m *= 2;
				if (m > 2){
					a = bc;
					bc = m -a;
				}
			}
			sum = 2*a + bc;
			sum = sum % 10000;
		}

		printf("%d\n",sum);
	}
}
			
			


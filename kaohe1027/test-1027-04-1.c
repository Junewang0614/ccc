
#include <stdio.h>

int ddd(int a,int b){
	int dd = 0;
	int max,min;

	max = (a > b)?a:b;
	min = (a <= b)?a:b;

	if (max / min == 2 && max % min == 0)
		dd = 1;
	return dd;
}

				
int main(){
	int t[16];
	int i = 0;int count0;
	int n;

	while (scanf("%d",&n) != EOF)
	{
		if (n == 0)
		break;

		else
			t[i] = n;
			i++;
	}

	count0 = i;

	
	int count = 0;
	int k;

	for (i = 0;i < count0; i++){
		int temp = t[i];
		for(k = 0;k < count0; k++){
			if (ddd(temp,t[k]))
				count++;
		}
	}

	printf("%d \n",count/2);

	return 0;
}
				



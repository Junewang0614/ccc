#include <stdio.h>

void aaa(const int a[],int b[],int n,int x)
{
	int i,j;
	for(i = 0;i < n;i++)
	{
		if (x >= a[i])
			b[i] = a[i];
		else{
			b[i] = x;
			j = i;
			break;}
	}

	for (j = i;j < n;j++)
		b[j+1] = a[j];
}

int main(){
	int n,m;
	int a[10000];int b[10001];
	int i;
	int temp;
	
	while (scanf("%d %d",&n,&m) != EOF){
		if (n == 0 && m ==0)
			break;

		for (i = 0;i < n;i++){
			scanf("%d",&a[i]);
		}

		aaa(a,b,n,m);
		temp = n;



		for (i = 0;i <= temp;i++){
			if (i == temp)
				printf("%d",b[i]);
			else
	 			printf("%d ",b[i]);
		}
	}
	return 0;
}


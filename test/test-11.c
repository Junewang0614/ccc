#include<stdio.h>

void soft(int a[],int n){
	int i,j;
	int temp;
	for (i = 0;i < n-1;i++){
		for (j = n-1;j > i;j--){
			if (a[j] > a[j-1]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}

int main(){

	int n,m;
	while (scanf("%d %d",&n,&m) != EOF)
	{
		if (n == 0 && m == 0)
			break;
		int a[100000];
		int i,j;

		for (i = 0;i < n;i++)
		{
			scanf("%d",&a[i]);
		}

		soft(a,n);

		for (j = 0;j < m;j++)
			printf("%d ",a[j]);
	
	}

	return 0;
}


	

	



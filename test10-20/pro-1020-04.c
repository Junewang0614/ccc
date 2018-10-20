#include <stdio.h>

void sort(int a[],int n)
{
	int i,j;
	int temp;

	for ( i = 0;i < n-1; i++){
		for (j = n - 1; j > i; j--){
			if (a[j-1] > a[j]){
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);

	int a[n];
	int i;

	for ( i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	sort(a,n);

	for ( i = 0; i < n; i++)
	{
		printf("%d " ,a[i]);
	}

	putchar ('\n');

	return 0;
}





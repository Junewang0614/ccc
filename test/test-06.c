#include <stdio.h>
int av(int x)
{
	if (x >= 0)
		return x;
	else
		return -x;
}
int main()
{
	int n;
	scanf("%d",&n);

	int a[n];
	int i,j;
	for (i = 0; i < n; i++)
		scanf("%d",&a[i]);

	int temp;

	for (i = 0;i <= n-1; i++){
		for (j = n-1;j > i;j--){
			if (av(a[j-1]) < av(a[j])){
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}

	for ( i = 0; i <= n-1; i++)
		printf("%d ",a[i]);
	putchar ('\n');

	return 0;
}
	





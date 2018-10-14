#include <stdio.h>
void rev_intary(int v[],int n){
	int i;
	int temp;
	for (i = 0; i < n/2; i++){
		temp = v[i];
		v[i] = v[n-1-i];
		v[n-1-i] = temp;
	}
}

int main()
{
	int N;
	printf("N="); scanf("%d",&N);

	int a[N];
	int i;

	for (i = 0; i < N; i++){
		printf("a[%d]=",i); scanf("%d",&a[i]);
	}

	rev_intary (a,N);

	for (i = 0; i < N; i++)
		printf("%d ",a[i]);

	putchar('\n');

	return 0;
}

#include <stdio.h>

void intary_rcpy (int v1[], const int  v2[], int n)
{
	int i;

	for (i = 0;i < n;i++)
		v1[i] = v2[n-1-i];
}
int main(void)
{
	int N;
	printf("N="); scanf("%d",&N);

	int a[N];
	int b[N];

	int i;
	for (i = 0; i < N; i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	intary_rcpy (b,a,N);

	for (i = 0; i < N; i++){
		printf("%d ",b[i]);
	}
	putchar('\n');

	return 0;
}



		
	

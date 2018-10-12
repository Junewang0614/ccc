#include <stdio.h>
int main(void){
	int n;
	int i;
	int v[n];

	printf("n:");scanf("%d",&n);

	for (i = 0;i < n; i++){
		printf("v[%d] = ",i);
		scanf("%d",&v[i]);
	}

	for (i = 0; i < n/2; i++) {
		int temp = v[i];
		v[i] = v[n-1-i];
		v[n-1-i] = temp;
	}

	for ( i = 0;i < n; i++)
		printf("%d ",v[i]);
	putchar('\n');


        return 0;
}


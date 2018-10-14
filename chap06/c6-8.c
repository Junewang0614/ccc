#include <stdio.h>

int min_of(const int v[], int n){
	int i;
	int min = v[0];
	for (i = 0; i < n; i++){
		if (v[i] < min)
			min = v[i];
	}
	return min;
}

int main(void){
	int N;
	int a[N];
	int i;
	int min;

	printf("N="); scanf("%d",&N);

	for (i = 0; i < N; i++){
		printf("a[%d]=",i); scanf("%d",&a[i]);
	}

	min = min_of(a,N);

	printf("min = %d.\n",min);

	return 0;
}




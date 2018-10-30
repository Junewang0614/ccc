#include <stdio.h>

void ccc(int n){
	int i,j;
	int t[n][n];
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			t[i][j] = 1;
		}
	}

	for(i = 0; i < n; i++){
		for (j = 0; j <= i; j++){
			if (i >= 2 ){
				if (j >= 1 && j <= i-1){
					t[i][j] = t[i-1][j-1] + t[i-1][j];
				}
				printf("%d ",t[i][j]);
			}

			else 
				printf("%d ",t[i][j]);
		}
		putchar('\n');

	}
}


int main()
{	int n;
	int a[100];
	int i = 0;
	int count;
	while (scanf("%d ",&n) != EOF){
		a[i] = n;
		i++;

	}
	count = i;

	for (i = 0; i < count; i++){
		ccc(a[i]);
		putchar('\n');
	}
	
	return 0;
}


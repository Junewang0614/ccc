#include <stdio.h>
int main(void){
	int n;
	int i,j;
	int v[n-1][n-1];


	do {
		printf("n:"); scanf("%d",&n);
	} while (n < 3);  /*n大于等于3*/

	/*输入部分空……不会输入一个正方形……*/

	/*输出第一个大方块*/

 	for ( i = 0; i < n; i++)
		printf("%d ",v[0][i]);
	for ( i = 0; i < n; i++){
		printf("%d ",v[i][0]);
		for ( j = 0; j < n-2; j++)
			printf("  ");
		printf("%d ",v[i][n-1]);
		putchar ('\n');
	}
 	for ( i = 0; i < n; i++)
		printf("%d ",v[n-1][i]);
	

		



        return 0;
}


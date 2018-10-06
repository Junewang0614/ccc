/*显示直角在右下方的等腰直角三角形*/
#include <stdio.h>
int main(void){
	int i,j,len;
	printf("len:");scanf("%d",&len);

	for (i=1;i<=len;i++){
		for (j=1;j<=len-i;j++)
			printf(" ");
		for (j=1;j<=i;j++)
			printf("*");
		putchar('\n');
	}
	



        return 0;
}

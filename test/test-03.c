#include <stdio.h>
int main(void){
	int i,j,x;
	puts("打印一个沙漏。");
	printf("x="); scanf("%d",&x);

	for ( i=1; i<=x; i++){
	      for ( j=1; j<=i-1; j++)
		       	printf (" ");
	      for ( j=1; j<=2*(x-i)+1; j++)
		      printf ("*");
	
	      putchar ('\n');
	}

	for ( i=1; i<=x-1; i++){
		for ( j=1; j<=x-1-i; j++)
			printf(" ");
		for ( j=1; j<=2*i+1; j++)
			printf("*");
		putchar ('\n');
	}


        return 0;
}


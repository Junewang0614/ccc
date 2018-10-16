#include <stdio.h>

int main(){

	static double a[5];

	for (int i = 0; i < 5; i++){
		printf("a[%d]=%.2f \n",i,a[i]);
	}
	return 0;
}
	
	

#include <stdio.h>
int main(void){
	int i;
	double v[7];

	for (i = 0; i < 7; i++)
		v[i] = 0.0;
	for (i = 0; i < 7; i++)
		printf("v[%d] = %.2f\n",i,v[i]);
	
	return 0;
}

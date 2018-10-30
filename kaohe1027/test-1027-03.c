#include <stdio.h>
int bbb(int x,int a){
	int i;int bb = 0;
	
	while (x > 0){
		int r;
		r  = x % 10;
		if (r == a){
			bb = 1;
			break;
			}

		else
		       x = x / 10;
		}

	return bb;
}
			
	

int main(){
	
	int n;scanf("%d",&n);

	int t[300] = {0};
	int i;
	int j = 0;
	int count;

	for (i = 1 ;i <= n;i++){
		if (i % 3 != 0 && bbb(i,3) == 0){
			if (i % 5 != 0 && bbb(i,5) == 0){
				t[j] = i;
				j++;
			}
		}

	}
	
	count = j;

	int sum = 0;
	for (i = 0;i <= count;i++)
		sum += t[i]*t[i];
	printf("%d \n",sum);

	return 0;
}



	





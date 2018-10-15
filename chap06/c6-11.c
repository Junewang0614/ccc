#include <stdio.h>
#define FALLED -1
int search_idx (int v[],int idx[],int n,int x){
	int i = 0;
	int j = 0;
	v[n] = x;

	while (i < n){
		if (v[i] == x){
		       idx[j] = i;
		       j++;
		}
		i++;
	}	
	
	return (j == 0)?FALLED:j;
}

int main(void){
	int n;
	printf("n="); scanf("%d",&n);

	int x;
	printf("x="); scanf("%d",&x);

	int a[n];
	int b[n];

	int i;int idx;
	
	for (i = 0; i < n; i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}

	idx = search_idx(a,b,n,x);

	if (idx == FALLED)
		puts("查找失败");
	else
		printf("%d \n",idx);

	return 0;
}










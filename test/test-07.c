#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	int a[n];
	int i;
	for (i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}

	int temp = 1;

	for (i = 0; i < n; i++){
		if (a[i] % 2 == 1)
			temp *= a[i];
	}

	printf("%d \n",temp);
	return 0;
}

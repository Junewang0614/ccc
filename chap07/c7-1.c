#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	printf("%d \n",sizeof 1);
	printf("%d \n",sizeof +1);
	printf("%d \n",sizeof -1);
	printf("%d \n",sizeof n+2);
	printf("%d \n",sizeof (n+1));

	printf("%.2f \n",sizeof (double)-1);/*???*/
	printf("%.2f \n",sizeof ((double)-1));
	printf("%.2f \n",sizeof ((double)n+2.0));

	printf("%u \n",sizeof(unsigned)-1);

	return 0;
}

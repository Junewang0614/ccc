#include<stdio.h>
/*拼音转化*/
void print(int n)
{
	switch (n){
                case 1 :printf("yi"); break;
                case 2 :printf("er");break;
                case 3 :printf("san");break;
                case 4 :printf("si");break;
                case 5 :printf("wu");break;
                case 6 :printf("liu");break;
                case 7 :printf("qi");break;
                case 8 :printf("ba");break;
                case 9 :printf("jiu");break;
        }
}
/*计算和*/
int sumer(int n)
{
	int sum = 0;
	for( ;n > 0; n /= 10){
		int r = n % 10;
		sum = r + sum;
	}
	return sum;
}
/*计算数字位数*/
int length(int n)
{
	int len = 1;
	int r = n/10;
	for( ;r > 0;r /= 10){
		len++;
	}
	return len;
}

int main()
{
	unsigned int n; scanf("%d",&n);
	int sum;
	sum = sumer(n);

	int t = 1;
	int i;
	int len = length(sum);
	for(i = 0;i < len - 1; i++)
		t *= 10;

	int r = 0;
	int a[len];
	for(i = 0; i < len;i++)
	{
		if(sum > 0)
		{
			a[i] = sum % 10;
			sum = sum / 10;
		}
	}

        for(i = 0; i < len/2; i++){
                int temp;
                temp = a[i];
                a[i] = a[len-1-i];
                a[len-1-i] = temp;
        }

	for (i = 0;i < len;i++)
	{
		if(i == len - 1){
			if (a[i] == 0)
				printf("ling");
			else
				print(a[i]);
			
		}

		else
		{
			if (a[i] == 0)
				printf("ling");

			print(a[i]);
			printf(" ");
		}
	}
	printf("\n");


	return 0;
}



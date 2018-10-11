#include <stdio.h>
int main(void){
	int i,j;
	int tensu[6][2];
	int sum1[2] = {0};
	int sum2[6] = {0};

	for (i = 0; i < 6; i++){
		for (j = 0; j < 2; j++){
			printf("tensu[%d][%d]:" , i,j);
			scanf("%d",&tensu[i][j]);
		}
	}

	
	for (i = 0; i < 6; i++){
		j = 0;
		sum1[0] += tensu[i][j];
	}

	
	for (i = 0; i < 6; i++){
		j = 1;
		sum1[1] += tensu[i][j];
	}

	
	for (i = 0; i < 6; i++){
		for (j = 0; j < 2; j++)
		sum2[i] += tensu[i][j];
	}



	printf("语文的总分是%d，平均分%.2f\n",sum1[0],(double)sum1[0]/6);
	printf("数学的总分是%d，平均分%.2f\n",sum1[1],(double)sum1[1]/6);

	for (i = 0; i < 6; i++){
		printf("第%d的同学的总分是%d,平均分是%.2f",
					i+1,sum2[i],(double)sum2[i]/2);
		putchar ('\n');
	}







	return 0;
}

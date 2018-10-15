#include <stdio.h>
void mat_add(const int m[2][4][3],int s[4][3]){
	int i,j;

	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			s[i][j] = m[0][i][j] + m[1][i][j];
		}
	}
}

void mat_printf (const int m[4][3])
{
	int i,j;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++)
			printf("%4d ",m[i][j]);
	}

}

int main()
{
	int a[2][4][3] = {{ {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} }, { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} }};
	int b[4][3];

	mat_add(a,b);

	mat_printf(b);

	putchar('\n');

	return 0;
}
	
	


	


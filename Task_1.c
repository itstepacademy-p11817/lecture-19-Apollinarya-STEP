#include<stdio.h>
#include<stdlib.h>

int main()
{
	int matrix[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sum_str = 0;
	int sum_colm = 0;
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			printf("%d   ", matrix[i][j]);
			sum += matrix[i][j];
		}
		sum_str += sum;
		printf("%d\n\n", sum);		
	}
	for (int i = 0; i < 3; i++)
	{
		int sum2 = 0;
		for (int j = 0; j < 3; j++)
		{
			sum2 += matrix[j][i];			
		}
		printf("%d  ", sum2);
		sum_colm += sum2;
	}
	printf("%d\n", sum_str + sum_colm);
	
	system("pause");
	return 0;
}
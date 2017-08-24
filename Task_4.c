#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void printing(int matrix[][5], int a)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < a; j++)
		{
			printf("%d  ", matrix[i][j]);
		}
		printf("\n\n");
	}
	printf("\n");
}

int main()
{
	srand(time(NULL));
	int matrix[5][10];
	int matrix_res[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
	         matrix[i][j] = rand() % 50 + 1;
			printf("%d  ", matrix[i][j]);
		}
		printf("\n\n");
	}
	printf("\n");
	//printing(matrix, 10);
	for (int i = 0; i < 5; i++)
	{
		int a = 0;
		for (int j = 0; j < 10; j = j+2)
		{
		    matrix_res[i][a] = matrix[i][j] + matrix[i][j+1];
			a++;
		}
	}
	printing(matrix_res, 5);


	system("pause");
	return 0;
}
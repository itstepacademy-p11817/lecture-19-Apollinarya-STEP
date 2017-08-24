#include<stdio.h>
#include<stdlib.h>
void printing(int matrix[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d   ", matrix[i][j]);
		}
		printf("\n\n");
	}
	printf("\n");
}

int main()
{
	int matrix[3][3];
	int matrix1[3][3] = { 3, 6, 2, 7, 8, 2, 3, 0, 1 };
	int matrix2[3][3] = { 4, 2, 7, 1, 6, 3, 9, 22, 5 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
	printing(matrix);
	printing(matrix1);
	printing(matrix2);


	system("pause");
	return 0;
}
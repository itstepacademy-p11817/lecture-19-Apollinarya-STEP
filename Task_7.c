#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void printing(int matrix[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
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
	int matrix[3][3];
	int matrix_res[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = rand() % 50 + 1;
		}		
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				if (i == 0)
				{
					matrix_res[i][j] = matrix[i][j];
				}
				else
				{
					matrix_res[i][j] = matrix_res[i - 1][2] + matrix[i][j];
				}
				
			}
			else
			{
				matrix_res[i][j] = matrix_res[i][j - 1] + matrix[i][j];
			}
		}
	}
	printing(matrix);
	printing(matrix_res);


	system("pause");
	return 0;
}
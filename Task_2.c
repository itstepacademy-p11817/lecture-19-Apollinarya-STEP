#include<stdio.h>
#include<stdlib.h>

int main()
{
	int matrix[3][3] = { 5, 7, 3, 8, 5, 6, 10, 4, 9, };
	int sum = 0;
	float average = 0.0;
	int min = matrix[3][3];
	int max = matrix[1][1];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", matrix[i][j]);
			sum += matrix[i][j];
			average++;
			if (min > matrix[i][j])
			{
				min = matrix[i][j];
			}
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
			}
        }
		printf("\n");
	}
	average = sum / average;
	printf("Sum = %d\nAverage = %.2f\nMax num = %d\nMin num = %d\n", sum, average, max, min);
	
	system("pause");
	return 0;
}
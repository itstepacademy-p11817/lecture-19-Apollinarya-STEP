#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<stdbool.h>

void sort(int row[], int size)
{
	for (int i1 = 0; i1 < size; i1++)
	{
		for (int i = 0; i < size-1; i++)
		{
			if (row[i] > row[i + 1])
			{
				int num = row[i];
				row[i] = row[i + 1];
				row[i + 1] = num;
			}
			//printf("%d  ", row[i]);
		}
		//printf("\n");
	}
}

int main()
{
	srand(time(NULL));
	int mass[100][100];
	int sizex = 1;
	int sizey = 1;
	printf("Enter size of matrix (x.y) ");
	scanf_s("%d.%d", &sizex, &sizey);
	for (int i = 0; i < sizex; i++)
	{
		for (int i1 = 0; i1 < sizey; i1++)
		{
			mass[i][i1] = rand() % 10 + 1;
			printf("%d ", mass[i][i1]);
		}
		printf("\n");
	}
	printf("\n\n");
	for (int i = 0; i < sizex; i++)
	{
		sort(mass[i], sizey);
	}
	for (int i = 0; i < sizex; i++)
	{
		for (int i1 = 0; i1 < sizey; i1++)
		{
			printf("%d ", mass[i][i1]);
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	return 0;
}
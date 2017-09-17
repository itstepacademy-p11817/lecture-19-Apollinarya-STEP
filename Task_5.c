# include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<time.h>

int turn_right(int arr[][100], int turn, int sizex, int sizey)
{
	turn = turn%sizey;
	printf("sdvig = %d\n", turn);
	for (int t = 0; t < turn; t++)
	{
		for (int i = 0; i < sizex; i++)
		{
			int num = arr[i][sizey-1];
			for (int j = sizey-1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = num;
		}
	}
}

int turn_left(int arr[][100], int turn, int sizex, int sizey)
{
	turn = turn%sizey;
	printf("sdvig = %d\n", turn);
	for (int t = 0; t < turn; t++)
	{
		for (int i = 0; i < sizex; i++)
		{
			int num = arr[i][0];
			for (int j = 0; j < sizey; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][sizey - 1] = num;
		}
	}
}

int turn_up(int arr[][100], int turn, int sizex, int sizey)
{
	turn = turn%sizex;
	printf("sdvig = %d\n", turn);
	for (int t = 0; t < turn; t++)
	{
		for (int i = 0; i < sizey; i++)
		{
			int num = arr[0][i];
			for (int j = 0; j < sizex; j++)
			{
				arr[j][i] = arr[j+1][i];
			}
			arr[sizex - 1][i] = num;
		}
	}
}

int turn_down(int arr[][100], int turn, int sizex, int sizey)
{
	turn = turn%sizex;
	printf("sdvig = %d\n", turn);
	for (int t = 0; t < turn; t++)
	{
		for (int i = 0; i < sizey; i++)
		{
			int num = arr[sizex - 1][i];
			for (int j = sizex - 1; j > 0; j--)
			{
				arr[j][i] = arr[j - 1][i];
			}
			arr[0][i] = num;
		}
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
	int dir = 1;
	while (dir != 0)
	{
		printf("Enter direction:\nPress 1 - left\nPress 2 - right\nPress 3 - up\nPress 4 - down\nPress zero to exit\n");
		scanf_s("%d", &dir);
		if (dir == 0)
		{
			break;
		}
		int sdvig = 0;
		printf("Enter amount of turn ");
		scanf_s("%d", &sdvig);
		if (dir == 1)
		{
			turn_left(mass, sdvig, sizex, sizey);
		}
		else if (dir == 2)
		{
			turn_right(mass, sdvig, sizex, sizey);
		}
		else if (dir == 3)
		{
			turn_up(mass, sdvig, sizex, sizey);
		}
		else if (dir == 4)
		{
			turn_down(mass, sdvig, sizex, sizey);
		}
		else
		{
			printf("Wrong enter, try again.\n\n");
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

	}
	system("pause");
	return 0;
}
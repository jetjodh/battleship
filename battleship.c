#include <stdio.h>
#include <curses.h>
#include <time.h>
#include <stdlib.h>
void main()
{
	int i,j,board[5][5],a[3][2],k=0,l=0;
	int X,Y,x,y,guesses;
	for(i=0;i<=5;i++)             //Initializing the board.
	{
		for(j=0;j<=5;j++)
		{
			printf("*");
			printf("\t");
			}
		printf("\n");
		}
	srand(time(NULL));           //Creating random coordinates of the ship.
	X=(rand()%(6))+1;
	Y=(rand()%(6))+1;
	for(guesses=1;guesses<4;guesses++)         //Getting 4 guesses from the User.
		{
			printf("\nEnter the X coordinate:");
		scanf("\n%d",&x);
		printf("\nEnter the Y coordinate:");
		scanf("\n%d",&y);
			a[k][0]=x-1;
			a[k][1]=y-1;
		if((x==X)&&(y==Y))
			{
				printf("You have hit the BattleShip \n");     //Ends the loop on corect guess.
			for(i=0;i<=5;i++)
			{
				for(j=0;j<=5;j++)
				{
					if(i==X-1 && j==Y-1)
					{
					printf("X");
					}
					else
					{
						printf("*");
					}
					printf("\t");
					}
				printf("\n");
            //break;
				}
			break;}
		else
			{
				printf("You have missed\n");
			for(i=0;i<=5;i++)
			{
				for(j=0;j<=5;j++)
				{
					int o=0;
					for(int f=0;f<=k;f++)
					{
					if(i==a[f][0] && j==a[f][1])
					{
					o=1;
					break;
				}
				}
					if(o==0)
					{
						printf("*");
					}
					else
					{
						printf("0");
					}

				printf("\t");
					}
				printf("\n");
				}
				k++;
			}

		 if( x>5 || y>5 )                              //Tells User that shot is out of the board.
			{
				printf("You have gone out of the board \n");
		}

  			}
}

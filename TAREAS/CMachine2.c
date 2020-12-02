#include <stdio.h>
#include <stdlib.h>
#include "CMACHINE.h"
#include <windows.h>


uint8 u8CocktailMachine ()
{	
	/*/Ingredients/*/
	uint8 u8Rum = Position1;
	uint8 u8Tequila = Position2;
	uint8 u8LimeJuice = Position3;
	uint8 u8CocaCola = Position4;
	
	int x=ON;
	uint8 u8Selection;
	uint8 u8Selection2;

	printf("\n\nWelcome to the Cocktail Machine 1.0\n");
	while (x=ON)
	{	
		printf("Please select your favorite Cocktail.\n");
		printf("1)Cuba\n2)Margarita\n3)Paloma\n\n");
		scanf("%d",&u8Selection);

		switch (u8Selection)
		{
			case 1:
			fill (u8Rum, u8CocaCola, u8Ice);
			printf("\n\nYour Cocktail Is Ready\n\n"); 
			break;

			case 2:
			fill (u8Tequila, u8LimeJuice, u8Ice);
			printf("\n\nYour Cocktail Is Ready\n\n"); 
			break;

			case 3:
			fill (u8Tequila, u8Grapefruitjuice, u8Ice);
			printf("\n\nYour Cocktail Is Ready\n\n"); 
			break;
		}

			printf("Would you like to prepare another Cocktail?\n\n1)Yes 2)No\n");
			scanf("%d",&u8Selection2);
			if (u8Selection2 == 2)
			{
				printf("\n\nThank You for using our program.\n");
				exit (-1);
			}
			else if (u8Selection2 == 1)
			{
					x=ON;
			}
			else
			{
				printf("Error; Choose a valid action.\n");
				exit (-1);
			}

	}

return 0;
}

void fill (uint8 u8FirstState, uint8 u8SecondState, uint8 u8ThirdState)
{	
	printf("Move %d -----> \n", u8FirstState);
	 u8SecondMove = u8SecondState - u8FirstState;
	Sleep(5000);
	printf("Move %d -----> \n", u8SecondMove);
	 u8ThirdMove = u8ThirdState - u8SecondState;
	Sleep(5000);
	printf("Move %d -----> \n", u8ThirdMove);
	Sleep(5000);
	printf("Move %d <----- (Return To Idle State)\n", u8ThirdState );
	Sleep(5000);
}

#include <stdio.h>
#include <unistd.h>

int main(){//beggining line

	int gameGoals[10];
	int gameAssists[10];
	int i;
	int BestGame=0;
	int gmMark=0;
	int ans;

	for(i=0;i<10;i++){
		printf("Enter how many goals did the Player scored in the #%d game: ", i+1);
		scanf(" %d", &gameGoals[i]);
		printf("Enter how many assist did the Player in the #%d game: ", i+1);
		scanf(" %d", &gameAssists[i]);
		printf("\n");
	}
	for (i=0;i<10;i++){
		if(gameGoals[i]>BestGame){
			BestGame=gameGoals[i];
			gmMark=i;

		}

	}

	printf("This is a program to see which game was the best game for the player...\n");
	printf("The best game was game #%d.\n", gmMark+1);
	printf("The goals in that game were %d.\n", gameGoals[gmMark]);
	printf("THe Assists in that game from the player were %d.\n", gameAssists[gmMark]);

	printf("The stored data are: \n");
	printf("Game Goals: ");
	for(i=0;i<10;i++){
		printf("%d ", gameGoals[i]);
	}
	printf("\nGame Assists: ");
	for(i=0;i<10;i++){
		printf(" %d", gameAssists[i]);
	}
	printf("\n");
	return 0;
}//end line

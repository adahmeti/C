/*THis program creates an array of 10 game scores for a basketball player.
The scores from the first six games are in the program and the scores from the last four are inputed 
by the user*/

#include <stdio.h>

int main(){
int gameScores[10]={12,5,21,15,32,10};
int totalPoints = 0;
int i;
float avg;

//ONly need scores for last 4 games so the loop will coover
//array elements 6-9
for (i=6;i<10;i++){
	//Add one to the array number as the user wont think
	//of the first game as game 0, but 1
	printf("What did the player score in game %d? \n", i+1 );
	scanf(" %d", &gameScores[i]);
}
//Now that you have all 20 scores, loop through the scores
//to get total points in order to calculate an average.

for (i=0;i<10;i++){
	totalPoints+=gameScores[i];	
}
//Use a floating-point variable dor the averagee as it is
//likely to be between two integers

avg=((float)totalPoints/10);

printf("\n\nThe Player's scoring average is %.1f.\n",avg );


return 0;

}//end line

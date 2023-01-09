#include <stdio.h>
#include <string.h>
int main(){

int numMovies, rating, leastRating, favRating;
char nameMovies[40], favorite[40], least[40];

favRating=0;
leastRating=10;

do{
printf("PLease enter the how many movies have you watch this month: ");
scanf(" %d", &numMovies);

if(numMovies<1){
printf("No movies! How you gonna rate them. Try again\n");
}
}
while(numMovies<1);
for(int i=0;i<numMovies;i++){
printf("What is the name of the movie: (one word-title only)\n");
scanf(" %s", nameMovies);
printf("On a size from 1 to 10 how much you ganna rate it:\n");
scanf(" %d", &rating);


if(rating>favRating){
strcpy(favorite, nameMovies);
favRating=rating;
}

if(rating<leastRating){
strcpy(least, nameMovies);
leastRating=rating;
}
}
printf("\nYour favorite move is %s.", favorite);
printf("\nYour least favorite movie is %s.\n\n",least);
return 0;


}


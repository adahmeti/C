 GNU nano 6.2                                   rating.c                                      M     
#include <stdio.h>
#include <string.h>
int main(){

int i, numMovie, rating, favRating, leastRating, g;
char nameMovie[40], favorite[40], least[40], name[40], surname[40],gender[3];

favRating=0;
leastRating=10;



printf("Hello\nThis is a program to see whats your favorite and least favorite movie");
printf("But first\n");
printf("Enter your name: ");
scanf(" %s", name);
printf("Enter your surname: ");
scanf(" %s", surname);

do{//start line for do
printf("What is your gender?(For male press 1. For female press 2) \n");
scanf(" %d", &g);
if(g==1){
strcpy(gender,"Mr");
}
if(g==2){
strcpy(gender,"Ms");
}

if(g>2){
printf("You entered wrong input please try again\n");
}
}//end line for do

while(g>2);


do{//start line for do
printf("\nHow many movies have you watched this month: ");
scanf(" %d", &numMovie);
if(numMovie<1){
printf("No movies! HOw will you rate them\nTry again...\n");
}
}//end line for do
while(numMovie<1);

for(i=0;i<numMovie;i++){
if(numMovie==1){
printf("Whats the name of the movie: (One-Word title only)\n");
scanf(" %s", nameMovie);
printf("How much are you going to rate it: ");
scanf(" %d", &rating );
}
if(numMovie>1){
printf("Whats the name of the movies? (One-Word titles only) ");
scanf(" %s", nameMovie);
printf("How much are you going to rate it: ");
scanf(" %d", &rating );
}
if(rating>favRating){
strcpy(favorite, nameMovie);
favRating=rating;

}

if(rating<leastRating){
strcpy(least, nameMovie);
leastRating=rating;
}
}
if(numMovie==1){
printf("For this month you only watchet one movie which is called %s and you rate it with %d.\n ", nameMovie, rating);
}//In case that user has seen only one movies he will get this message

if(numMovie>1){//In case that user has seen more than one movie it will show which movie he liked the most and which one the least
printf("%s %c %c\n", gender, name[0], surname[0]);//In this line the program will print Mr or Ms depends on the gender user choosed
printf("Your favorite movie is %s.\n", favorite);
}

return 0;
}//end line

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int main(){//beggining line
int dice1, dice2;
char name[30];
int total1, total2;
time_t t;
char ans;
char ans1;
//This line is used for not repeating the same number again and again nut iot givs different number
srand(time(&t));

printf("\nHello! Please enter your name: ");
scanf("%[^\n]s", name);
printf("\nHello %s lets play dice game.\n", name);
printf("====================================================================================================\n");
printf("= The rules are simple we will roll two dices and you gonna guess if the total of the second roll. =\n");
printf("= of two dices will be higher, lower, or same ans the first hald.                                  =\n\n");
printf("=\n= Sounds Good?                                                                                    =\n");
printf("= Lets go...                                                                                       =\n\n");
printf("====================================================================================================\n");
do{
dice1=(rand()%5)+1;
dice2=(rand()%5)+1;
total1=dice1+dice2;
printf("The first roll of dice was %d and %d, ", dice1, dice2);
printf(" and the total is %d.\n\n\n", total1);


do{

	printf("Do you think that the next roll will be (H)igher, (L)ower, or (S)ame?\n\n\n");
	printf("Enter H, L, or S to reflect your guess.\n\n\n");
	scanf(" %c", &ans);
	ans=toupper(ans);
	
}
while((ans!='H')&&(ans!='L')&&(ans!='S'));

dice1=(rand()%5)+1;
dice2=(rand()%5)+1;
total2=dice1+dice2;
printf("The second roll of dices is %d and %d, ",dice1, dice2 );
printf("the total is: %d \n\n", total2);

if(ans=='L'){
	if(total2<total1){
		printf("Good job you were right ");
		printf("%d is lower than %d.\n\n", total2, total1 );
	}
	else{
		printf("Sorry %d is not lower than %d\n\n", total2, total1 );
	}

}
else if(ans=='H'){
	if(total2>total1){
		printf("Good Job! You knew it %d is higher than %d. \n\n", total2, total1 );
	}
	else{
		printf("Oppsie! you were wrong %d is not higer than %d.\n\n", total2, total1 );
	}
}
else if(ans=='S'){
	if(total2==total1){

	printf("Good job %d is equal to %d.\n\n", total2, total1);

}
else{
	printf("Sorry %d is not the same as %d.\n\n",total2, total1);
}
}
printf("Do you want to play again? [Y/N]\n\n");
scanf(" %c", &ans1);
ans1=toupper(ans1);
}
while(ans1!='N');
printf("\t\t\t\tGame Over\n");
printf("=======================================================================================\n");
printf("Thanks for playing my game %s.\n", name );


return 0;

}//end line

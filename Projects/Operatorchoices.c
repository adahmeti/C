#include <stdio.h>
#include <stdlib.h>
int main(){

	int choice1;
	int choice2;

	//Potential decade cjoides
	printf("What do you want to see\n");
	printf("1. The 1980's\n");
	printf("2. The 1990's\n");
 	printf("3. The 2000's\n");
    printf("4. Quit\n");

    do{//begining line for do

    printf("Enter your choice: ");
    scanf(" %d", &choice1);
    switch (choice1){//begin line for switch
  	case (1):{
  		printf("What would you like to see?\n");
        printf("1. Basketball\n");
        printf("2. The Movies\n");
  		printf("3. US presidents\n");
  		printf("4. Quit\n");

  		printf("Enter your choice: \n");
  		scanf(" %d", &choice2);

  		if(choice2==1){

  			printf("\n\nWorld Series Champions of the 1980's\n");
  			printf("1980: Philadelphia Phillies\n");
  			printf("1981: Los Angelos Dodgers\n");
  			printf("1982: St. Louis Cardinals\n");
  			printf("1983: Baltimore Orioles\n");
  			printf("1984: Detroit Tigers\n");
  			printf("1985: Kansas City ROtals\n");
  			printf("1986: New York Mets\n");
  			printf("1987: Minnesota Twins\n");
  			printf("1988: Los Angelos Dodgers\n");
  			printf("1989: Oakland A's\n");
  			printf("\n\n\n");
  			break;
  		}
  		else if(choice2==2){
  			printf("\n\nOscar-Winning Movies in the 1980s:\n");
  			printf("1980: Ordinart People\n");
  			printf("1981: Chariots of Fire\n");
  			printf("1982: Gandhi\n");
  			printf("1983: Terms of Enderment\n");
  			printf("1984: Amadeus\n1985: Out of Africe\n1986: Platoon\n");	
  			printf("1987: The Last Emperor\n1988: Rain Man\n1989: Driving Miss Daisy\n\n\n");
  			break;
  		}//end line for else if
  		
  		else if(choice2==3){
  			printf("\n\nUS Presidents un the 1980's:\n");
  			printf("1980: Jimmy Carter\n");
  			printf("1981-1988: Ronald Reagan\n");
  			printf("1989: George Bush\n");
  			break;


  		}	


  	}//end line fot case
  	case (2):{
   		printf("\n\n\nWhat would you like to see?\n");
        printf("1. Basketball\n");
        printf("2. The Movies\n");
  		printf("3. US presidents\n");
  		printf("4. Quit\n");
  		scanf(" %d", &choice2);

  		if (choice2==1){
  			printf("\n\nWoorld Series Champions of th 1990's\n");
  			printf("1990: Cincinnati Reds\n");
  			printf("1991: Minneste Twins\n");
  			printf("1992: Toronto Blue Jays\n");
  			printf("1993: Toronto Blue Jays\n");
  			printf("1994: No World Series\n");
  			printf("1995: Atlanta Braves\n");
  			printf("1996: New York Yankees\n");
  			printf("1997: FLorida Marlins\n");
  			printf("1998: New York Yankees\n");
  			printf("1999: New York Yankees\n");
  			printf("\n\n");
  			break;
  		}
  		if(choice2==2){
  			printf("\n\nOskar-Winning Movies in the 1990's:\n");	
  			printf("1990: Dances with Wolves\n");
  			printf("1991: The Silence of the Lambs\n");
  			printf("1992: Unforgiven\n");
  			printf("1993: Schindler's List\n");
  			printf("1996: The English Patient\n");
  			printf("1997: TItanic\n");
  			printf("1998: Shakespare in LOVE\n");
  			printf("1999: American Beaty\n");
  			break;

  		}//end line of if
  		if(choice2==3){
  			printf("\n\nUS Presidents in the 90's:\n");
  			printf("1990-1992: Georfe Bush\n");
  			printf("1993-1999: Bill Clinton\n");
  			printf("\n\n\n");
  			break;
  		}
  		else if(choice2==4){
  			exit(1);
  		}
  		else{

  			printf("\nSorry, that is not a valid choice!\n");
  			break;
  		}
  	}
  	case (3):{
  		printf("What would you like to see?\n");
        printf("1. Basketball\n");
        printf("2. The Movies\n");
  		printf("3. US presidents\n");
  		printf("4. Quit\n");

  		printf("\nEnter ypur choice: \n");
  		scanf(" %d", &choice2);

  		if (choice2==1){
  			printf("World Series of Champions of the 2000's\n");
  			printf("2000: New YOurk Yankees\n");
  			printf("2001: Arizona Diamondbacks\n");
  			printf("2002: Anaheim ANgels\n");
  			printf("2003: Florida Marlins\n");
  			printf("2004: Boston Red Sox\n");
  			printf("2005: Chicago White Sox\n");
  			printf("2006: St. Louis Cardinas\n");
  			printf("2007: Bostin Red Sox\n");
  			printf("2008: Philadelphia Phillies\n");
  			printf("2009: New York Yankees\n\n\n");
  			break;		
  		}
  		else if(choice2==2){
  			printf("\n\nOscar-Winning Movies in the 2000s:\n");
  			printf("2000: Gladiator\n");
  			printf("2001: A Beatiful Mind\n");
  			printf("2002: Chicago\n");
  			printf("2003: The Lord of the Rings: The Return of the Kings\n");
  			printf("2004: Million Dollar Baby\n");
  			printf("2005: Crash\n");
  			printf("2006: The Departed\n");
  			printf("2007: No Country for Old Men\n");
  			printf("2008: Slumdog Millionaire\n");
  			printf("2009: The Hurt Locker\n");
  			printf("\n\n\n");
  			break;
  		}
  		else if (choice2==3){
  			printf("\nUS Presidents in the 2000s:\n");
  			printf("2000: Bill Clinton\n");
  			printf("2001-2008: George Bush\n");
  			printf("2009: Barack Obama\n");
  			printf("\n\n\n");
  			break;
  		}
  		else if(choice2==4){
  			{
  				exit(1);

  		    }
  			}
  			else{

  				printf("\nSorry that is not a valid choice!\n");
  				break;
  			}
  	}//end for the case 3
	
	case(4):{//beginning line for case 4

			exit(1);

	}//end line for case 4					

	default: printf("\n%d in not a valid choive.\n", choice1);
 	printf("Try again\n");
 	break;	
    }//end linve for switch

    }//end line for do
 	while (choice1<1||choice1>4);




	return 0;
}

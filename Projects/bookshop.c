/*This program gets the bookIngo structure by inckydiug bookInfo.h and asjs the user to fillm in three structures and then 
prints them*/

#include "bookinfo.c"
#include <stdio.h>


int main(){//beggining line

		int ctr;
			struct bookInfo books[3];//Array of three structure variables 

			//Get the information about each nook from the user

		for(ctr=0;ctr<3;ctr++){
			printf("What is the name of the book #%d? ", (ctr+1));
			scanf(" %[^\n]s", books[ctr].title);
			printf("Who is the author? ");
			scanf(" %[^\n]s", books[ctr].author);
			printf("How much did the book cost? ");
			scanf(" %f", &books[ctr].price);
			printf("How many pages in the book? ");
			scanf(" %d", &books[ctr].pages);
		}
		//Print a header line and then loop through and print the info
		printf("\n\nHere is the collection of books: \n");
		for (ctr=0;ctr<3;ctr++){
			printf("#%d: %s by %s", (ctr+1), books[ctr].title, books[ctr].author);
			printf("\nIt is %d pages and costs $%.2f", books[ctr].pages, books[ctr].price);
			printf("\n");
		}
		return 0;


}//end line

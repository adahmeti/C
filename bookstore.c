#include <stdio.h>
#include "bookinfo.c"
#include <stdlib.h>
FILE * fptr;



int main() {//beggining line

			int i;
			struct bookInfo books[3];

			for (i=0; i<3;i++){
			
			printf("What is the name of the book #%d? ",(i+1));
			scanf(" %[^\n]",books[i].title);

			printf("\nWho is the author of the book: ");
			 scanf(" %[^\n]", books[i].author);
			
			printf("\nHow many pages does the book has: ");
			scanf(" %d", &books[i].pages);
			
			printf("\nEnter the price of the book: $");
			scanf(" %f", &books[i].price);
			
			printf("\n");

			}
			fptr=fopen("Home\\Desktop\\C\\bookinfo.c","w");

			if (fptr == 0){
				printf("Error--file could not be opened.\n");
				exit(1);
			}	

			fprintf(fptr, "\n\nHere is the collection of books: \n" );
			for (i=0;i<3;i++){
				fprintf(fptr, "#%d: %s by %s", (i+1), books[i].title, books[i].author );
				fprintf(fptr, "\nIt is %d pages and cost $%.2f", books[i].pages, books[i].price );
				fprintf(fptr, "\n\n" );
			}
			fclose(fptr);




		return 0;

}//end line

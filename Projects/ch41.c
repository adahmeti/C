#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main(){

		char letter;
		int i;

		fptr = fopen("Home\\Desktop\\C\\letters.txt", "r+");

		if (fptr == 0){
			printf("There was an error whilemopening the file.\n");
			exit(1);
		}
		printf("Which # letter would you like to change (1-26)? ");
		scanf(" %d", &i);

		//Seeks that position from the beginning of the position because array starts at o;
		//Write an * over the letter in that position

		fputc('*', fptr);

		//Now jump back to the beginning of the arrray and print it out

		fseek(fptr, 0, SEEK_SET);
		printf("Here is the file now:\n");
		for (i=0;i<26;i++){
			letter = fgetc(fptr);
			printf("The next letter is %c.\n", letter );

		}
		fclose (fptr);



		return 0;
}// end line

/*The program opens a file named letters.txt and prints A thorugh Z into the file
It then loops backward through the file printing each of the letters from X to A. */
#include <stdio.h>
#include <stdlib.h>
FILE *ftpr;

int main(){// Beggining line

		char letter;
		int i;
		ftpr= fopen("Home\\Desktop\\C\\letters.txt","w+");
		if (ftpr ==0){
			printf("There was an error while opening the file.\n");
			exit (1);
		}
		for( letter ='A'; letter <='Z';letter++){
			fputc(letter,ftpr);
		}
		puts("Just wrote the letters A THROUGH z");
		//nOW READ THE FILE BACKWARDS

		fseek(ftpr, -1,SEEK_END);// Minus 1 byte from the end
		printf("Here is the file backward:\n");
		for(i=26; i>0;i--){
			letter=fgetc(ftpr);
			//Reads a letter, then vacks up 2
			fseek(ftpr, -2, SEEK_CUR);
			printf("The next letter is %c.\n", letter );
		}	
		fclose(ftpr);//Again, alwats close your diles

		return (0);





}//End line

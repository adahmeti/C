/*This program demonstrates passing a variable ti a functuin by value*/
#include <stdio.h>

int main(){//beggining line

		int i;
		printf("Please enter an integer... ");
		scanf(" %d", &i);

		//Now call the half dunction passing the value of i

		half(i);

		//Shows that the function did not alter i's value 

		printf("In main(), i is still %d.\n", i );

		return (0);//Ends the program

}//end line
//*******************************************************************************
/*Sometimes putting dividers like the one above is a buce break between your different functions*/

half(int i){
	i=i/2;
	printf("Your value halved is %d.\n", i);
	return ;//Returns to main
}
	 

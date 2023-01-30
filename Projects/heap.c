/*Example of C programming using malloc() and free() funciton for memory allocation.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){//begginiing line

	int i, aSize;
	int * randomNums;

	time_t t;

	double total = 0;
	int biggest, smallest;
	float average;

	srand(time(&t));

	printf("How many random numbers do you want in your array? ");
	scanf(" %d", &aSize);

	//Allovate an arrat of integers equal to the number of elements requested by the user

	randomNums = (int *) malloc(aSize*sizeof(int));

	if(!randomNums){
		printf("Random arrat allocation failed!\n\n");
		exit(1);
	}
	/*Loops throght the array and assigns a random number between 1 and 500 to each element*/

	for (i=0; i<aSize;i++){
		randomNums[i]=(rand()%500)+1;
	}
	biggest=0;
	smallest=500;

	//LLoop through the now-filled array testing for the random nu,ners that are biggest, smallest, and adding all numbers 
	//together to calculate an average

	for (i=0;i<aSize;i++){
		total +=randomNums[i];
		if(randomNums[i]>biggest){
			biggest = randomNums[i];
		}
		if(randomNums[i]<smallest){
			smallest=randomNums[i];
		}
	}
	average= ((float)total)/((float)aSize);
	printf("The biggest random number is %d.\n", biggest);
	printf("The smallest random number is %d.\n", smallest);
	printf("The average of the random numbers is %.2f.\n", average);
	//When you use malloc, remember to then use free
	free(randomNums);

	return (0);

}//end line

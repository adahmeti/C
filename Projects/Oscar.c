#include <stdio.h>
#include <ctype.h>

int main(){//beggining line


	char *movies[9]={"The Batman","Spider-Man:Multiverse"
	,"Dr. Strange: Into Multiverse Madness", "Puss in Boots","Kim",
	"Stranger Things","Top Gun: Maverick","Black Adam","Avatar: The way of water"};
	int movierate[9];

	char *tempmovie;
	
	int inner, outer, didSwap, i,temprating;
	int ctr=0;
	char ans;

	printf("\n\n*** Welcom to the Oscar best picture nominies ***\n\n");
	printf("Time to rate best picture nominies:\n");
	for(i=0;i<9;i++){

		printf("Have you seen: %s [Y/N]\n",movies[i]);	
		scanf(" %c", &ans);

		if((toupper(ans))=='Y'){
			printf("Input how much are you gonna rate it: ");
			scanf("%d", &movierate[i]);
			ctr++;
			continue;
		}
		else{
			movierate[i]=-1;
		}
	}

	for(outer=0;outer<8;outer++){

		didSwap=0;
		for(inner=outer;inner<9;inner++){

			if(movierate[inner]>movierate[outer]){

				tempmovie=movies[inner];
				temprating=movierate[inner];

				movies[inner]=movies[outer];
				movierate[inner]=movierate[outer];

				movies[outer]=tempmovie;
				movierate[outer]=temprating;
				didSwap=1;
			}
		}
		if(didSwap==0){
			break;
		}
	}

	printf("\n\n*** It is time to see the nominies rating: \n\n");

	for(i=0;i<ctr;i++){

		printf("%s is rated %d.\n", movies[i], movierate[i] );

	}





	return (0);
}//end line

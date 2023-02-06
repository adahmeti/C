/*This code will show which temam will play agains each other 
without playing twice*/


#include  <stdio.h>

int main(){//beggining line

	int i,j,tnum;
	printf("Enter how many teams are going to play: \n");
	scanf(" %d", &tnum);

	for (i=1;i<=tnum;i++){
		for(j=i+1;j<=tnum;j++){
			printf("Team %d vs Team %d.\n", i,j);
		}

	}





		return 0;


}// end line

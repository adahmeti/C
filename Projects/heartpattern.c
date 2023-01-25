#include <stdio.h>

int main(){

	int row, col,i,j;

	col=5;
	row=6;
	for(i=0;i<=col;i++){

		for(j=0;j<=row;j++){

			if(i==0&&j%3!=0){
				printf("*");
			}
			else if(i==1&&j%3==0){
				printf("*");
			}
			else if(i-j==2){
				printf("*");
			}
			else if(i+j==8){
				printf("*");
			}
			else{
				printf(" ");
			}

		}
	printf("\n");
	}





	return 0;

}//endl ine

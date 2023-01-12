#include <stdio.h>

int main(){//beggining line

	int i;
	char msg[25];

	printf("Enter any word which you want to reverse\n");

	for(i=0;i<25;i++){
		msg[i]=getchar();
		if(msg[i]=='\n'){

		i--;
		break;	
		}
	}
		putchar('\n');

		for (; i >=0; i--){

			putchar(msg[i]);
			
		}
		putchar('\n');


	
	return 0;

}//end line

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){//beggining line

	int i;
	int hasUpper, hasLower, hasDigit;
	char user[25], password[25];

	hasUpper = hasLower=hasDigit=0;

   	printf("What is your username? \n");
	scanf(" %s", user);

	printf("Please create a password: \n");
	scanf(" %s", password);

	for (i=0; i<strlen(password); i++){
		if(isdigit(password[i])){
			hasDigit=1;
			continue;
		}
		if(isupper(password[i])){
			hasUpper=1;
			continue;
		}
		if(islower(password[i])){
			hasLower=1;
		}

	}

	if((hasDigit)&&(hasUpper)&&(hasLower)){

		printf("\n\nExcelent work, %s, \n", user );
		printf("Your password has uppper and lowercase letters and a number\n");
	}
	else{

		printf("\nYou should consider a new password, %s,", user);
		printf("\nOne that uses upper and lowercase letters nad a number\n\n");
	}

	


return (0);

}//end line 

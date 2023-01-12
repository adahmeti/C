#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int i;
	i=7;
	int hasUpper, hasLower, hasDigit;
	char username[25], password[25];

	printf("Enter your username: \n");
	scanf(" %s", username);//user inputs his username

	printf("Create a password: \n");
	scanf(" %s", password);//User inputs the password

	/*In this for loop it check if the password contains Upperletter lower letter and numbers
	if in this case the passord contains what is needed the program will accept the password otherwise 
	it will show a message to the user that their password shouild be changed 
	and it has to cantain at least one Uppercase and a number also it has to be more than 8 digit
	*/

	for (int i = 0; i < strlen(password); ++i)
	{

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

		if ((hasDigit)&&(hasLower)&&(hasUpper)){
			if(strlen(password)>i){//checks if the password is bigger than i in this case i is 7
				//another way would be if the i would be 8 and it has to be written bigger or equal to i

			printf("Your password is accepted\n");
		}
		}
	else {
		printf("Your password should contain Upper letter, number and at least 8 characters.\n");
		//in case the password doesnt cointan the right credentials the user will see this message
	}
	
return 0;

}

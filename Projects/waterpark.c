#include <stdio.h>
#include <ctype.h>
int main(){

	int Kids;
	int *pKids;
	float Price;
	float *pPrice;
	char Code;
	char *pCode;

	Price=17.50;
	pPrice=&Price;


printf("Lets try first with variables:\n");

printf("How many kids are you taking to the water park? ");
	scanf(" %d", &Kids);
	pKids=&Kids;
	printf("Do you have a discount ticket for the park?\n");
	printf("Enter E for Employee Discount, S for sav-More Discount, or N fot No Discount: ");
	scanf(" %c", &Code );
	pCode=&Code;
	Code=toupper(Code);

	printf("You have got %d kids.\n", Kids);

	switch(Code){
		case('E'):
		printf("The Employee discount ticket saves you 20%% on the $%.2f price\n", Price );
		printf("The total price would be: %.2f.\n",(Price*Kids));
		printf("The total price wiht discount is: $%.2f.\n\n", (Price*.80*Kids));
		break;
		case('S'):
		printf("The Save-More Doscount saves you 15%% from the price %.2f.\n", Price);
		printf("The total price would be: %.2f.\n",(Price*Kids));
		printf("Total price with discountis: $%.2f\n\n", (Price*.85*Kids));
		break;
		default:
		printf("You have no Discount cupon.\n");
		printf("Total Price: $%.2f.\n\n\n", (Price*Kids) );
		break;
	}

	printf("Now lets try by using Pointers:\n");

	printf("YOu have got %d Kids.\n", *pKids);
	
	printf("Do you have a discount ticket for the park?\n\n\n");
	printf("Enter E for Employee Discount, S for sav-More Discount, or N fot No Discount: ");
	scanf(" %c", &*pCode );
	*pCode=toupper(*pCode);

	printf("You have got %d kids.\n", *pKids);

	switch(*pCode){
		case('E'):
		printf("The Employee discount ticket saves you 20%% on the $%.2f price\n", *pPrice );
		printf("The total: $%.2f.", (*pPrice*.80**pKids));
		break;
		case('S'):
		printf("The Save-More Doscount saves you 15%% from the price %.2f.\n", *pPrice);
		printf("Total price is: $%2.f\n", (*pPrice*.85**pKids));
		break;
		default:
		printf("You have no Discount cupon.\n");
		printf("Total Price: $%.2f.\n", (*pPrice**pKids) );
		break;
	}








	return 0;


}//end line

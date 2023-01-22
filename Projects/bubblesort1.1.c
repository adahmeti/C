#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
	int temp=0;
	int Switch, i, inner, outer;
	int N;
	char ans, ans1;
	char name[30];
	printf("What is your name: ");
	scanf("%[^\n]s", name);

	do{
	printf("Enter how many values do you want to enter: ");
	scanf(" %d", &N);
	int nums[N];

	printf("Enter %d number you want: \n", N);

	for(i=0;i<N;i++){
		printf("Enter the value of the #%d number: ", i+1);
		scanf(" %d", &nums[i]);

	}
	printf("\n\nThe inputed values are: \n");
	for(i=0;i<N;i++){
		printf("%d\n", nums[i]);
	}
	do{
	printf("Do you want to sort the values by increasing or decreasing? \n");
	printf("Enter (I) for increasing and (D) for decreasing.\n");
	scanf(" %c", &ans);
	ans=toupper(ans);

	if(ans=='I'){
	for(outer=0;outer<N;outer++){
		Switch=0;//Turns one when is positive+
		for(inner=outer;inner<N;inner++){
				if(nums[inner]<nums[outer]){
					temp=nums[inner];
					nums[inner]=nums[outer];
					nums[outer]=temp;
				}

		}
		if(Switch=0){
			break;
		}

	}

printf("\nThe sorted values are: \n");
for(i=0;i<N;i++){
	printf("%d\n", nums[i] );
}
}
else if(ans=='D'){
	for(outer=0;outer<N;outer++){
		Switch=0;//Turns one when is positive+
		for(inner=outer;inner<N;inner++){
				if(nums[inner]>	nums[outer]){
					temp=nums[inner];
					nums[inner]=nums[outer];
					nums[outer]=temp;
				}

		}
		if(Switch=0){
			break;
		}

	}

printf("\nThe sorted values are: \n");
for(i=0;i<N;i++){
	printf("%d\n", nums[i] );
}

}
else{
	printf("Wrong input try again!\n");
}
}
while((ans!='I')&&(ans!='D'));

printf("Do you want to start the program again from the beggining? [Y/N]\n");
scanf(" %c", &ans1);
ans1=toupper(ans1);
}
while(ans1!='N');

printf("\t\t\t\tProgram ended\n");
sleep(1);
printf("==========================================================================================\n");
printf("Thanks for playing my game %s....\n", name);



	return 0;

}//end line

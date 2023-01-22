#include <stdio.h>

int main(){

	int i,inner,outer,Swap,temp;
	int N;
	temp=0;

	printf("This is a program which sort the unsorted numbers \n");
	printf("Input how many numbers do you want to enter: \n");
	scanf(" %d", &N);
	int nums[N];
	printf("Enter %d numbers you want: \n\n", N);

	for(i=0;i<N;i++){
		printf("Enter the #%d number: ", i+1);
		scanf(" %d", &nums[i]);
	}
	printf("The entered numbers are: \n");
	for(i=0;i<N;i++){
		printf("%d\n", nums[i]);
	}
	
	for(outer=0;outer<N-1;outer++){
		Swap=0;
		for(inner=outer;inner<N;inner++){
			if(nums[inner] < nums[outer]){
				temp=nums[inner];
				nums[inner]=nums[outer];
				nums[outer]=temp;
				Swap=1;
			}

		}
		if(Swap==0){
			break;
		}
	}

	printf("The sorted numbers are: \n");
	for(i=0;i<N;i++){
		printf("%d\n", nums[i]);
	}

	return 0;
}//endline

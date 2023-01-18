#include <stdio.h>
	
	 int main(){//beggining line

	 	int ctr;//Loop counter
	 	int idSearch;//Xustomer to look for(the key)
	 	int found =0;//1 (true) if customer is found
	 	/* Defines the 10 element 9 true) if lists in each of the parallel arrays*/
	 	int custID[10]={313,453,502,101,892,475,790,912,343,633};
	 	float custBal[10]={0.00,45.43,71.23,301.56,9.08,192.41,389.00,229.67,18.31,59.54};
	 	int tempID, inner, outer, didSwap, i; //floatore sorting
	 	float tempBal;
	 	//First, sort the arrays by customer ID
	 	for(outer=0; outer<9;outer++){
	 		didSwap=0;//Becomes 1(true) if the list is not yet ordered
	 		for (inner=outer; inner<10;inner++){
	 			if (custID[inner]<custID[outer]){
	 				tempID=custID[inner];//Must switch both arrays
	 				tempBal=custBal[inner];//or they are no linger linked
	 				custID[inner]= custID[outer];
	 				custBal[inner]=custBal[outer];
	 				didSwap=1;//True because a swap took place


	 			}
	 		}
	 		if(didSwap==0){
	 			break;
	 		}
	 	}
	 	/*Interact with the user looking to find a balance*/
	 	printf("\n\n***Customer balance Lookup ***\n");
	 	printf("What is the customer number? \n");
	 	scanf(" %d", &idSearch);

	 	//Now, look for the ID in the array
	 	for( ctr=0; ctr<10;ctr++){
	 		if(idSearch==custID[ctr]){//DO they match?
	 			found =1; //Yes, match glag is set toTRUE
	 			break;
	 	}
	 	if (custID[ctr]>idSearch)//No need to keep Searching
	 	{
	 		break;
	 	}
	    }
	    /*Once the loop has completed, the ID was either dound (found=1) or not*/
	    if (found){
	    	if(custBal[ctr]>100){
	    		printf("\n** That customer's balance is $%.2f.\n", custBal[ctr] );
	    		printf("No additional credit.\n");
	    	}
	    	else{//Balance is less than $100.00
	     		printf("The customer credit is good!\n" );
	    	}

	    }
	    else{//The ID was not found
	    	printf("** You have enetered and incorrect customer ID.\n");
	    	printf("\n ID %3d was not found in the list.\n", idSearch);
	    }
	 return 0;
 }//end line

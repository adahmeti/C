#include <stdio.h>
int main(){
	 
    int n,h,t,u, found;
    
    printf("Please eneter three digit value: \n");
    do{
    scanf("%d", &n);
    
    	if((n>=100)&&(n<=999)){
    		found=1;
    		
    	
	u=n%10;
	h=(n/100)%10;
	t=(n/10)%10;
	

	printf("\nThe numbers you entered are: Hundreds=%d00, Tens=%d0, Units=%d. \n", h, t, u); 
}
else{
	printf("Please try again (Input three digits numbers only):\n");
}
}
	while(!found);

	return 0;


}//end main

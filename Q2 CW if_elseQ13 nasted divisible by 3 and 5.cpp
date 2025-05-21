#include<stdio.h>
int main(){
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	if(n%3==0){
		if(n%5==0){
			printf("n is divisible by 3 and  5");
	  }
	  else{
	  	printf("n is not a divisible by 3 and 5");
	  }
}

	return 0;

}

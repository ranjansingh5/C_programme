#include<stdio.h>
int main(){
	int base,exponent,result=1;
	printf("enter base:");
	scanf("%d",&base);
	printf("enter exponent:");
	scanf("%d",&exponent);
	int tempexponent = exponent;
	while(tempexponent>0){
		result *= base;
		tempexponent--;
		
	}
	printf("%d^%d is %d\n",base,exponent,result);
	return 0;
}


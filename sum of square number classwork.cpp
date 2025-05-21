#include<stdio.h>
int main(){
	int n, a=0,b=0;
	printf("Enter a 3 digit number :");
	scanf("%d",&n);
	while(n!=0){
	a=n%10;
	n=n/10;
	b=b+a*a;
	}
	printf("The sum of a square number is %d",b);
	return 0;
}

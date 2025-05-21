#include<stdio.h>
int main(){
	float p,t,r,si;
	printf("Enter principal :");
	scanf("%f",&p);
	printf("Enter rate");
	scanf("%f",&r);
	printf("Enter time");
	scanf("%f",&t);
	si = (p*r*t)/100;
	printf("The simpleinterest is %f",si);
	return 0;
}

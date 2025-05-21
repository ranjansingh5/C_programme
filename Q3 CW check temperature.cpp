#include<stdio.h>
int main(){
	int temperature;
	printf("Enter a temperature:");
	scanf("%d",&temperature);
	if(temperature<20){
		printf("cold");
	}
	else if(temperature>=20 && temperature<30){
		printf("warm");
	}
	else{
		printf("hot");
	}
		return 0;
}

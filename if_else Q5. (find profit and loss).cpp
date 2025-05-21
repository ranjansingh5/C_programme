#include<stdio.h>
int main(){
	int cp;
	printf("Enter cost price : ");
	scanf("%d",&cp);
	int sp;
	printf("Enter selling price : ");
	scanf("%d",&sp);
	if(sp>cp){
		printf("proft");
	}
	if(cp>sp){
		printf("loss");
	}
	if(sp==cp){
		printf("No proft, no loss");
	}
	return 0;
}

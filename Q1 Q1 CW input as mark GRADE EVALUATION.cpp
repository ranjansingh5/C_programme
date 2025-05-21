#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks :");
	scanf("%d",&marks);
	if(marks>=85){
		printf("A");
	}
	else if(marks>=70){
		printf("B");
	}
	else if(marks>=50){
		printf("C");
	}
	else{
		printf("F");
	}
	return 0;
}

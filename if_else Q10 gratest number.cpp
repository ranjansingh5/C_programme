#include<stdio.h>
int main(){
	 int a;
	  int b;
	   int c;
	   int d;
	printf("enter a 1st number :");
	scanf("%d",&a);
	printf("enter a 2nd number :");
	scanf("%d",&b);
	printf("enter a 3rd number :");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("a is the gratest");
	}
	if(b>a && b>c){
		printf("b is the gratest");
	}
	if(c>a && c>b){
		printf("c is the gratest");
	}

	return 0;
	
}

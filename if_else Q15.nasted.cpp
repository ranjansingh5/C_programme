#include<stdio.h>
int main(){
	int a, b, c;
	printf("enter a 1st number :");
	scanf("%d",&a);
	printf("enter a 2nd number :");
	scanf("%d",&b);
	printf("enter a 3rd number :");
	scanf("%d",&c);
	if(a>b){
		if(a>c)
		printf("%D is the gratest", a);
		else
		printf("%d is the gratest", c);
}
	else{
		if(b>c)
		printf("%d is the gratest", b);
		else
		printf("%d is the gratest", c);
	}
	return 0;
	
}

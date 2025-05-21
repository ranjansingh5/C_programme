#include<stdio.h>
int main(){
	int a, b, c;
	printf("enter a 1st side :");
	printf("enter a 2nd side :");
	printf("enter a 3rd side :");
	scanf("%d %d %d",&a,&b,&c);
	if((a+b)>c && (b+c)>a && (c+a)>b){
		printf("valid triangle");
	}
	else{
		printf("invalid triangle");
	}
	return 0;
}

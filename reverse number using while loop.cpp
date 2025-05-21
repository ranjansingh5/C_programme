#include<stdio.h>
int main(){
	int n,a,b=0;
	printf("enter a integer:");
	scanf("%d",&n);
	while(n>0){
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	printf("the reverse number is %d",b);
	return 0;
}

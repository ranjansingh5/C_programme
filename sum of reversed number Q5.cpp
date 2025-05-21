#include<stdio.h>
int main(){
	int n,r,sum;
	printf("Enter a number :");
	scanf("%d",&n);
	int a = n;
	while(n!=0){
		r = r*10+(n%10);
		n = n/10;
	}
	
	printf("the reverse number %d\n",r);
	sum = a+r;
	printf("sum of the number %d\n",sum);
	
	return 0;
}

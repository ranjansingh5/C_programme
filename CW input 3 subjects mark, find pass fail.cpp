#include<stdio.h>
int main(){
	int num1, num2, num3, total=0;
	printf("Enter mark of 3 subjects :");
	scanf("%d %d %d", &num1,&num2,&num3);
	total=num1+num2+num3;
	if((num1>=50 && num2>=50 && num3>=50) && (total/3)==70){
		printf("pass");
	}
	else{
		printf("fail");
	}
	return 0;
}

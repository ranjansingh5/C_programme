#include<stdio.h>
int main(){
	double x1,y1,x2,y2,x3,y3;
	printf("enter x1\n, y1\n, x2\n, y2\n, x3\n, y3\n");
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	double m1 = (y2-y1)/(x2-x1);
	double m2 = (y3-y2)/(x3-x2);
	if(m1==m2){
		printf("three point is a straight line");
	}
	else{
		printf("three point is not a straight line");
	}
	return 0;
	
}

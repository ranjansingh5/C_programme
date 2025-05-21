#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the coordinates :");
	scanf("%d %d",&x,&y);
	if(x==0 && y==0){
		printf("the point is origin");
	}
	else if(x==0){
		printf("point lies on y-axis");
	}
	else if (y==0){
		printf("point lies on x-axis");
	}
	else{
		printf("the point doesnot lie on x and y axis");
	}
	return 0;
}

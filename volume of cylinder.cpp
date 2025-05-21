#include<stdio.h>
int main(){
	float r, h;
	printf("Enter the Radius");
	scanf("%f\n",&r);
	printf("Enter the height");
	scanf("%f\n",&h);
    float v = 3.14 * r * r * h;
	printf("volume of cylinder :%f",v);
	return 0;
}

#include<stdio.h>
int main(){
    int n;
    int a, b=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        a = n%10;
        b = (b*10)+a;
        n = n/10;
    }
    printf("The reversed number is %d",b);
    return 0;
}


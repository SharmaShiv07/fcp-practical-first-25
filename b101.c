//Program code : Without using third variable
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("New value of a is %d and b is %d",a,b);
    return 0;
}
//basic programe 10
//Program code :  using third variable
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("After swapping ,New value of a is:%d\n",a);
    printf("After swapping ,New value of b is:%d",b);
    return 0;
}

//Objective: String Handling using Library Functions:
//(a) Palindrome Check for a String: Write a program to check if a string is a palindrome or not.
//(b) String Length Calculation Using Functions: Write a program to calculate the length of a 
//string using a library functions / predefined operators.
//(c) String Concatenation: Write a program to concatenate two strings using library functions.
//Program code:
//#Program to check palindrome or not
#include<stdio.h>
int main()
{
char string[40];
int length=0, flag=1,i;
printf("Enter string:\n");
gets(string);
for(i=0;string[i]!='\0';i++)
{
length++;
}
for(i=0;i< length/2;i++)
{
if( string[i] != string[length-1-i] )
{
flag=0;
break;
}
}
if(flag==1)
{
printf("PALINDROME");
}
else
{
printf("NOT PALINDROME");
}
return 0;
}
//#Program to calculate length of string using library function
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int len;
printf("\nEnter the String : ");
scanf("%s",str);
/*
strlen() is the pre-defined function
to find the length of a string
*/
len = strlen(str);
printf("\nLength of the given string is %d", len);
return(0);
}
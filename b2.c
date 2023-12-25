// basic programe 2
#include <stdio.h> 
int main(){     
    float C; 
    printf("Enter the temperature in celsius : ");     
    scanf("%f",&C);    
     float F; 
    printf("Enter the temperature in fahrenheit : ");    
     scanf("%f",&F);   
       float tem = F;   
         F =  (9*C)/5 + 32; 
    printf("Temperature in fahrenheit is %f\n",F);    
     C = (5*(tem-32))/9; 
    printf("Temperature in celsius is %f",C);    
     return 0; 
}
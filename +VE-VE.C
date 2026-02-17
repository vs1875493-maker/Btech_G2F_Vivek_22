//Q- WAP to check id a number is +ve and -ve
#include <stdio.h>
int main(){
    int num;
    printf("Enter The number:");
    scanf("%d", &num);
    if(num>0){
        printf("Number is positive");
    }
    else if (num<0){
        printf("Number is negative");
    }
    else if(num == 0){
        printf("Number is Zero");
    }
    else{
        printf("This number is not postive or negative");
    }
        
    







    return 0;
}
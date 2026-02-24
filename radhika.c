#include <stdio.h>

int main(){
    int age;
    printf("Enter The Age:");
    scanf("%d",&age);

    if(age>0 && age <=12){
    printf("child\n");
    
    }
    else if(age>=13 && age <18)
    printf("teen\n");
    else{
        printf("adult\n");
    }
    printf("Thank you");





    return 0;
}
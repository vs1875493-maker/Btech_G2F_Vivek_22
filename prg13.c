#include <stdio.h>

int main(){
    int age;
    printf("Enter The Age:");
    scanf("%d",&age);

    if(age>18){
    printf("adult\n");
    printf("they can vote\n");
    printf("they can drive\n");
    }
    else{
        printf("not adult\n");
    }
    printf("but always you welcome");





    return 0;
}
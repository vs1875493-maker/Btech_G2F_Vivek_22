//Q-Write a program to check if a student pass or fail?
#include <stdio.h>
int main(){
    int marks ;
    printf("Enter The Number(0-100)");
    scanf("%d",& marks);

    if(marks>=0 &&marks <= 30){
        printf("Fail\n");
        printf("Better Luck Next Time\n");
    }
    else if(marks> 30 && marks<=100){
        printf("Pass\n");
        printf("Congrutulations\n");
    }
    else{
        printf("Wrong Marks\n");
        printf("aukat mai reh le ladle\n");
    }









    return 0 ;
}
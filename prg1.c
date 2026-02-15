#include <stdio.h>
int main()
{
    int a, b,c;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("enter c:");
    scanf("%d",&c);

    int multiply = a*b*c;
    printf("multiply is %d",multiply);
    return 0;
}
//Q- WAP to check if a char is vowel or consnant
#include <stdio.h>
int main(){
    char ch;
    printf("Enter The Character-:");
    scanf("%c",&ch);
    if((ch >='a' && ch<= 'z') || (ch >='A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("'%c' is a Vowel.\n", ch);
                } else {
                    printf("'%c' is a Consonant.\n", ch);
        }
                } else {
        printf("'%c' is not an alphabet character please try again later.\n", ch);
    }




    


 return 0;
}

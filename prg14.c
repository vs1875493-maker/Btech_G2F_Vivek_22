#include <stdio.h>

int main(){
    int product ;
    printf("Enter the Product quantity:");
    scanf("%d",&product);
    if(product>=400&&product<=500){
        printf("Avlaible with no Extra Charges\n");
    }
    else if  (product>=300&&product<=400)
         { printf("Avlaible with 5 percent Extra Charges\n");
         }
          else if  (product>=200&&product<=300)
         { printf("Avlaible with 10 percent Extra Charges\n");
         }
          else if  (product>=100&&product<=200)
         { printf("Avlaible with 15 percent Extra Charges\n");
         }
          else if  (product>=1&&product<=100)
         { printf("Avlaible with 20 percent Extra Charges\n");
         }
          else if  (product>=500&&product<=1000)
         { printf("OUT OF STOCK BUT WAIT FOR NEXT WEEK\n");
         }
         
  else{
     
       printf("Out of stock\n");
    }


     
    
    printf("Thanks for Coming\n");
       






    return 0;
}
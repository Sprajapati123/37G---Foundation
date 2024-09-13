#include <stdio.h>

int main(){
    /* Assignment operator

    = (a = 10) 
    += (a += 10) =  a = a +10;
    -= (x -= y) = x = x-y;
    *= (a *= y) = a =a *y;
    /= (a /= y) = a =a /y;
    
    */

    /*
    Relational operator
 
    > , < , >=, <=, !=, ==
    */
    // int a = 20;
    // int b = 20;

    // int result = a == b;

    // printf("%d",result);


    /*
    Unary operator
    10 + 15 = 25;
    ++ -> Increment Operator
    -- -> Decrement Operator
    */

    // int a = 10;
    // a++;
    // a--;
    // printf("%d",a);

    /*
    Logical operator
    Logical AND ( && )
    Logical OR ( || )
    Logical NOT (!)
    */

   
   int number;
   printf("Enter any number:");
   scanf("%d",&number);
    /*
        if(condition){
        
        }else{
        }
    */
    if(number % 2 == 0){
        printf("The number is even");
    }else{
        printf("The number is odd")
    }

}
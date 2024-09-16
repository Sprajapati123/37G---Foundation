#include<stdio.h>

int main(){
   int number;
   int factorial = 0;
   printf("Enter any number: ");
   scanf("%d",&number);

   for(int i =1;i<number;i++){
       factorial *= i;
   }
   printf("%d",factorial);
}
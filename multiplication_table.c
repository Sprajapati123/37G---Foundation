#include<stdio.h>

int main(){
   int number;
   printf("Enter any number: ");
   scanf("%d",&number);
   
   for(int i = 1;i<=10;i++){
       //5 * 1 = 5
       printf("%d * %d = %d\n",number,i,number*i);
   }
/*
    Enter any number: 
    If user enters 5
    you should print multiplication table of 5
    5*1=5
    5*2=10
    upto 5*10=50
*/
   
}
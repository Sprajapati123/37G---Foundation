/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    int balance = 10000;
    int choice;
    int amount;
    int i = 1;
    while(i){
   printf("Welcome to XYZ Banking\n");
   printf("Choose option (1-3)\n");
   printf("1. Add Funds/Deposit\n2. Withdraw Funds\n3. Check Balance\n");
   
   scanf("%d",&choice);
   
   if(choice == 1){
       printf("Enter amount to deposit\n");
       scanf("%d",&amount);
       if(amount<0 || amount == 0){
           printf("Please enter valid amount");
       }else{
           balance = balance + amount;
           printf("Your new balance is %d",balance);
       }
   }else if(choice == 2){
       printf("Enter amount to withdraw.\n");
       scanf("%d",&amount);
       if(amount>balance){
           printf("Insufficient funds");
       }else{
           balance = balance - amount;
          printf("Withdraw successful\n");
          printf("Your remaining balance is %d",balance);
       }
   }else if(choice ==3){
       printf("Your current balance is %d", balance);
   }else{
       printf("Invalid Input, Please try again later.");
   }
   
   
    }
  
   
}
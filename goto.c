#include<stdio.h>

int main(){
  
  int pin = 1111;
  int attempts = 0;
  int input;
  
  retry:
  printf("Enter pin:");
  scanf("%d",&input);
  
  if(pin == input){
      printf("Access Granted");
  }else{
      attempts++;
      printf("Invalid pin, Attempt %d of 3\n",attempts);
      if(attempts<3){
          goto retry;
      }else{
          printf("Too many attempts, try again later");
      }
  }
  
}
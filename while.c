#include<stdio.h>

int main(){
    int result = 15;
    int number;
    
    while(number != result){
        printf("Guess the number: ");
        scanf("%d",&number);
    }
    printf("Congratulations: You won");
}
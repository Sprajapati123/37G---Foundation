#include <stdio.h>

//function declaration
int add(int,int);
void subtract(int,int);
int multiply(int,int);

int main(){
    int first,second,choice;
    
    char yes = 'y';
    while(yes == 'y'){
        printf("\nChoose option (1-3)\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n");
    scanf("%d",&choice);

    if(choice <=3 && choice > 0){
        printf("Enter first number: ");
        scanf("%d",&first);

        printf("Enter second number: ");
        scanf("%d",&second);
        
        switch(choice){
            case 1:
                int sum = add(first,second);
                printf("The sum is %d",sum);
                break;
            case 2:
                subtract(first,second);
                break;
            case 3:
                int result = multiply(first,second);
                printf("The result is %d",result);
                break;
            default:
                break;
        }
    }else{
        printf("Invalid input,\n");
    }

        printf("Press y to continue n to exit");
        scanf("%c",&yes);
      
    }
}

//function defination
int add(int a,int b){
    return a+b;
}

void subtract(int a,int b){
    printf("The difference is %d", a-b);
}

int multiply(int a, int b){
    return a*b;
}
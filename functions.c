#include<stdio.h>

//function declaration
void display();

void greet();

void addition(int,int);

int calculate();

int subtract(int,int);

int main(){
    //calling a function
    display();

    addition(10,20);

    int result = calculate();

    int c = subtract(10,5);

    printf("%d",c);

    greet();
    
}

int subtract(int a,int b){
    return a-b;
}

int calculate(){
    return 10;
}

void addition(int a,int b){
    printf("sum is %d\n",a+b);
}
//function defination
void display(){
    
    printf("Hello World\n");
}

void greet(){
    printf("Good Afternoon\n");
}
//
//functions

/*
1. Functions with no parameter and no return type
2. Functions with parameter but no return type
3. Functions with no parameter but return type
4. Functions with parameter and return type
 */

 /* Syntax
    int a = 10;
    return_type function_name(parameter1,...,){
        statement
    }
 */
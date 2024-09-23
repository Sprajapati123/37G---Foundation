// Online C compiler to run C program online
#include <stdio.h>
// pointer
// recursion
int calculate(int *a);

int main() {
   int salary;
   int *ptr = &salary;
   printf("Enter salary: ");
   scanf("%d",ptr);
   printf("Your original salary is %d\n",*ptr);
   
   int new = calculate(ptr);
   printf("Your new salary is %d",new);
}

int calculate(int *a){
    return *a * 2;
}

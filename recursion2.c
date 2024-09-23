// Online C compiler to run C program online
#include <stdio.h>
// pointer

int sum(int);
int main() {
  int num = 5;
  int c = sum(num);
  printf("The sum of %d natural number is %d",num,c);
}
int sum(int a){
    if(a == 0){
        return a;
    }else{
        return a + sum(a-1);
    }
}


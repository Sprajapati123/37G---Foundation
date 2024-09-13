#include <stdio.h>

int main(){
    int marks;

    printf("Enter your marks: ");
    scanf("%d",&marks);
    
    if(marks>=90){
        printf("congratulations, A+");
    }else if (marks >=80 && marks<90){
        printf("Congratulations A")
    }else if(marks >=70 && marks < 80){
        printf("B+");
    }else if(marks >=60 && marks < 70){
        printf("B")
    }else{
        printf("Failed");
    }
    
   
    
    
    

    
}
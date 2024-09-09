#include<stdio.h>

int main(){
   
     int a1; //variable declaration
    a1 = 50; //variable initialization

    int b1 = 70; //variable 
               //declaration and initialization
    
   

               
     /*
     Certain Rules for variable declaration
     1. variable name should not start with number
     2. variable name should not contain 
      blank space and comma
    3.variable name should not contain 
    special characters(%,$,#) except underscore(_)
     4. Variables are case sensitive
     (apple and Apple are two different variables)
    5. variable name should be unique.
    6. variable name must not contain any keyword
    
     */     

     /*
     Datatypes
     1. int - 50,60,100
     2. float - 3.14,5.512012
     3. double - 3.151
     4. char - 'G',"A"
     5. void 
     */ 
     
     int a = 9;
     int x = 5;
     int y = 6;
     float b = 2.50;
     char c = 'M';    

    /*
    format specifier
    %d - integer
    %f - float
    %c - character
    */
     printf("%d,%d,%d,\n",a,x,y);

     printf("%1.3f,\n",b);

     printf("%c,\n",c);


}
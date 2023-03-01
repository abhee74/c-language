// write a program to print all odd number between 1 to 100
#include <stdio.h>  
  
int main()
 {  
    int i; 
    printf("\n Odd numbers between 1 to 100 = ");  

    for(i = 1; i<= 100; i++) {  
     
        if(i%2 == 1)
        { 
        
            printf("%d ", i);  
        }  
    }  
  
    return 0;  
} 

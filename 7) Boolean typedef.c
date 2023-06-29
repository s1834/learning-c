#include <stdio.h>  

typedef enum{false,true} b;  

int main()  
{  
b x=false; // variable initialization  

if(x==true) // conditional statements  
{  
printf("The value of x is true");  
}  
else  
{  
printf("The value of x is false");  
}  

return 0;  
}  

/*n the above code, we use the Boolean values, 
i.e., true and false, but we have not used the bool type. 
We use the Boolean values by creating a new name of the 'bool' type. 
In order to achieve this, the typedef keyword is used in the program.*/
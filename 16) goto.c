#include <stdio.h>  

int main()   
{  
  int i, j, k;    

  for(i=0;i<10;i++)  
  {  
    for(j=0;j<5;j++)  
    {  
      for(k=0;k<3;k++)  
      {  
        printf("%d %d %d\n",i,j,k);  
        if(j == 3)  
        {  
          goto out;   
        }  
      }  
    }  
  }  

  out:   
  printf("came out of the loop");

  return 0;   
}  
/*The only condition in which using goto is preferable is 
when we need to break the multiple loops using a single statement at the same time.*/
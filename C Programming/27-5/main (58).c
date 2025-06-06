#include<stdio.h>
#include<conio.h>
int main()
{
      
      int n, sum = 0, i = 0 ;
      
      printf ("Enter a number") ;
      scanf ("%d", &n); 

      
      tops:
      i++ ;                                     
      sum += i ; //1//3
      
      if(i<n)
      {
          goto tops;
         
      }
      
      printf ("\n sum of %d natural numbers = %d", n, sum) ;
      
      
     
    
    return 0;
}
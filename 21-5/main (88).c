#include<stdio.h>
#include<conio.h>
int main()
{   
    int num,sum=0,rem=0,lastdigit=0,firstdigit=0;
    
    printf("Enter Number: ");
    scanf("%d",&num);//1627
    
    lastdigit = num%10;//7
    
    while(num>0)
    {
        
        if(num>9)
        {
            num = num/10;
        }
        else
        {
            firstdigit=num;
            num=num/10;
        }
      
        
        
    }
    sum=firstdigit+lastdigit;
    printf("\n sum of fdigit and ldigit is %d",sum);
   
    
    
  
    
    return 0;
}

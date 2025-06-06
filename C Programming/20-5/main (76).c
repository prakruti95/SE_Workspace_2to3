#include<stdio.h>
#include<conio.h>
void main()
{
   
    int maths,sci,gu,hi,en,total;
    float per;
    
    printf("Enter Marks for Maths: ");
    scanf("%d",&maths);
    
    printf("Enter Marks for Science: ");
    scanf("%d",&sci);
    
    printf("Enter Marks for Gujarati: ");
    scanf("%d",&gu);
    
    printf("Enter Marks for Hindi: ");
    scanf("%d",&hi);
    
    printf("Enter Marks for English: ");
    scanf("%d",&en);
    
    total = maths+sci+gu+hi+en;
    per = total/5;
    
    printf("\n Your Total is %d",total);
    printf("\n Your Percentage is %f",per);
    
    if(per>=70)
    {
        printf("\n You got the A Grade");          
    }
    else if(per>=60)
    {
        printf("\n You got the B Grade");          
    }
    else if(per>=50)
    {
        printf("\n You got the C Grade");          
    }
    else if(per>=40)
    {
        printf("\n You got the D Grade");          
    }
    else
    {
         printf("Fail");  
    }
   
    
    getch();
   
}
#include<stdio.h>
#include<conio.h>

struct topstech
{
    char name[20];
    char tech[20];
    int rollno;
    
}a1[50];

void main()
{
    int i,n;
    
    printf("Enter Total Number of Students: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter Your Roll Number");
        scanf("%d",&a1[i].rollno);
        
        printf("Enter Your Name: ");
        scanf("%s",&a1[i].name);
        
        printf("Enter Your Tech: ");
        scanf("%s",&a1[i].tech);
    }
    
     for(i=0;i<n;i++)
    {
       printf("\n Roll Number is %d ",a1[i].rollno);
       printf("\n Name is %s ",a1[i].name);
       printf("\n Technology is %s",a1[i].tech);
    }
    
    
   
  
    
    getch();
}
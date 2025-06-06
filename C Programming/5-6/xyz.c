#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *f1;
    char c;
   // f1=fopen("Input","w"); 
   
   //========================WRITE================================ 
    // printf("Enter Data: ");
    // while((c=getchar())!='0')
    // {
    //     putc(c,f1);
    // }
   
    //========================WRITE================================ 
    
    printf("\n data values: ");
    
    f1=fopen("Input","r");                           
    while((c=getc(f1))!=EOF)
    {	
        printf("%c",c);
    }
    fclose(f1);
   
   
    fclose(f1);
    getch();
}
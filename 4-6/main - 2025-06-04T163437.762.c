#include<stdio.h>
#include<conio.h>

struct address
{
     char city[50];
     int zip;
};
struct student
{
    char name[50];  
    int age;
    struct address add;//nested structure
}s1;



void main()
{
   
    printf("\n Enter Name: ");
    scanf("%s",&s1.name);
    
    printf("\n Enter Age: ");
    scanf("%d",&s1.age);
    
    printf("\n Enter City: ");
    scanf("%s",&s1.add.city);
    
    printf("\n Enter Zipcode: ");
    scanf("%d",&s1.add.zip);
    
    //struct Student s1 = {"John Doe", 20, {"New York", 10001}};
    
    printf("\n Your All details are: ");
  
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);
    printf("\n City is %s",s1.add.city);
    printf("\n Zip is %d",s1.add.zip);
    getch();
}
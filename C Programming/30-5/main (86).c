#include<stdio.h>
#include<conio.h>
#include<string.h>


int main() 
{
    char str[] = "Hello, World!";
    int length = 0;
    int i = 0;//

    while (str[i] != '\0') 
    {
        length++;
        i++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
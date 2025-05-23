#include <stdio.h>
#include <conio.h>

void main()
{
	long int factorial=1;
	int num,i=1;

    printf("Enter the Number for the factorial : ");
	scanf("%d",&num);//5

	while (i<=num)
	{
		  factorial=factorial*i;
		  i++;
	}
	printf("Factorial for %d is : %ld",num,factorial);
	getch();
}
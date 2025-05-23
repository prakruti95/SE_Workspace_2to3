#include <stdio.h>
#include <conio.h>

void main()
{      
	int num1=0,num2=1,fib=0,num;

	printf("How many Fibonacci Number you want to see : ");
	scanf("%d",&num);//5

	while (num > 0)
	{
		printf("%d,",fib);//0
		fib =num1+num2;//1
		num1=num2;
		num2=fib;
		num--;
	}
	
	getch();
}



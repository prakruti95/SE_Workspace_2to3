#include <stdio.h>
#include <conio.h>

void main()
{
	int num,sum=0,lastdigit=0;
	

	printf("Enter the Number : ");
	scanf("%d",&num);//125

	lastdigit = num%10;//5
	sum = (sum*10)+lastdigit;//5

	while (num > 0)
	{
		if (num > 9)
			num = num/10;
		else
		{
			lastdigit=num;
			sum=sum+lastdigit;//6
			num=num/10;
		}
	}
	printf("\nTotal of First & Last Digit is : %d",sum);//6
	getch();
}
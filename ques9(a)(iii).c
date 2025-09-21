// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using do while loop
#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int a,num,fact=1;
	printf("Enter a Number :");
	scanf("%d",&a);
	num=a;
	do
	{
		fact*=num;
		num--;
	}while(num>0);
	printf("Factorial of %d = %d",a,fact);
	return 0;
}

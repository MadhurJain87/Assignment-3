// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int i,num,fact=1;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
{
	fact*=i;
}
	printf("Factorial of %d is %d",num,fact);
    return 0;
}

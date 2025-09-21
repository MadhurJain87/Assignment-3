// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using do while loop
#include <stdio.h>
#include <math.h>
int main()
{
	int rollno = 1025170191;
	int i=2,n;
	printf("Enter a Number :");
	scanf("%d",&n);
	do
	{
	    if(n%i==0)
	       break;
	       i++;}
		   while(i<=sqrt(n));
	if(i>sqrt(n))
	    printf("Prime");
	else
	    printf("Not Prime");
	return 0;
}

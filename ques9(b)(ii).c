// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using while loop
#include <stdio.h>
#include <math.h>
int main()
{
	int rollno = 1025170191;
	int i=1,n;
	printf("Enter a Number :");
	scanf("%d",&n);
	while(i<=sqrt(n)){
		i++;
	    if(n%i==0)
	       break;}
	if(i>sqrt(n))
	    printf("Prime");
	else
	    printf("Not Prime");
	return 0;
}

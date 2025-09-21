// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using for loop
#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int i,n,a=0,b=1,c;
	printf("Enter no of terms :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
	

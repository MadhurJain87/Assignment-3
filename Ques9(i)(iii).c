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
	i=1;
	do
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}while(i<=n);
	return 0;
}

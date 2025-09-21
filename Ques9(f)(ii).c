// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using while loop
#include <stdio.h>
#include <math.h>
int main()
{
	int rollno = 1025170191;
	int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication Table of %d:\n",n);
    i = 1; 
	while(i<=10)
	 {
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
    }
     return 0;
}

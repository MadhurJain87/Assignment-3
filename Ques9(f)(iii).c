// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using do while loop
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
	do {
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
    }while(i <= 10);
     return 0;
}

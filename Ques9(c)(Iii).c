// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using do while loop
#include <stdio.h>
#include <math.h>
int main()
{
	int rollno = 1025170191;
	int x,n,i=1;
    long  result=1;
    printf("Enter base:");
    scanf("%d", &x);
    printf("Enter exponent:");
    scanf("%d", &n);
    do{
        result = result * x;
        i++;
    }while(i<=n);
    printf("ans=%ld",result);
    return 0;
}

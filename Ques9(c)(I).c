// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using for loop
#include <stdio.h>
#include <math.h>
int main()
{
	int rollno = 1025170191;
	int x,n,i;
    long  result=1;
    printf("Enter base:");
    scanf("%d", &x);
    printf("Enter exponent:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        result = result * x;
    }
    printf("ans=%ld",result);
    return 0;
}
    

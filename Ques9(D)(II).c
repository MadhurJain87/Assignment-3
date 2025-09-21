// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using while loop
#include <stdio.h>
#include <math.h>
int main()
{
	int rollno = 1025170191;
	int i=0,num,n,d,sum;
	printf("Enter a 3 digit number:");
	scanf("%d",&n);
	sum = 0;
    num=n;
    while(i<3){
        d=n%10;
        sum+=d*d*d; // cube of digit
        n/=10;
        i++;
    }
    if(sum == num)
        printf(" %d is an Armstrong number.", num);
    else
        printf(" %d is NOT an Armstrong number.", num);
    return 0;
}

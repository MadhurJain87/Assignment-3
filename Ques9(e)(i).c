// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using for loop
#include <stdio.h>
#include <math.h>
int main()
{
	int rollno = 1025170191;
    int n,num,i,smallest, largest;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &num);
    smallest = largest = num;  

    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num < smallest)
            smallest = num;
        if(num > largest)
            largest = num;
    }
    printf("Range=%d\n", largest - smallest);
    return 0;
}


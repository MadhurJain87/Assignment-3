// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using for loop
#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	    int num, i, evenCount = 0;
    printf("Enter 20 integers:\n");
    for(i = 1; i <= 20; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            evenCount++;
        }
    }
    printf("Number of even integers = %d\n", evenCount);
    return 0;
}

// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using whiile loop
#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int num,sum=0;
	printf("Enter numbers (enter -999 to stop):\n");
    scanf("%d", &num);
    while(num != -999) {
        sum += num;
        scanf("%d", &num);
    }
    printf("Sum of all numbers = %d\n", sum);
    return 0;
}

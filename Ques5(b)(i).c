// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is Positive\n", num);
    else if (num < 0)
        printf("%d is Negative\n", num);
    else
        printf("Number is Zero\n");

    return 0;
}

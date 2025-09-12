// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 8 == 0)
        printf("%d is divisible by both 5 and 8\n", n);
    else if (n % 5 == 0)
        printf("%d is divisible by 5 only\n", n);
    else if (n % 8 == 0)
        printf("%d is divisible by 8 only\n", n);
    else
        printf("%d is not divisible by 5 or 8\n", n);

    return 0;
}

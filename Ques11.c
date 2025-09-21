// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using whiile loop
#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int num;
    printf("Enter integers (program stops if number not > 100):\n");
    scanf("%d", &num);
    while(num>100) {
        scanf("%d", &num);
    }
    printf("Number %d is  notgreater than 100. Program stopped.\n", num);
    return 0;
}


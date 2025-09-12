// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int days;
    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time.");
    }
    else if (days <= 5) {
        printf("Fine = 50 paisa");
    }
    else if (days <= 10) {
        printf("Fine = 1 rupee");
    }
    else if (days <= 30) {
        printf("Fine = 5 rupees");
    }
    else {
        printf("Your membership is canceled!");
    }

    return 0;
}


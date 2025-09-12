// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int i;
    float num[5], sum = 0, avg, max, min, variance = 0, stddev;

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &num[i]);
        sum += num[i];
    }

    // Average
    avg = sum / 5.0;

    // Max & Min
    max = min = num[0];
    for (i = 1; i < 5; i++) {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }

    // Variance & Standard Deviation
    for (i = 0; i < 5; i++) {
        variance += pow(num[i] - avg, 2);
    }
    variance /= 5.0;              // Population variance
    stddev = sqrt(variance);      // Standard Deviation

    // Output results
    printf("\nAverage = %f", avg);
    printf("\nMaximum = %f", max);
    printf("\nMinimum = %f", min);
    printf("\nStandard Deviation = %f\n", stddev);

    return 0;
}

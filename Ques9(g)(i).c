// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using for loop
#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int a,b,hcf=1,i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i=1;i<=(a<b?a:b);i++){
        if(a%i==0 && b%i==0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d = %d\n", a, b, hcf);
    return 0;
}

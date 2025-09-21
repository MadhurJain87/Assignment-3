// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using for loop
#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int a,b,lcm,i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i=(a>b?a:b); ;i++){
        if(i%a==0&&i%b==0){
            lcm = i;
            break;   // stop when first common multiple found
        }
    }
    printf("LCM of %d and %d = %d\n",a,b,lcm);
    return 0;
}

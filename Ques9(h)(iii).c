// Name - Madhur Jain
// Group - 1A82
// Roll no - 1025170191

//Using do while loop
#include <stdio.h>
int main()
{
	int rollno = 1025170191;
	int a,b,lcm,i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    i=(a>b?a:b);
	do{
        if(i%a==0&&i%b==0){
            lcm=i;
            break;
        }
      i++;
	 }while(1);
	 printf("LCM of %d and %d = %d\n", a, b, lcm);
    return 0;
}
	 

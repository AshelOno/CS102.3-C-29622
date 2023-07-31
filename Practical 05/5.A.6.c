#include <stdio.h>
int main()
{
    int base,expo,power;

    printf("Enter the Base :");
    scanf("%d",&base);

    printf("Enter the exponent :");
    scanf("%d",&expo);

    for(int i; i<expo ;i++){
        power*=base;

    }
    printf("The%dth power of %d is %d.\n",expo,base,power);

    return 0;
}




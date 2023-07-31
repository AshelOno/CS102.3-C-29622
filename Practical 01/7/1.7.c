
#include<stdio.h>
int main()
{
    int num1=100,num2=200,swap;

    printf("Before the swap : num1=%d, num2=%d\n",num1,num2);

    swap=num1;
    num1=num2;
    num2=swap;

    printf("After the swap : num1=%d num2=%d",num1,num2);


    return 0;
}


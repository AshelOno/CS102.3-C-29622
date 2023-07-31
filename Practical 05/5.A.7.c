#include <stdio.h>
int main()
{
    int num1=0,num2=1,num3,i;

    printf("The first 10 Fibonacci numbers are :\n");
    printf("%d%d",num1,num2);


    for(int i=3; i<=10 ;i++){
        num3=num1+num2;
        printf("%d",num3);
        num1=num2;
        num2=num3;



    }

    return 0;
}



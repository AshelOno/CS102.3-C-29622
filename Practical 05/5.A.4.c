#include <stdio.h>
int main()
{
    int num, digit,sum;

    printf("Enter a Number :");
    scanf("%d",&num);

    while(num>0){
        digit=num%10;
        sum+=digit;
        num=num/10;

    }
    printf("The sum of the digit is %d\n",sum);



    return 0;
}



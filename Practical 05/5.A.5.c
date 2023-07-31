#include <stdio.h>
int main()
{
    int num, digit,revers;

    printf("Enter a Number :");
    scanf("%d",&num);

    do{
        digit=num%10;
        revers=revers*10+digit;
        num=num/10;

    } while(num>0);

    printf("The reversed number is %d\n",revers);



    return 0;
}



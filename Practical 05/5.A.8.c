#include <stdio.h>
int main()
{
    int num,orginnum,remain,sum;
    printf("Enter a Number :");
    scanf("%d",&num);

    orginnum=num;


    while(num>0){
        remain=num%10;
        sum+=remain*remain*remain;
        num/=10;
    }
    if (sum==orginnum){
        printf("The number %d is an Armstrong number \n",orginnum);

    }else{
         printf("The number %d isn't an Armstrong number \n",orginnum);
    }

    return 0;
}



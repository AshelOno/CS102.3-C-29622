#include <stdio.h>
int main()
{
    int i,num,facto=1;

    printf("Enter a Number :");
    scanf("%d",&num);

    if(num<0){
        printf("Error");
        return 0;
    }

    for(int i=num;i>=1;i--){
        facto*=i;
    }
    printf("Factorial of %d is %d\n",num,facto);



    return 0;
}


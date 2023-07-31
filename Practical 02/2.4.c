#include<stdio.h>
int main()
{

    float fahrenheit,celsius;

    printf ("Enter the Temperature in Fahrenheit =");
    scanf("%f",&fahrenheit);

    celsius =(5.0/9.0)*(fahrenheit-32);

    printf ("%.2f degree fahrenheit is equal to %.2f degree celsius.\n",fahrenheit,celsius);



    return 0;
}

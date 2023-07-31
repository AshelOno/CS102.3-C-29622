#include<stdio.h>
int main()
{
    int n1,n2,n3,max,min;
    printf("Enter three integer numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);

    int largest,smallest;

    largest=n1;
    if (n2 > largest) {
        largest = n2;
    }
    if (n3 > largest) {
        largest = n3;
    }

    smallest = n1;
    if (n2 < smallest) {
        smallest = n2;
    }
    if (n3 < smallest) {
        smallest = n3;
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;

}

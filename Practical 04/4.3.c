#include <stdio.h>

int main()
{
    int choise;
    float radius, ans,pi=3.14159;

    printf("Calculator\n");
    printf("1.Calculate the circumference of a circle \n");
    printf("2.Calculate the area of a circle\n");
    printf("3.Calculate the volume of a sphere \n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choise);


    switch (choise)
    {
        case 1:

            printf("Enter the radius of the circle :", ans);
            scanf("%f",&radius);

            ans=2*pi*radius;
            printf("The circumference of the circle is: %.2f\n", ans);
            break;


        case 2:

            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);

            ans = pi * radius * radius;
            printf("The area of the circle is: %.2f\n", ans);
            break;
        case 3:

            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);

            ans = (4 / 3.0) * pi * radius * radius * radius;
            printf("The volume of the sphere is: %.2f\n", ans);
            break;

        default:

            printf("Invalid choice\n");
            break;
    }
    return 0;
}


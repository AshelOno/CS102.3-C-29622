#include <stdio.h>

int main()
 {
    int arr[10],i,min, max, sum = 0;
    float avg;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }


    avg = (float)sum / 10;


    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", avg);


    printf("Values in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

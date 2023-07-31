#include <stdio.h>
int main()
{
    int marks[10];
    int i, tot=0;
    float ave;

    printf("Enter 10 Marks :");
    for (i=0;i<=10;i++)
    {
        printf("Mark %d :",i+1);
        scanf("%d",&marks[i]);

        tot += marks[i];
    }

    ave=tot/10;

    printf("Total Marks :%d\n",tot);
    printf("Average Marks :%.2f\n",ave);

    if(ave<50){
        printf ("Fail\n");
    }else{
        printf ("Pass\n");
    }


    return 0;
}


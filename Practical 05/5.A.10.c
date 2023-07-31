#include <stdio.h>
int main()
{
    int i,numostar;

    for (i=1;i<=5;i++){
       numostar=i;
       while(numostar>0){
       printf("*");
       numostar--;
       }
       printf("\n");
    }

    return 0;
}




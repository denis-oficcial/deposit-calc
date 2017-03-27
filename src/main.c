#include <stdio.h>
#include "deposit.h"

int main()
{
    int sum;
    int time;
    int staf[2][N] = {{-10, 2 , 6, 12},{-10, 3, 8, 15}};
    printf ("Please enter  your deposit amount and term of the deposit:\n");
    scanf ("%d %d", &sum, &time);
    if (sum >= 10 && time <= 365){
        printf("Sum: ");
        if(sum <= 100){
            printf("%d",sum+(sum*switching(time,staf[0]))/100) ;
            printf("\nDohod = %d",(sum*switching(time,staf[0]))/100) ;
        }else{
            printf("%d",sum+sum*(switching(time,staf[1]))/100) ;
            printf("\nDohod = %d",(sum*switching(time,staf[0]))/100) ;
        }
    }else{
        printf("\nThe entered data is not valid.");
    };   
    return 0;
}

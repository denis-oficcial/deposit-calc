#include <stdio.h>
#define N 4

int switching (int time, int stf[N]){
    if (time>0 && time<=30){
        return stf[0];
    }else{ 
        if (time>30 && time<=120){  
            return stf[1];
        }else{
             if (time>120 && time<=240){  
                  return stf[2];
             }else{
                 if (time>240 && time<=365){  
                      return stf[3];
                 }
             }
        }
     }
     return 0;
}

int main()
{
    int sum;
    int time;
    int staf[2][N] = {{-10, 2 , 6, 12},{-10, 3, 8, 15}};
    printf ("Please enter your deposit amount and term of the deposit:\n");
    scanf ("%d %d", &sum, &time);
    if (sum >= 10 && time <= 365){
        printf("Sum: ");
        if(sum <= 100){
            printf("%d",sum+(sum*switching(time,staf[0]))/100) ;
        }else{
            printf("%d",sum+sum*(switching(time,staf[1]))/100) ;
        }
    }else{
        printf("\nThe entered data is not valid.");
    };   
    return 0;
}

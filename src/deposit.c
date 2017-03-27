#include "deposit.h"

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

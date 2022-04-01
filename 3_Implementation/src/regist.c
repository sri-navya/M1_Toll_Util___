#include <stdio.h>
#include "regist.h"

int regist_status(long p){

    // Checks for registration details of new users    
    pd[0].vehiclenumber=p;
    int i=1;
    while(i<=1000){
        if(pd[i].vehiclenumber==pd[0].vehiclenumber){
            if(pd[i].direction_type==0)
                return 0;
            else
                return 1;
        }
        i++;
    }
    return -1;
}

// Checks how many directions should be given
int vehicle_status(int i){
     
    if (pd[i].user_tolls==0){
        pd[i].user_tolls++;
        return 1;}
    else if(pd[i].user_tolls==1){
        pd[i].user_tolls++;
        return 2;}
    else if (pd[i].user_tolls==2){
        return 3;}
    else
        return 0;

}
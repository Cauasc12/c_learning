#include <stdio.h>

int main(){

    char times[] = "ABCDEFGHIJKF";

    int m, n;

    for(int totalTimes = 16; totalTimes > 1; totalTimes/2){

       for(int i = 0; i < totalTimes/2 ; i++){
            scanf("%d %d", m, n);

            if(m > n){
                times[i] = times[i*2];
            }
            else{
                times[i] = times[i*2 + 1];
            }
       }
    }

    printf("%c\n", times[0]);


    return 0;
}
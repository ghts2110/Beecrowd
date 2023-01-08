#include <stdio.h>

int main(){
    int num, speed;
    while(scanf("%d", &num) != EOF){
        int maxspeed = 0;
        while(num--){
            scanf("%d", &speed);
            if(maxspeed < speed){
                maxspeed = speed;
            }
        }
        if(maxspeed >= 20){
            printf("3\n");
        }else if(maxspeed >= 10){
            printf("2\n");
        }else{
            printf("1\n");
        }
    }
    return 0;
}
 

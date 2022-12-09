#include <stdio.h>

int main(){
    int min = 101, mid_min = 101, mid_max = 101,  max = 101, num, t = 4;
    while(t--){
        scanf("%d", &num);
        if(min > num){
            max = mid_max;
            mid_max = mid_min;
            mid_min = min;
            min = num;
        }else if(mid_min > num){
            max = mid_max;
            mid_max = mid_min;
            mid_min = num;
        }else if(mid_max > num){
            max = mid_max;
            mid_max = num;
        }else{
            max = num;
        }
    }

    if(min + mid_min > mid_max || mid_min + mid_max > max){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;
}

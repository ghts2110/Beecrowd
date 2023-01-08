#include <stdio.h>
#include <math.h>

int main(){
    int x, y, percentage;
    while(1){
        scanf("%d", &x);
        if(x == 0){
            break;
        }
        scanf("%d %d", &y, &percentage);
        
        int value = sqrt((100 * x * y)/percentage);
        printf("%d\n", value);
    }
    return 0;
}


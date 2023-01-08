#include <stdio.h>

int main(){
    int t, i;  
    scanf("%d", &t);

    double x = 2;
    for(i = 0; i != t; i++){
        x = 1/x;
        if(i != t - 1){
            x += 2;
        } 
    }

    x++;

    if(t == 0){
        x = 1;
    }

    printf("%.10lf\n", x);
    return 0;
}

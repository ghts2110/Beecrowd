#include <stdio.h>

int main(){
    int t;
    double value, x = 6;
    scanf("%d", &t);
    
    if(t == 0){
        value = 3;
    }else{
        int i;
        for(i = 0; i != t; i++){
            x = 1/x;
            if(i != t-1){
                x += 6;
            }
        }
        
        value = x + 3;
    }

    printf("%.10f\n", value);
    return 0;
}

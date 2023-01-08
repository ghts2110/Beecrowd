#include <stdio.h>

int main(){
    while(1){
        long double p;
        scanf("%LF", &p);

        if(p == -1){
            break;
        }

        if(p == 0){
            printf("0\n");
        }else{
            p--; 
            printf("%.LF\n", p);
                    
        }
    }
    return 0;
}


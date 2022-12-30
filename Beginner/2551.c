#include <stdio.h>

int main(){
    int t;
    
    while(scanf("%d", &t) != EOF){
        int cont = 0;
        float med = 0, time, distance;
        while(t--){
            cont++;
            scanf("%f %f", &time, &distance);

            if(med < distance/time){
                printf("%d\n", cont);
                med = distance/time;
            }
        }
    }

    return 0;
}

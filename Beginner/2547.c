#include <stdio.h>

int main(){
    int n, max, min;
    while(scanf("%d %d %d", &n, &min, &max) != EOF){
        int cont = 0;
        
        while(n--){
            int h;
            scanf("%d", &h);

            if(h <= max && h >= min){
                cont++; 
            }
        }

        printf("%d\n", cont);
    }
    return 0;
}

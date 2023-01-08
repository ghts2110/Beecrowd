#include <stdio.h>
 
int main(){
    int t, t2, i;
    float point, d, n, max, min, cont;
    char name[100];
    scanf("%d", &t);

    while(t--){
        t2 = 7, max = 0, min = 100, cont = 0;
        scanf("%s", name);
        scanf("%f", &d);  

        while(t2--){
            scanf("%f", &n);
            if(n  > max){
                max = n;
            }
            if(n < min){
                min = n;
            }

            cont += n;
        }
            
        cont -= max + min;
        
        point = d * cont;
        printf("%s %.2f\n", name, point);
    }
    return 0;
}

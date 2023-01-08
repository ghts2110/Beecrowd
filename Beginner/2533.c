#include <stdio.h>

int main(){
    int t;
    while(scanf("%d", &t) != EOF){
        int i = t;
        double n, c, pro = 0, car = 0;
        while(i--){
            scanf("%lf %lf", &n, &c);
            pro += n * c;
            car += c;
        }
        
        car *= 100;
 
        double value = pro/car;
        printf("%.4lf\n", value);
    }
    return 0;
}

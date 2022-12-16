#include <stdio.h>
#include <math.h>

int main(){
    int xf, yf, xn, yn, vn, r1, r2;
    float d, r;
    while(scanf("%d %d %d %d %d %d %d", &xf, &yf, &xn, &yn, &vn, &r1, &r2) != EOF){

        d = sqrt(pow(xn - xf, 2) + pow(yn - yf, 2));
        d += vn * 1.5;

        r = r1 + r2;

        if(r >= d){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}

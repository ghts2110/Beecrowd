#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double value;
    scanf("%d", &n);
    
    double raiz5 = sqrt(5);
    value = (pow((1+raiz5)/2, n) - pow((1 - raiz5)/2, n))/raiz5;
    printf("%.1lf\n", value);
    return 0;
}
 

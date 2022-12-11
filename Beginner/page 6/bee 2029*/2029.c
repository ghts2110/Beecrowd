#include <stdio.h>

int main(){
    double volume, diametro;
    while(scanf("%lf %lf", &volume, &diametro) != EOF){
        double altura, area, raio = diametro/2 , pi = 3.14;
        
        altura = (4 * volume)/(diametro * diametro * pi);
        printf("ALTURA = %.2lf\n", altura);
        
        area = pi * raio * raio;
        printf("AREA = %.2lf\n", area);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);


    if(a + b > c && a + c > b && c + b > a){
        if(a == b && a == c){
            printf("Valido-Equilatero\n");
        }else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
            printf("Valido-Isoceles\n");
        }else{
            printf("Valido-Escaleno\n");
        }

        if(a > b && a > c){
            if(pow(a, 2) == pow(b, 2) + pow(c, 2)){
                printf("Retangulo: S\n");
            }else{
                printf("Retangulo: N\n");
            }
        }else if(b > a && b > c){
            if(pow(b, 2) == pow(a, 2) + pow(c, 2)){
                printf("Retangulo: S\n");
            }else{
                printf("Retangulo: N\n");
            }
        }else{
            if(pow(c, 2) == pow(a, 2) + pow(b, 2)){
                printf("Retangulo: S\n");
            }else{
                printf("Retangulo: N\n");
            }
        }

    }else{
        printf("Invalido\n");
    }

    return 0;
}

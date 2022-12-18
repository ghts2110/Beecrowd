#include <stdio.h>

int main(){
    int t;
    float alls = 0, allb = 0, alla = 0, bests = 0, bestb = 0, besta = 0;
    char name[100];
    scanf("%d", &t);
    
    while(t--){
        float s, b, a; 
        scanf("%s", name);

        scanf("%f %f %f", &s, &b, &a);
        alls += s;
        allb += b;
        alla += a;

        scanf("%f %f %f", &s, &b, &a);
        bests += s;
        bestb += b;
        besta += a;
    }

    char p = '%';
    printf("Pontos de Saque: %.2f %c.\n", (bests * 100)/alls, p);
    printf("Pontos de Bloqueio: %.2f %c.\n", (bestb * 100)/allb, p);
    printf("Pontos de Ataque: %.2f %c.\n", (besta * 100)/alla, p);
    return 0;
}

#include <stdio.h>

int main(){
    int t;
    float value = 0;
    scanf("%d", &t);
    while(t--){
        float quantidade, cust;
        int cod;
        scanf("%d %f", &cod, &quantidade);
        cust = cod % 10 + 0.50; 
        value += cust * quantidade;
    }
    printf("%.2f\n", value);
    return 0;
}

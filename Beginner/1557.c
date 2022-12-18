#include <stdio.h>
#include <math.h>

int main(){
    int num;
    while(scanf("%d", &num)){
        if(num == 0){
            break;
        }
        int i, j, exponent, cont = 0;
        
        int max = pow(2, (num - 1) * 2);
        while(max != 0){
            cont++;
            max/=10;
        }

        for(i = 0; i != num; i++){
            exponent = i;
            for(j = 0; j != num; j++){
                int value = pow(2, exponent);
                if(j == 0){
                    printf("%*d",cont, value);
                }else{
                    printf("%*d",cont + 1, value);
                }
                exponent++;
            }printf("\n");
        }printf("\n");
    }
    return 0;
}

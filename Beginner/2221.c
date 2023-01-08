#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int b, a1, d1, l1, a2, d2, l2, power1, power2;
        scanf("%d %d %d %d %d %d %d", &b, &a1, &d1, &l1, &a2, &d2, &l2);
        power1 = (a1 + d1)/2;
        power2 = (a2 + d2)/2;

        if(l1 % 2 == 0){ 
            power1 += b;
        }
        if(l2 % 2 == 0){
            power2 += b;
        }

        if(power1 > power2){
            printf("Dabriel\n");
        }else if(power1 < power2){
            printf("Guarte\n");
        }else{
            printf("Empate\n");
        }

    }
    return 0;
}

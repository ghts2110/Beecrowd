#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int b1, b2;
        scanf("%d %d", &b1, &b2);
        
        if(b1 + b2 == 0){
            printf("PROXYCITY\n");
        }else if(b1 + b2 == 1){
            printf("P.Y.N.G.\n");
        }else if(b1 + b2 == 2){
            printf("DNSUEY!\n");
        }else if(b1 + b2 == 3){
            printf("SERVERS\n");
        }else if(b1 + b2 == 4){
            printf("HOST!\n");
        }else if(b1 + b2 == 5){
            printf("CRIPTONIZE\n");
        }else if(b1 + b2 == 6){
            printf("OFFLINE DAY\n");
        }else if(b1 + b2 == 7){
            printf("SALT\n");
        }else if(b1 + b2 == 8){
            printf("ANSWER!\n");
        }else if(b1 + b2 == 9){
            printf("RAR?\n");
        }else{
            printf("WIFI ANTENNAS\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main(){
    int t, bestIp;
    float bestnote = 0;
    scanf("%d", &t);
    while(t--){
        int ip;
        float note;
        scanf("%d %f", &ip, &note);
        if(note > bestnote){
            bestnote = note;
            bestIp = ip;
        }
    }

    if(bestnote >= 8){
        printf("%d\n", bestIp);
    }else{
        printf("Minimum note not reached\n");
    }

    return 0;
}

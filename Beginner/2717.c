#include <stdio.h>

int main(){
    int t, ma, mb;
    scanf("%d %d %d", &t, &ma, &mb);

    if(t >= ma + mb){
        printf("Farei hoje!\n");
    }else{
        printf("Deixa para amanha!\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    char quest[1000];
    while(t--){
        char s;
        scanf("%c", &s);
        scanf("%[^\n\r]", quest);
        printf("I am Toorg!\n");
    }

    return 0;
} 

#include <stdio.h>

int main(){
    char l[27];
    while(scanf("%s", l) != EOF){
        int t;
        scanf("%d", &t);

        while(t--){
            int n;
            scanf("%d", &n);
            printf("%c", l[n-1]);
        }
        printf("\n");
    }
    return 0;
}

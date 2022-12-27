#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int c, n;
    char phrase[1000], l[1];
    while(scanf("%d %d", &c, &n) != EOF){
        char real[c], fake[c];
        scanf("%c", l);
        scanf("%[^\n\r] %[^\n\r]", fake, real);

        while(n--){
            scanf("%c", l);
            scanf("%[^\n\r]", phrase);

            int i, j;
            for(i = 0; i != strlen(phrase); i++){
                for(j = 0; j != c; j++){
                    if(phrase[i] == tolower(real[j])){
                        phrase[i] = tolower(fake[j]);
                    }else if(phrase[i] == real[j]){
                        phrase[i] = fake[j];
                    }else if(phrase[i] == tolower(fake[j])){
                        phrase[i] = tolower(real[j]);
                    }else if(phrase[i] == fake[j]){
                        phrase[i] = real[j];
                    }
                }
            }
            printf("%s\n", phrase);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int t, s, r, i;
    scanf("%d", &t);
    char Sheldon[8], Raj[8];
    for(i = 1; i != t + 1; i++){
        scanf("%s %s", Sheldon, Raj);
        printf("Caso #%d: ", i); 
        if(Sheldon[0] == 'p' && Sheldon[1] == 'a'){
            s = 0;
        }else if(Sheldon[0] == 'p' && Sheldon[1] == 'e'){
            s = 1;
        }else if(Sheldon[0] == 'l'){
            s = 2;
        }else if(Sheldon[0] == 't'){
            s = 3;
        }else if(Sheldon[0] == 'S'){
            s = 4;
        }

        if(Raj[0] == 'p' && Raj[1] == 'a'){
            r = 0;
        }else if(Raj[0] == 'p' && Raj[1] == 'e'){
            r = 1;
        }else if(Raj[0] == 'l'){
            r = 2;
        }else if(Raj[0] == 't'){
            r = 3;
        }else if(Raj[0] == 'S'){
            r = 4;
        }

        if(s == r){
            printf("De novo!\n");
        }else if((r == 0 && (s == 4 || s == 1) || (r == 3 && (s == 0 || s == 2) || (r == 1 && (s == 3 || s == 2) || (r == 2 && (s == 0 || s == 4) || (r == 4 && (s == 1 || s == 3))))))){
            printf("Raj trapaceou!\n");
        }else{
            printf("Bazinga!\n");
        }

    }
    return 0;
}

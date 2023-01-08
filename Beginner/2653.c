#include <stdio.h>
#include <string.h>

int main(){
    int index = 0, j = 0;
    char box[100000][10], s[100000]; 
    while(1){
        if(scanf("%s", s) == EOF){
            break;
        }
        
        int i, c = 0;
        for(i = 0; i != index; i++){
            if(strcmp(box[i], s) == 0){
                c++;
            }
        }

        if(c == 0){
            strcpy(box[index], s);
            index++;
            j++;
        }
    }   

    printf("%d\n", j);
    return 0;
}

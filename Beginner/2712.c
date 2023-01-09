#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char p[10], c;
        scanf("%c", &c);
        scanf("%[^\n\r]", p);

        if(strlen(p) != 8 || (p[0] >= 'a' && p[0] <= 'z') || (p[1] >= 'a' && p[1] <= 'z') || (p[2] >= 'a' && p[2] <= 'z') 
                || p[3] != '-' || (p[4] >= 'A' && p[4] <= 'z') || (p[5] >= 'A' && p[5] <= 'z') || (p[6] >= 'A' && p[6] <= 'z')
                || (p[7] >= 'A' && p[7] <= 'z') || (p[0] >= '1' && p[0] <= '9') || (p[1] >= '1' && p[1] <= '9') 
                || (p[2] >= '1' && p[2] <= '9')){
            printf("FAILURE\n");
        }else{
            if(p[7] == '1' || p[7] == '2'){
                printf("MONDAY\n");
            }else if(p[7] == '3' || p[7] == '4'){
                printf("TUESDAY\n");
            }else if(p[7] == '5' || p[7] == '6'){
                printf("WEDNESDAY\n");
            }else if(p[7] == '7' || p[7] == '8'){
                printf("THURSDAY\n");
            }else{
                printf("FRIDAY\n");
            }
        }
    }

    return 0;
}

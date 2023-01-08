#include <stdio.h>
#include <string.h>

int main(){
    int t, power;
    char name[7];
    scanf("%d", &t);
    while(t--){
        scanf("%s %d", name, &power);
        if(strcmp(name, "Thor") == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        } 
    }
    return 0;
}

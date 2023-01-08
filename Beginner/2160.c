#include <stdio.h>

int main(){
    char name[500] = "------------------------------------------------------------------------------------------";
    int t = 2;

    while(t--){
        fgets(name, 500, stdin);
        if(name[82] != '-'){
            printf("NO\n");
            break;
        }else{
            printf("YES\n");
            break; 
        }
    }
    return 0;
}

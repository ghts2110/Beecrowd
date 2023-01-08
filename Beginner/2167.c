#include <stdio.h>

int main(){
    int t, num, lastnum, cont = 2, value = 0, f = 0; 
    scanf("%d", &t);
    
    scanf("%d", &lastnum);
    t--;

    while(t--){
        scanf("%d", &num);
        if(num < lastnum && f == 0){
            value = cont;
            f = 1;
        }else{
            cont++;
            lastnum = num;
        }
    }



    return 0; 
}

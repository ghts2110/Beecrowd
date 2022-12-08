#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int mmc1, mmc2, d1, d2, x, y, z, w;
        char operation, division;
        scanf("%d %c %d %c %d %c %d", &x, &division, &y, &operation, &z, &division, &w);
        if(operation == '+'){
            d1 = (x * w) + (z * y);
            mmc1 = y * w;
        }else if(operation == '-'){
            d1 = (x * w) - (z * y);
            mmc1 = y * w;
        }else if(operation == '*'){
            d1 = x * z;
            mmc1 = y * w;
        }else{
            d1 = x * w;
            mmc1 = z * y; 
        }
        
        if(d1 < mmc1){
            mmc2 = abs(d1);
        }else{
            mmc2 = abs(mmc1);
        }
        if(mmc2 == 0){
            if(d1 > mmc1){
                mmc2 = d1;
            }else{
                mmc2 = mmc1;
            }
        }
        while(1){
            if(d1 % mmc2 == 0 && mmc1 % mmc2 == 0){
                break;
            }
            mmc2--;
        }

        printf("%d/%d = %d/%d\n", d1, mmc1, d1/mmc2, mmc1/mmc2);
    }
}

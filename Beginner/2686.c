#include <stdio.h>

int main(){
    float t;
    int h, m, s;
    while(scanf("%f", &t) != EOF){
        int l = t/1;

        if(t < 90 || t >= 360){
            printf("Bom Dia!!\n");
            h = 6;
            if(t >= 360){
                l -= 360;
            }
            m = l * 4;
            l = t;
            l = (t * 100)-(l*100);
            s = (l/10)*24;
            s += (l%10)*2;

            if(l%10 == 3 || l%10 == 4){
                s++;
            }else if(l%10 == 5 || l%10 == 6 || l%10 == 7){
                s += 2;
            }else if(l%10 >= 8){
                s += 3;
            } 

            if(s >= 60){
                m += s/60;
                s %= 60;
            }

            if(m >= 60){
                h += m/60;
                m %= 60;
            }
        }else if(t < 180){
            printf("Boa Tarde!!\n");
            h = 12;
            l -= 90;
            m = l * 4;
            l = t;
            l = (t * 100)-(l*100);
            s = (l/10)*24;
            s += (l%10)*2;

            if(l%10 == 3 || l%10 == 4){
                s++;
            }else if(l%10 == 5 || l%10 == 6 || l%10 == 7){
                s += 2;
            }else if(l%10 >= 8){
                s += 3;
            }

            if(s >= 60){
                m += s/60;
                s %= 60;
            }

            if(m >= 60){
                h += m/60;
                m %= 60;
            }
        }else if(t < 270){
            printf("Boa Noite!!\n");
            h = 18;
            l -= 180;
            m = l * 4;
            l = t;
            l = (t * 100)-(l*100);
            s = (l/10)*24;
            s += (l%10)*2;

            if(l%10 == 3 || l%10 == 4){
                s++;
            }else if(l%10 == 5 || l%10 == 6 || l%10 == 7){
                s += 2;
            }else if(l%10 >= 8){
                s += 3;
            }

            if(s >= 60){
                m += s/60;
                s %= 60;
            }

            if(m >= 60){
                h += m/60;
                m %= 60;
            }
        }else{
            printf("De Madrugada!!\n");
            h = 0;
            l -= 270;
            m = l * 4;
            l = t;
            l = (t * 100)-(l*100);
            s = (l/10)*24;
            s += (l%10)*2;

            if(l%10 == 3 || l%10 == 4){
                s++;
            }else if(l%10 == 5 || l%10 == 6 || l%10 == 7){
                s += 2;
            }else if(l%10 >= 8){
                s += 3;
            }

            if(s >= 60){
                m += s/60;
                s %= 60;
            }

            if(m >= 60){
                h += m/60;
                m %= 60;
            }
        }

        if(h < 10){
            printf("0%d:", h);
        }else{
            printf("%d:", h);
        }

        if(m < 10){
            printf("0%d:", m);
        }else{
            printf("%d:", m);
        }

        if(s < 10){
            printf("0%d\n", s);
        }else{
            printf("%d\n", s);
        }

    }

    return 0;
}

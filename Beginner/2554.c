#include <stdio.h>

int main(){
    int people, datas;

    while(scanf("%d %d", &people, &datas) != EOF){
        int day, month, year, bestday = 0, bestmonth = 0, bestyear = 10000;

        while(datas--){
            int cont = 0, i;
            scanf("%d/%d/%d", &day, &month, &year);

            for(i = 0; i != people; i++){
                int n;
                scanf("%d", &n);

                cont += n;
            }

            if(cont == people){
                if(year < bestyear){
                    bestday = day;
                    bestmonth = month;
                    bestyear = year;
                }else if(year == bestyear){
                    if(month < bestmonth){
                        bestday = day;
                        bestmonth = month;
                        bestyear = year;
                    }else if(month == bestmonth){
                        if(day < bestday){
                            bestday = day;
                            bestmonth = month;
                            bestyear = year;
                        }
                    }
                }
            }
        }
       
        if(bestyear == 10000){
            printf("Pizza antes de FdI\n");
        }else{
            printf("%d/%d/%d\n", bestday, bestmonth, bestyear);
        }
    }

    return 0;
}

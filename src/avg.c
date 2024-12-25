#include "teacher.h"
void getavg(TEA tea[]) {
    int i;
    float sum1=0,sum2=0,sum3=0;
    for (i=0;i<humans;i++) {
        sum1+=tea[i].age;
        sum2+=tea[i].salary;
        sum3+=tea[i].experience;
    }
    tea[199].age=sum1*1.0/humans;
    tea[199].salary=sum2*1.0/humans;
    tea[199].experience=sum3*1.0/humans;
}
void showavg(TEA tea[]) {
    printf("%-8s%-20s%-8s%-8.1f%-16s%-8.1f%-8.1f%-22s\n","相关信息"," "," ",tea[199].age," ",tea[199].salary,tea[199].experience," ");

}
#include "teacher.h"
void getavg(TEA tea[]) {
    int i;
    float sum1=0,sum2=0,sum3=0;
    for (i=0;i<humans;i++) {
        sum1+=tea[i].age;
        sum2+=tea[i].salary;
        sum3+=tea[i].experience;
    }
    tea[humans].age=sum1*1.0/humans;
    tea[humans].salary=sum2*1.0/humans;
    tea[humans].experience=sum3*1.0/humans;
}
void showavg(TEA tea[]) {
    printf("%-8s%-20s%-8s%-8.1f%-16s%-8.1f%-8.1f%-22s\n","平均信息"," "," ",tea[humans].age," ",tea[humans].salary,tea[humans].experience," ");

}
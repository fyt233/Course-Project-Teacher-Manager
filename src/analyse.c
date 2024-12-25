#include "teacher.h"


void analyse(TEA tea[]) {
    int i,male=0;
    float ratio=0;
    for (i=0;i<humans;i++) {
        if (strcmp(tea[i].gender,"男")==0) {
            male++;
        }
    }
    ratio=male*1.0/(humans-male)*1.0;
    system("cls");
    printf("有%d名男教师，%d名女教师\n",male,humans-male);
    printf("男/女=%.1f\n",ratio);
    getavg(tea);
    int age,salary,experience;
    age=salary=experience=0;
    for (i=0;i<humans;i++) {
        if (tea[i].age>tea[199].age) age++;
        if (tea[i].salary>tea[199].salary) salary++;
        if (tea[i].experience>tea[199].experience) experience++;
    }
    printf("高于平均年龄的教师有%d名,占总人数的%.1f%%\n",age,age*1.0/humans*100.0);
    printf("高于平均工资的教师有%d名,占总人数的%.1f%%\n",salary,salary*1.0/humans*100.0);
    printf("高于平均工时的教师有%d名,占总人数的%.1f%%\n",experience,experience*1.0/humans*100.0);

}
#include "teacher.h"


void analyse(TEA tea[]) {
    int i,male=0;
    float ratio=0;
    for (i=0;i<humans;i++) {
        if (strcmp(tea[i].gender,"��")==0) {
            male++;
        }
    }
    ratio=male*1.0/(humans-male)*1.0;
    system("cls");
    printf("��%d���н�ʦ��%d��Ů��ʦ\n",male,humans-male);
    printf("��/Ů=%.1f\n",ratio);
    getavg(tea);
    int age,salary,experience;
    age=salary=experience=0;
    for (i=0;i<humans;i++) {
        if (tea[i].age>tea[199].age) age++;
        if (tea[i].salary>tea[199].salary) salary++;
        if (tea[i].experience>tea[199].experience) experience++;
    }
    printf("����ƽ������Ľ�ʦ��%d��,ռ��������%.1f%%\n",age,age*1.0/humans*100.0);
    printf("����ƽ�����ʵĽ�ʦ��%d��,ռ��������%.1f%%\n",salary,salary*1.0/humans*100.0);
    printf("����ƽ����ʱ�Ľ�ʦ��%d��,ռ��������%.1f%%\n",experience,experience*1.0/humans*100.0);

}
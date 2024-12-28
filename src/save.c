#include "teacher.h"

void savetxt(TEA tea[]) {
    FILE *fp;
    fp = fopen("teacher.txt", "w");
    if (fp == NULL) {
        printf("�ļ���ʧ�ܣ�\n");
        return;
    }
    int i;
    for (i=0;i<humans;i++) {
        fprintf(fp,"%s %d %s %.0f %s %.0f %.0f %d\n",tea[i].name,tea[i].id,tea[i].gender,tea[i].age,tea[i].job,tea[i].salary,tea[i].experience,tea[i].phonenum);
    }
    getavg(tea);
    fprintf(fp,"ƽ�����䣺%.1f,ƽ�����䣺%.1f,ƽ��н�ʣ�%.1f\n",tea[199].age,tea[199].experience,tea[199].salary);
    printf("�ļ�д��ɹ���");
    fclose(fp);
}

void savebin(TEA tea[]) {
    FILE *fp;
    int i;
    fp=fopen("teacher.dat","wb");
    if (fp == NULL) {
        printf("�ļ���ʧ�ܣ�\n");
        return;
    }
    for (i=0;i<humans;i++) {
        if (fwrite(&tea[i],sizeof(TEA),1,fp)!=1) {
            printf("�ļ�д�����\n");
            return;
        }
    }
    printf("�ļ�д��ɹ���");
    fclose(fp);
}
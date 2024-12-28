#include "teacher.h"


int loadfromtxt(TEA tea[]) {
    int i = 0;
    FILE *fp;
    fp = fopen("teacher.txt", "r");
    if (fp == NULL) {
        printf("�ļ���ʧ�ܣ�");
        return;
    }
    while (!feof(fp)) {
        fscanf(fp, "%s%d%s%f%s%f%f%d", tea[i].name, &tea[i].id, tea[i].gender, &tea[i].age, tea[i].job, &tea[i].salary,
               &tea[i].experience, &tea[i].phonenum);
        i++;
    }
    printf("�ļ���ȡ�ɹ�������%d����¼��\n", i);
    fclose(fp);
    return i;
}

int loadfrombin(TEA tea[]) {
    FILE *fp;
    int i = 0;
    fp = fopen("teacher.dat", "rb");
    if (fp == NULL) {
        printf("�ļ���ʧ�ܣ�\n");
        return;
    }
    while (!feof(fp)) {
        if (fread(&tea[i], sizeof(TEA), 1, fp) == 1) {
            i++;
        }
    }
    fclose(fp);
    printf("�ļ���ȡ�ɹ�������%d����¼��\n", i);
    return i; //����
}

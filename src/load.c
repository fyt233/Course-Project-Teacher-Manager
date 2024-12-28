#include "teacher.h"


int loadfromtxt(TEA tea[]) {
    int i = 0;
    FILE *fp;
    fp = fopen("teacher.txt", "r");
    if (fp == NULL) {
        printf("文件打开失败！");
        return;
    }
    while (!feof(fp)) {
        fscanf(fp, "%s%d%s%f%s%f%f%d", tea[i].name, &tea[i].id, tea[i].gender, &tea[i].age, tea[i].job, &tea[i].salary,
               &tea[i].experience, &tea[i].phonenum);
        i++;
    }
    printf("文件读取成功，共有%d条记录！\n", i);
    fclose(fp);
    return i;
}

int loadfrombin(TEA tea[]) {
    FILE *fp;
    int i = 0;
    fp = fopen("teacher.dat", "rb");
    if (fp == NULL) {
        printf("文件打开失败！\n");
        return;
    }
    while (!feof(fp)) {
        if (fread(&tea[i], sizeof(TEA), 1, fp) == 1) {
            i++;
        }
    }
    fclose(fp);
    printf("文件读取成功，共有%d条记录！\n", i);
    return i; //人数
}

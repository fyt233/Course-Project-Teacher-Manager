#include "teacher.h"

void savetxt(TEA tea[]) {
    FILE *fp;
    fp = fopen("teacher.txt", "w");
    if (fp == NULL) {
        printf("文件打开失败！\n");
        return;
    }
    int i;
    for (i=0;i<humans;i++) {
        fprintf(fp,"%s %d %s %.0f %s %.0f %.0f %d\n",tea[i].name,tea[i].id,tea[i].gender,tea[i].age,tea[i].job,tea[i].salary,tea[i].experience,tea[i].phonenum);
    }
    getavg(tea);
    fprintf(fp,"平均年龄：%.1f,平均工龄：%.1f,平均薪资：%.1f\n",tea[199].age,tea[199].experience,tea[199].salary);
    printf("文件写入成功！");
    fclose(fp);
}

void savebin(TEA tea[]) {
    FILE *fp;
    int i;
    fp=fopen("teacher.dat","wb");
    if (fp == NULL) {
        printf("文件打开失败！\n");
        return;
    }
    for (i=0;i<humans;i++) {
        if (fwrite(&tea[i],sizeof(TEA),1,fp)!=1) {
            printf("文件写入错误！\n");
            return;
        }
    }
    printf("文件写入成功！");
    fclose(fp);
}
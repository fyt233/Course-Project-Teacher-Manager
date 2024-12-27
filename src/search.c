#include "teacher.h"
void searchbyname(TEA tea[]) {
    int i,flag=0;
    system("cls");
    printf("请输入要查询的姓名：");
    char name[100];
    scanf("%s", name);

    for (i=0;i<=humans;i++) {
        if (strcmp(tea[i].name, name) == 0) {
            showthetitle();
            showone(tea[i]);
            flag=1;
        }
    }
    if (flag==1) {
        return ;
    }
    else {
        printf("未找到！");
        return ;
    }
}


void searchbyid(TEA tea[]) {
    int i,flag=0;
    system("cls");
    printf("请输入要查询的工号：");
    int id;
    scanf("%d", &id);

    for (i=0;i<=humans;i++) {
        if (id==tea[i].id) {
            showthetitle();
            showone(tea[i]);
            flag=1;
        }
    }
    if (flag==1) {
        return ;
    }
    else {
        printf("未找到！");
        return ;
    }
}

void searchbyphone(TEA tea[]) {
    int i,flag=0;
    system("cls");
    printf("请输入要查询的联系方式：");
    int num;
    scanf("%d", &num);

    for (i=0;i<=humans;i++) {
        if (num==tea[i].phonenum) {
            showthetitle();
            showone(tea[i]);
            flag=1;
        }
    }
    if (flag==1) {
        return ;
    }
    else {
        printf("未找到！");
        return ;
    }
}

void searchbyexp(TEA tea[]) {
    int i,flag=0;
    system("cls");
    int exp;
    printf("请输入工龄：");
    scanf("%d", &exp);
    for (i=0;i<=humans;i++) {
        if (exp==tea[i].experience) {
            if (flag==0) {
                showthetitle();
            }
            showone(tea[i]);
            flag=1;
        }
    }
    if (flag==1) {
        return ;
    }
    else {
        printf("未找到！");
        return ;
    }
}
#include "teacher.h"
void searchbyname(TEA tea[]) {
    int i,flag=0;
    system("cls");
    printf("������Ҫ��ѯ��������");
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
        printf("δ�ҵ���");
        return ;
    }
}


void searchbyid(TEA tea[]) {
    int i,flag=0;
    system("cls");
    printf("������Ҫ��ѯ�Ĺ��ţ�");
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
        printf("δ�ҵ���");
        return ;
    }
}

void searchbyphone(TEA tea[]) {
    int i,flag=0;
    system("cls");
    printf("������Ҫ��ѯ����ϵ��ʽ��");
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
        printf("δ�ҵ���");
        return ;
    }
}

void searchbyexp(TEA tea[]) {
    int i,flag=0;
    system("cls");
    int exp;
    printf("�����빤�䣺");
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
        printf("δ�ҵ���");
        return ;
    }
}
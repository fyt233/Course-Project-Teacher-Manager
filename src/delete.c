#include "teacher.h"

void delete(TEA tea[]) {
    system("cls");
    printf("������Ҫɾ���Ľ�ʦ������/����\n");
    int select, id;
    int i, j;
    char name[40];
    printf("1.����\n2.����\n������(1/2):\n");
    scanf("%d", &select);
    switch (select) {
        case 1:
            system("cls");
            printf("������������");
            scanf("%s", name);
            for (i = 0; i < humans; i++) {
                if (strcmp(tea[i].name, name) == 0) {
                    if (i == humans - 1) {
                        humans--;
                        printf("��������ɣ�\n");
                        return;
                    }
                    for (j = i + 1; j < humans; j++, i++) {
                        tea[i] = tea[j];
                    }
                    humans--;
                    printf("��������ɣ�\n");
                    return;
                }
            }
            printf("δ�ҵ���\n");
            return;
            break;
        case 2:
            system("cls");
            printf("�����빤�ţ�");
            scanf("%d", &id);
            for (i = 0; i < humans; i++) {
                if (id == tea[i].id) {
                    if (i == humans - 1) {
                        humans--;
                        printf("��������ɣ�\n");
                        return;
                    }
                    for (j = i + 1; j < humans; j++, i++) {
                        tea[i] = tea[j];
                        humans--;
                        printf("��������ɣ�\n");
                        return;
                    }
                }
            }
            printf("δ�ҵ���\n");
            return;
            break;
        default:
            system("cls");
            printf("�������\n");
            return;
    }
}

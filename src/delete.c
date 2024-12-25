#include "teacher.h"

void delete(TEA tea[]) {
    system("cls");
    printf("请输入要删除的教师的姓名/工号\n");
    int select, id;
    int i, j;
    char name[40];
    printf("1.姓名\n2.工号\n请输入(1/2):\n");
    scanf("%d", &select);
    switch (select) {
        case 1:
            system("cls");
            printf("请输入姓名：");
            scanf("%s", name);
            for (i = 0; i < humans; i++) {
                if (strcmp(tea[i].name, name) == 0) {
                    if (i == humans - 1) {
                        humans--;
                        printf("任务已完成！\n");
                        return;
                    }
                    for (j = i + 1; j < humans; j++, i++) {
                        tea[i] = tea[j];
                    }
                    humans--;
                    printf("任务已完成！\n");
                    return;
                }
            }
            printf("未找到！\n");
            return;
            break;
        case 2:
            system("cls");
            printf("请输入工号：");
            scanf("%d", &id);
            for (i = 0; i < humans; i++) {
                if (id == tea[i].id) {
                    if (i == humans - 1) {
                        humans--;
                        printf("任务已完成！\n");
                        return;
                    }
                    for (j = i + 1; j < humans; j++, i++) {
                        tea[i] = tea[j];
                        humans--;
                        printf("任务已完成！\n");
                        return;
                    }
                }
            }
            printf("未找到！\n");
            return;
            break;
        default:
            system("cls");
            printf("输入错误！\n");
            return;
    }
}

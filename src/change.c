#include "teacher.h"

void change(TEA tea[]) {
    system("cls");
    printf("请输入要修改教师的工号/姓名\n");
    printf("1.输入工号\n");
    printf("2.输入姓名\n请输入(1/2):");
    int select, i, id;
    char name[40];
    scanf("%d", &select);
    switch (select) {
        case 1:
            system("cls");
        printf("请输入工号：\n");
        scanf("%d", &id);
        for (i = 0; i < humans; i++) {
            if (tea[i].id == id) {
                printf("找到与之匹配的教师信息！您要找的是不是：\n");
                showthetitle();
                showone(tea[i]);
                printf("\n\n您想修改哪一个项目？\n");
                // "姓名","工号","性别","年龄","职称","工资","工龄","联系方式"
                printf("1.姓名\n2.工号\n3.年龄\n4.职称\n5.工资\n6.工龄\n7.联系方式\n");
                int select2;
                scanf("%d", &select2);
                switch (select2) {
                    case 1:
                        system("cls");
                    printf("请输入新的姓名：\n");
                    scanf("%s", tea[i].name);
                    break;
                    case 2:
                        system("cls");
                    printf("请输入新的工号\n");
                    scanf("%d", &tea[i].id);
                    break;
                    case 3:
                        system("cls");
                    printf("请输入新的年龄：\n");
                    scanf("%f", &tea[i].age);
                    break;
                    case 4:
                        system("cls");
                    printf("请输入新的职称：\n");
                    scanf("%s", tea[i].job);
                    break;
                    case 5:
                        system("cls");
                    printf("请输入新的工资：\n");
                    scanf("%f", &tea[i].salary);
                    break;
                    case 6:
                        system("cls");
                    printf("请输入新的工龄：\n");
                    scanf("%f", &tea[i].experience);
                    break;
                    case 7:
                        system("cls");
                    printf("请输入新的联系方式：\n");
                    scanf("%d", &tea[i].phonenum);
                    break;
                    default:
                        printf("输入错误！");
                }
                return;
            }
        }

        printf("未找到与之匹配的教师信息！请重新确认！\n");
        return;


            break;
        case 2:
            system("cls");
            printf("请输入姓名：\n");
            scanf("%s", name);
            for (i = 0; i < humans; i++) {
                if (strcmp(tea[i].name, name) == 0) {
                    printf("找到与之匹配的教师信息！您要找的是不是：\n");
                    showthetitle();
                    showone(tea[i]);
                    printf("\n\n您想修改哪一个项目？\n");
                    // "姓名","工号","性别","年龄","职称","工资","工龄","联系方式"
                    printf("1.姓名\n2.工号\n3.年龄\n4.职称\n5.工资\n6.工龄\n7.联系方式\n");
                    int select2;
                    scanf("%d", &select2);
                    switch (select2) {
                        case 1:
                            system("cls");
                        printf("请输入新的姓名：\n");
                        scanf("%s", tea[i].name);
                        break;
                        case 2:
                            system("cls");
                        printf("请输入新的工号\n");
                        scanf("%d", &tea[i].id);
                        break;
                        case 3:
                            system("cls");
                        printf("请输入新的年龄：\n");
                        scanf("%f", &tea[i].age);
                        break;
                        case 4:
                            system("cls");
                        printf("请输入新的职称：\n");
                        scanf("%s", tea[i].job);
                        break;
                        case 5:
                            system("cls");
                        printf("请输入新的工资：\n");
                        scanf("%f", &tea[i].salary);
                        break;
                        case 6:
                            system("cls");
                        printf("请输入新的工龄：\n");
                        scanf("%f", &tea[i].experience);
                        break;
                        case 7:
                            system("cls");
                        printf("请输入新的联系方式：\n");
                        scanf("%d", &tea[i].phonenum);
                        break;
                        default:
                            printf("输入错误！");
                    }
                    return;
                }
            }
                    printf("未找到与之匹配的教师信息！请重新确认！\n");
                    return;


            break;
        default:
            system("cls");
            printf("输入错误！\n");
            return;
    }
}

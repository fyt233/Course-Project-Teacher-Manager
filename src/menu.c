#include "teacher.h"
void show_menu() {
    system("cls");
    printf("请输入教师人数：");
    scanf("%d",&humans);
    printf("----------------教师管理系统--------------\n");
    printf("\t\t1.添加教师信息\n");
    printf("\t\t2.显示教师信息\n");
    printf("\t\t3.修改教师信息\n");
    printf("\t\t4.删除教师信息\n");
    printf("\t\t0.退出程序\n");
}
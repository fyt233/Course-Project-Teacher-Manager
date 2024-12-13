#include "teacher.h"
void getPassword(char password[], int maxLength) {
    int i = 0;
    while (1) {
        char ch = getch();
        if (ch == '\r') {  // '\r'代表回车键，即用户输入结束
            password[i] = '\0';
            break;
        }
        if (ch == '\b') {  // '\b'代表退格键，用于删除已输入的字符
            if (i > 0) {
                i--;
                printf("\b \b");  // 擦除屏幕上显示的星号
            }
            continue;
        }
        if (i < maxLength) {
            password[i++] = ch;
            printf("*");  // 用星号替代实际输入的字符显示
        }
    }
}


void login() {
    int chance=3;
    char password[50]={"admin"};
    char cinpassword[50];
    system("cls");
    printf("----------------------------------------\n");
    printf("\t欢迎登录教师管理系统\n");
    printf("----------------------------------------\n");
    sleep(1);
    // system("cls");
    // printf("--------\n");
    // sleep(1);
    // system("cls");
    // printf("----------------------\n");
    // sleep(1);
    system("cls");
    printf("----------------教师管理系统--------------\n");
    printf("请输入管理员密码\n");
    printf("用户名：admin\n");
    printf("密码：");

    for (chance=3;chance>=0;chance--) {
        getPassword(cinpassword, 50);
        if (strcmp(cinpassword, password) == 0) {
            printf("\n密码正确！即将进入系统");
            sleep(1);
            break;
        }
        else {
            printf("\n密码错误，您还剩%d次机会\n",chance);

            if (chance==0) {
                printf("-----------------------------------\n");
                printf("\t程序即将退出！\n");
                printf("-----------------------------------\n");
                sleep(1);
                exit(0);
            }
            printf("请输入密码：");
        }

    }



}
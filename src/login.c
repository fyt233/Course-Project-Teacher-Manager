#include "teacher.h"
void getPassword(char password[], int maxLength) {
    int i = 0;
    while (1) {
        char ch = getch();
        if (ch == '\r') {  // '\r'����س��������û��������
            password[i] = '\0';
            break;
        }
        if (ch == '\b') {  // '\b'�����˸��������ɾ����������ַ�
            if (i > 0) {
                i--;
                printf("\b \b");  // ������Ļ����ʾ���Ǻ�
            }
            continue;
        }
        if (i < maxLength) {
            password[i++] = ch;
            printf("*");  // ���Ǻ����ʵ��������ַ���ʾ
        }
    }
}


void login() {
    int chance=3;
    char password[50]={"admin"};
    char cinpassword[50];
    system("cls");
    printf("----------------------------------------\n");
    printf("\t��ӭ��¼��ʦ����ϵͳ\n");
    printf("----------------------------------------\n");
    sleep(1);
    // system("cls");
    // printf("--------\n");
    // sleep(1);
    // system("cls");
    // printf("----------------------\n");
    // sleep(1);
    system("cls");
    printf("----------------��ʦ����ϵͳ--------------\n");
    printf("���������Ա����\n");
    printf("�û�����admin\n");
    printf("���룺");

    for (chance=3;chance>=0;chance--) {
        getPassword(cinpassword, 50);
        if (strcmp(cinpassword, password) == 0) {
            printf("\n������ȷ����������ϵͳ");
            sleep(1);
            break;
        }
        else {
            printf("\n�����������ʣ%d�λ���\n",chance);

            if (chance==0) {
                printf("-----------------------------------\n");
                printf("\t���򼴽��˳���\n");
                printf("-----------------------------------\n");
                sleep(1);
                exit(0);
            }
            printf("���������룺");
        }

    }



}
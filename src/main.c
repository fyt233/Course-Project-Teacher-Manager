#include "teacher.h"

TEA tea[200];
int humans = 0;
/*
 *����׼��
 *1.�����½��ļ��ǵø�ΪGB2312
 *2.��Զ�ǵ�������
 *3.��Щע�����Ҫ�ǵ÷ų�����������������������login()����������
 *4.
 */
int main() {
    // login();
    // gethuman();
    int select, flag = 1;
    while (flag) {
        show_menu();
        scanf("%d", &select);
        switch (select) {
            case 1:
                // addinfo(tea[0]);
                addinfomany(tea);
                break;
            case 2:
                showall(tea);
                break;
            case 3:
                change(tea);
                break;
            case 4:
                delete(tea);
            // exit(0);
                break;
            case 5:
                getavg(tea);
                printf("ƽ�������Ѽ�����ϣ�\n");
                break;
            case 6:
                analyse(tea);
                printf("���ݷ�������ɣ�\n");
                break;
            case 7:
                system("cls");
                printf("����������ʽ��\n1.����\n2.����\n");
                printf("(1/2):");
                int sel;
                scanf("%d", &sel);
                if (sel == 1) {
                    sortbysalarydec(tea);
                    printf("��������ɣ�");
                } else if (sel == 2) {
                    sortbysalaryasc(tea);
                    printf("��������ɣ�");
                } else {
                    printf("����");
                }
                break;
            case 8:
                system("cls");
                printf("����������ʽ��\n1.����\n2.����\n");
                printf("(1/2):");
                int sel1;
                scanf("%d", &sel1);
                if (sel1 == 1) {
                    sortbyexpdec(tea);
                    printf("��������ɣ�");
                }
                else if (sel1 == 2) {
                    sortbyexpasc(tea);
                    printf("��������ɣ�");
                }
                else {
                    printf("����");
                }
            break;
            case 9:
                sortbyno(tea);
                printf("������ɣ�");
            break;
            case 10:
                searchbyname(tea);
            break;
            case 11:
                searchbyid(tea);
            break;
            case 12:
                searchbyphone(tea);
            break;
            case 13:
                searchbyexp(tea);
            break;
            case 14:
                humans+=loadfromtxt(tea);
            break;
            case 15:
                humans+=loadfromtxt(tea);
            break;
            case 16:
                savetxt(tea);
            break;
            case 17:
                savebin(tea);
            break;
            case 0:
                exit(0);
        }
        system("pause");
        system("cls");
    }
    return 0;
}

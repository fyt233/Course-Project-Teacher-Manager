#include "teacher.h"

TEA tea[100];
int humans;
/*
 *����׼��
 *1.�����½��ļ��ǵø�ΪGB2312
 *2.��Զ�ǵ�������
 *3.��Щע�����Ҫ�ǵ÷ų�����������������������login()����������
 *4.
 */
int main() {
    // login();
    gethuman();
    int select,flag=1;
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
            case 0:
                exit(0);
        }
        system("pause");
        system("cls");
    }
    return 0;
}

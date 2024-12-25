#include "teacher.h"

TEA tea[100];
int humans;
/*
 *几个准则：
 *1.所有新建文件记得改为GB2312
 *2.永远记得先声明
 *3.有些注释最后要记得放出来！！！！！！！！比如login()！！！！！
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
                printf("平均数据已计算完毕！\n");
            break;
            case 0:
                exit(0);
        }
        system("pause");
        system("cls");
    }
    return 0;
}

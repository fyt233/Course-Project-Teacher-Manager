#include "teacher.h"

TEA tea[200];
int humans = 0;
/*
 *几个准则：
 *1.所有新建文件记得改为GB2312
 *2.永远记得先声明
 *3.有些注释最后要记得放出来！！！！！！！！比如login()！！！！！
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
                printf("平均数据已计算完毕！\n");
                break;
            case 6:
                analyse(tea);
                printf("数据分析已完成！\n");
                break;
            case 7:
                system("cls");
                printf("请输入排序方式：\n1.降序\n2.升序\n");
                printf("(1/2):");
                int sel;
                scanf("%d", &sel);
                if (sel == 1) {
                    sortbysalarydec(tea);
                    printf("排序已完成！");
                } else if (sel == 2) {
                    sortbysalaryasc(tea);
                    printf("排序已完成！");
                } else {
                    printf("错误！");
                }
                break;
            case 8:
                system("cls");
                printf("请输入排序方式：\n1.降序\n2.升序\n");
                printf("(1/2):");
                int sel1;
                scanf("%d", &sel1);
                if (sel1 == 1) {
                    sortbyexpdec(tea);
                    printf("排序已完成！");
                }
                else if (sel1 == 2) {
                    sortbyexpasc(tea);
                    printf("排序已完成！");
                }
                else {
                    printf("错误！");
                }
            break;
            case 9:
                sortbyno(tea);
                printf("排序完成！");
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

#include "teacher.h"

TEA tea[100];
int humans;

int main() {
    login();
    show_menu();
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1:
            // addinfo(tea);单个添加，别用
            break;

        case 0:
            exit(0);
    }
    system("pause");

    return 0;
}

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
            // addinfo(tea[0]);
            addinfomany(tea);
            break;
        case 0:
            exit(0);
    }
    system("pause");

    return 0;
}

#include "teacher.h"

void change(TEA tea[]) {
    system("cls");
    printf("������Ҫ�޸Ľ�ʦ�Ĺ���/����\n");
    printf("1.���빤��\n");
    printf("2.��������\n������(1/2):");
    int select, i, id;
    char name[40];
    scanf("%d", &select);
    switch (select) {
        case 1:
            system("cls");
        printf("�����빤�ţ�\n");
        scanf("%d", &id);
        for (i = 0; i < humans; i++) {
            if (tea[i].id == id) {
                printf("�ҵ���֮ƥ��Ľ�ʦ��Ϣ����Ҫ�ҵ��ǲ��ǣ�\n");
                showthetitle();
                showone(tea[i]);
                printf("\n\n�����޸���һ����Ŀ��\n");
                // "����","����","�Ա�","����","ְ��","����","����","��ϵ��ʽ"
                printf("1.����\n2.����\n3.����\n4.ְ��\n5.����\n6.����\n7.��ϵ��ʽ\n");
                int select2;
                scanf("%d", &select2);
                switch (select2) {
                    case 1:
                        system("cls");
                    printf("�������µ�������\n");
                    scanf("%s", tea[i].name);
                    break;
                    case 2:
                        system("cls");
                    printf("�������µĹ���\n");
                    scanf("%d", &tea[i].id);
                    break;
                    case 3:
                        system("cls");
                    printf("�������µ����䣺\n");
                    scanf("%f", &tea[i].age);
                    break;
                    case 4:
                        system("cls");
                    printf("�������µ�ְ�ƣ�\n");
                    scanf("%s", tea[i].job);
                    break;
                    case 5:
                        system("cls");
                    printf("�������µĹ��ʣ�\n");
                    scanf("%f", &tea[i].salary);
                    break;
                    case 6:
                        system("cls");
                    printf("�������µĹ��䣺\n");
                    scanf("%f", &tea[i].experience);
                    break;
                    case 7:
                        system("cls");
                    printf("�������µ���ϵ��ʽ��\n");
                    scanf("%d", &tea[i].phonenum);
                    break;
                    default:
                        printf("�������");
                }
                return;
            }
        }

        printf("δ�ҵ���֮ƥ��Ľ�ʦ��Ϣ��������ȷ�ϣ�\n");
        return;


            break;
        case 2:
            system("cls");
            printf("������������\n");
            scanf("%s", name);
            for (i = 0; i < humans; i++) {
                if (strcmp(tea[i].name, name) == 0) {
                    printf("�ҵ���֮ƥ��Ľ�ʦ��Ϣ����Ҫ�ҵ��ǲ��ǣ�\n");
                    showthetitle();
                    showone(tea[i]);
                    printf("\n\n�����޸���һ����Ŀ��\n");
                    // "����","����","�Ա�","����","ְ��","����","����","��ϵ��ʽ"
                    printf("1.����\n2.����\n3.����\n4.ְ��\n5.����\n6.����\n7.��ϵ��ʽ\n");
                    int select2;
                    scanf("%d", &select2);
                    switch (select2) {
                        case 1:
                            system("cls");
                        printf("�������µ�������\n");
                        scanf("%s", tea[i].name);
                        break;
                        case 2:
                            system("cls");
                        printf("�������µĹ���\n");
                        scanf("%d", &tea[i].id);
                        break;
                        case 3:
                            system("cls");
                        printf("�������µ����䣺\n");
                        scanf("%f", &tea[i].age);
                        break;
                        case 4:
                            system("cls");
                        printf("�������µ�ְ�ƣ�\n");
                        scanf("%s", tea[i].job);
                        break;
                        case 5:
                            system("cls");
                        printf("�������µĹ��ʣ�\n");
                        scanf("%f", &tea[i].salary);
                        break;
                        case 6:
                            system("cls");
                        printf("�������µĹ��䣺\n");
                        scanf("%f", &tea[i].experience);
                        break;
                        case 7:
                            system("cls");
                        printf("�������µ���ϵ��ʽ��\n");
                        scanf("%d", &tea[i].phonenum);
                        break;
                        default:
                            printf("�������");
                    }
                    return;
                }
            }
                    printf("δ�ҵ���֮ƥ��Ľ�ʦ��Ϣ��������ȷ�ϣ�\n");
                    return;


            break;
        default:
            system("cls");
            printf("�������\n");
            return;
    }
}

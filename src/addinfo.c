#include "teacher.h"

void addinfo(TEA *pTea) {
    printf("�����������ʦ�ģ�\n");
    printf("%-8s%-20s%-8s%-8s%-16s%-8s%-8s%-22s\n", "����", "����", "�Ա�", "����", "ְ��", "����", "����", "��ϵ��ʽ");
    scanf("%s%d%s%f%s%f%f%d", pTea->name, &pTea->id, pTea->gender, &pTea->age, pTea->job, &pTea->salary,
          &pTea->experience, &pTea->phonenum);
}

void addinfomany(TEA tea[]) {
    int n;
    printf("��ӵ�������");
    scanf("%d", &n);
    int i;
    // TEA *p = pTea;
    system("cls");
    for (i = humans; i < humans + n; i++) {
        addinfo(&tea[i]);
    }
    humans += n;
}

#include "teacher.h"

void addinfo(TEA tea) {

    printf("�����������ʦ�ģ�\n");
    printf("%-8s%-20s%-8s%-8s%-16s%-8s%-8s%-22s\n","����","����","�Ա�","����","ְ��","����","����","��ϵ��ʽ");
    scanf("%s%d%s%d%s%d%d%d",tea.name,&tea.id,tea.gender,&tea.age,tea.job,&tea.salary,&tea.experience,&tea.phonenum);

}

void addinfomany(TEA tea[]) {
    int i;
    system("cls");
    for (i=0;i<humans;i++) {
        addinfo(tea[i]);
    }
}
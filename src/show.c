#include "teacher.h"
void showone(TEA tea) {

    // "����","����","�Ա�","����","ְ��","����","����","��ϵ��ʽ"
    printf("%-8s%-20d%-8s%-8d%-16s%-8d%-8d%-22d\n",
        tea.name,tea.id,tea.gender,tea.age,tea.job,tea.salary,tea.experience,tea.salary);



}
void showthetitle() {
    printf("%-8s%-20s%-8s%-8s%-16s%-8s%-8s%-22s\n","����","����","�Ա�","����","ְ��","����","����","��ϵ��ʽ");
}
void showall(TEA tea[]) {
    system("cls");
    int i;
    showthetitle();
    for (i=0;i<humans;i++) {
        showone(tea[i]);
    }
}
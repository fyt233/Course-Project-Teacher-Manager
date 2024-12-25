#include "teacher.h"
void showone(TEA tea) {

    // "姓名","工号","性别","年龄","职称","工资","工龄","联系方式"
    printf("%-8s%-20d%-8s%-8.0f%-16s%-8.0f%-8.0f%-22d\n",
        tea.name,tea.id,tea.gender,tea.age,tea.job,tea.salary,tea.experience,tea.phonenum);



}
void showthetitle() {
    printf("%-8s%-20s%-8s%-8s%-16s%-8s%-8s%-22s\n","姓名","工号","性别","年龄","职称","工资","工龄","联系方式");
}
void showall(TEA tea[]) {
    system("cls");
    int i;
    showthetitle();
    for (i=0;i<humans;i++) {
        showone(tea[i]);
    }
    // getavg(tea);
    showavg(tea);

}
#include "teacher.h"

void addinfo(TEA tea) {

    printf("请依次输入教师的：\n");
    printf("%-8s%-20s%-8s%-8s%-16s%-8s%-8s%-22s\n","姓名","工号","性别","年龄","职称","工资","工龄","联系方式");
    scanf("%s%d%s%d%s%d%d%d",tea.name,&tea.id,tea.gender,&tea.age,tea.job,&tea.salary,&tea.experience,&tea.phonenum);

}

void addinfomany(TEA tea[]) {
    int i;
    system("cls");
    for (i=0;i<humans;i++) {
        addinfo(tea[i]);
    }
}
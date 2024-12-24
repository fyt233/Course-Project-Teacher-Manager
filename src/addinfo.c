#include "teacher.h"

void addinfo(TEA *pTea) {

    printf("请依次输入教师的：\n");
    printf("%-8s%-20s%-8s%-8s%-16s%-8s%-8s%-22s\n","姓名","工号","性别","年龄","职称","工资","工龄","联系方式");
    scanf("%s%d%s%d%s%d%d%d",pTea->name,&pTea->id,pTea->gender,&pTea->age,pTea->job,&pTea->salary,&pTea->experience,&pTea->phonenum);

}

void addinfomany(TEA *pTea) {
    int i;
    TEA *p=pTea;
    system("cls");
    for (i=0;i<humans;i++,p++) {
        addinfo(p);
    }
}
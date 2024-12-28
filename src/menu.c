#include "teacher.h"
// void gethuman() {
//     system("cls");
//     printf("请输入教师人数：");
//     scanf("%d",&humans);
// }
void show_menu() {
    system("cls");

    printf("----------------教师管理系统--------------\n");
    printf("\t\t1.添加教师信息\n");
    printf("\t\t2.显示教师信息\n");
    printf("\t\t3.修改教师信息\n");
    printf("\t\t4.删除教师信息\n");
    printf("\t\t5.计算平均数据\n");
    printf("\t\t6.数据分析\n");
    printf("\t\t7.按照工资排序\n");
    printf("\t\t8.按照工龄排序\n");
    printf("\t\t9.按照工号重新排序\n");
    printf("\t\t10.按姓名搜索\n");
    printf("\t\t11.按工号搜索\n");
    printf("\t\t12.按联系方式搜索\n");
    printf("\t\t13.按工龄搜索\n");
    printf("\t\t14.从文件中读取信息（文本格式）\n");
    printf("\t\t15.从文件中读取信息（二进制）\n");
    printf("\t\t16.作为文本文档保存\n");
    printf("\t\t17.作为二进制文件保存\n");
    printf("\t\t0.退出程序\n");
    printf("------------------------------------------\n");
    printf("请输入数字(0-17):");
}
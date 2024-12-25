#ifndef TEACHER_H
#define TEACHER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>
#include <string.h>

//这里开始是结构体
typedef struct teacher {
    char name[40];
    int id;//工号
    char gender[8];//性别
    float age;
    char job[40];//职称
    float salary;
    float experience;//工龄
    int phonenum;//联系方式
}TEA;

extern TEA tea[100];
extern humans;


//声明
void login();
void getPassword(char password[], int maxLength) ;
void show_menu();
void addinfo(TEA *pTea) ;
void addinfomany(TEA *pTea) ;
void showone(TEA tea) ;
void showall(TEA tea[]) ;
void gethuman() ;
void showthetitle() ;
void showavg(TEA tea[]);
void getavg(TEA tea[]);
void change(TEA tea[]) ;
void delete(TEA tea[]);

#endif //TEACHER_H

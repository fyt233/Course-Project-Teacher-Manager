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
    int age;
    int job;//职称
    int salary;
    int experience;//工龄
    int phonenum;//联系方式
}TEA;

extern TEA tea[100];
extern humans;


//声明
void login();
void getPassword(char password[], int maxLength) ;
void show_menu();
void addinfo(TEA tea) ;
void addinfomany(TEA tea[]) ;

#endif //TEACHER_H

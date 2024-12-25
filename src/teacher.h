#ifndef TEACHER_H
#define TEACHER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>
#include <string.h>

//���￪ʼ�ǽṹ��
typedef struct teacher {
    char name[40];
    int id;//����
    char gender[8];//�Ա�
    float age;
    char job[40];//ְ��
    float salary;
    float experience;//����
    int phonenum;//��ϵ��ʽ
}TEA;

extern TEA tea[100];
extern humans;


//����
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

#endif //TEACHER_H

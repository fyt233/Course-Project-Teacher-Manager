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
    int age;
    int job;//ְ��
    int salary;
    int experience;//����
    int phonenum;//��ϵ��ʽ
}TEA;

extern TEA tea[100];
extern humans;


//����
void login();
void getPassword(char password[], int maxLength) ;
void show_menu();
void addinfo(TEA tea) ;
void addinfomany(TEA tea[]) ;

#endif //TEACHER_H

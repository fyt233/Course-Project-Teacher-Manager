#include "teacher.h"

void swap(TEA *a, TEA *b) {
    TEA temp = *a;
    *a = *b;
    *b = temp;
}



void sortbysalarydec(TEA tea[]) {//降序排工资
    int i,j;
    for (i=0;i<humans;i++) {
        for (j=i+1;j<humans;j++) {
            if (tea[i].salary < tea[j].salary) {
                swap(&tea[i], &tea[j]);
            }
        }
    }
}

void sortbysalaryasc(TEA tea[]) {//升序排工资
    int i,j;
    for (i=0;i<humans;i++) {
        for (j=i+1;j<humans;j++) {
            if (tea[i].salary > tea[j].salary) {
                swap(&tea[i], &tea[j]);
            }
        }
    }
}

void sortbyexpasc(TEA tea[]) {
    int i,j;
    for (i=0;i<humans;i++) {
        for (j=i+1;j<humans;j++) {
            if (tea[i].experience > tea[j].experience) {
                swap(&tea[i], &tea[j]);
            }
        }
    }
}

void sortbyexpdec(TEA tea[]) {
    int i,j;
    for (i=0;i<humans;i++) {
        for (j=i+1;j<humans;j++) {
            if (tea[i].experience < tea[j].experience) {
                swap(&tea[i], &tea[j]);
            }
        }
    }
}

void sortbyno(TEA tea[]) {
    int i,j;
    for (i=0;i<humans;i++) {
        for (j=i+1;j<humans;j++) {
            if (tea[i].id>tea[j].id) {
                swap(&tea[i], &tea[j]);
            }
        }
    }
}
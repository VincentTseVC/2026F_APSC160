#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // 2014年 Midterm 1 考试原题 :
    // write a program to decide if a student should be accepted into a course, given the following rules:
    //  - Anyone whose program code is CSC should be allowed into the course
    //  - Students whose program code is MAT or STA require a GPA of 3.0 or higher to enter the course
    //  - Any student with a GPA above 3.5 is allowed in
    //  - Anyone named Vincent should be allowed into the course
    // You may NOT use any if statements, loops or any other elements we have not covered.

    char code[10];
    float gpa;
    char name[32];

    scanf("%s", code);
    scanf("%f", &gpa);
    scanf("%s", name);

    int csc_cond = strcmp(code, "CSC") == 0;

    int cms_cond = (strcmp(code, "STA") == 0 || strcmp(code, "MAT") == 0) && gpa >= 3.0;

    int gpa_cond = gpa > 3.5;

    int name_cond = strcmp(name, "Vincent") == 0;

    printf("%d\n", csc_cond || cms_cond || gpa_cond || name_cond);  // 1 or 0
}



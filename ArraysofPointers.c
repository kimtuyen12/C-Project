/*
Tuyen Pham
TUID 915591991
09/27/2018
CIS 2107 - Section 3
Lab 4
This lab is to design and implement array of function pointer.
 */

#include <stdio.h>
#include <stdlib.h>
#define CHOICES 4

void printArray (size_t pupils, size_t tests, const int grades[pupils][tests]);
void minimum (size_t pupils, size_t tests, const int grades[pupils][tests]);
void maximum (size_t pupils, size_t tests, const int grades[pupils][tests]);
void average (size_t pupils, size_t tests, const int grades[pupils][tests]);

int main() {
    printf("Let's create the table of grades of students: ");
    //declare 2D Arrays
    printf("\nHow many students? ");
    unsigned int STUDENTS;
    scanf("%d", &STUDENTS);
    printf("How many exams? ");
    unsigned int EXAMS;
    scanf("%d", &EXAMS);
    
    printf("\n");
    int studentGrades[STUDENTS][EXAMS];
    int i, j;
    for (i=0; i<STUDENTS; ++i){
        for (j=0; j<EXAMS; ++j){
            printf("Enter student grades at [%d][%d]: ", i, j);
            scanf("%d",&studentGrades[i][j]);
        }
    }
    
    void (*processGrades[CHOICES])(size_t pupils, size_t tests, const int grades[pupils][tests]) = { printArray, minimum, maximum, average };
    int choice;
    printf("\nEnter a choice:\n");
    printf("\t0. Print the array of grades\n");
    printf("\t1. Find the minimum grade\n");
    printf("\t2. Find the maximum grade\n");
    printf("\t3. Print the average on all tests for each student\n");
    printf("\t4. End the program ");
    scanf("%d", &choice);
    
    while (choice>=0 && choice<4){
        (*processGrades[choice])(STUDENTS, EXAMS, studentGrades);
        printf("\nEnter a choice:\n");
        printf("\t0. Print the array of grades\n");
        printf("\t1. Find the minimum grade\n");
        printf("\t2. Find the maximum grade\n");
        printf("\t3. Print the average on all tests for each student\n");
        printf("\t4. End the program ");
        scanf("%d", &choice);    
    }
    return 0;
}

void printArray (size_t pupils, size_t tests, const int grades[pupils][tests]){
    int i, j;
    printf("\n");
    printf("                 [0]  [1]  [2]  [3] ");
    for (i=0; i<pupils; ++i){
        printf("\nstudentGrades[%d] ", i);
        for (j=0; j<tests; ++j){
            printf("%-5d", grades[i][j]);  
        }
    }
}

void minimum (size_t pupils, size_t tests, const int grades[pupils][tests]){
    int i, j;
    int min = grades[0][0];
    for (i=0; i<pupils; ++i){
        for (j=0; j<tests; ++j){
            if (grades[i][j] < min){
                min = grades[i][j];
            }
        }
    }
    printf("\nThe lowest grade is %d ", min);
}

void maximum (size_t pupils, size_t tests, const int grades[pupils][tests]){
    int i, j;
    int max = 0;
    for (i=0; i<pupils; ++i){
        for (j=0; j<tests; ++j){
            if (grades[i][j] > max){
                max = grades[i][j];
            }
        }
    }
    printf("\nThe highest grade is %d ", max);
}

void average (size_t pupils, size_t tests, const int grades[pupils][tests]){
    int i, j;
    for (i=0; i<pupils; ++i){
        int total = 0;
        for (j=0; j<tests; ++j){
            total += grades[i][j];
        }
    printf("\nThe average for student %d is %.2f", i+1, ((double)total/tests));
    }
   
}

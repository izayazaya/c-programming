/*  178-8.c

    Izayaa
    March 31, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 8

    Modify Programming Project 7 so that it prompts
    for five quiz grades for each of five students,
    then computes the total score and average score
    for each srudent, and the average score, high
    score, and low score for each quiz.

*/

#include <stdio.h>

#define SIZE 5

int main(void){
    float matrix[SIZE][SIZE], quizGrades = 0, studentGrades = 0;
    float quizGradesArray[SIZE], studentGradesArray[SIZE], high[SIZE] = {0}, low[SIZE] = {100, 100, 100, 100, 100};
    int i, j;

    for(i = 0; i < SIZE; i++){
        printf("Enter row %i: ", i + 1);
        for(j = 0; j < SIZE; j++){
            scanf("%f", &matrix[i][j]);
        }
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            quizGrades += matrix[i][j];
            studentGrades += matrix[j][i];
        }
        quizGradesArray[i] = quizGrades;
        studentGradesArray[i] = studentGrades;
        quizGrades = 0;
        studentGrades = 0;
    }

    printf("\nTotal Student Grades: ");
    for(i = 0; i < SIZE; i++){
        printf("%.2f ", studentGradesArray[i]);
    }

    printf("\nAverage Student Grade: ");
    for(i = 0; i < SIZE; i++){
        printf("%.2f ", studentGradesArray[i] / SIZE);
    }

    printf("\nAverage Score for Each Quiz: ");
    for(i = 0; i < SIZE; i++){
        printf("%.2f ", quizGradesArray[i] / SIZE);
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            if(matrix[i][j] > high[i]){
                high[i] = matrix[i][j];
            }else if(matrix[i][j] < low[i]){
                low[i] = matrix[i][j];
            }
        }
    }

    printf("\nHighest Score for Each Quiz: ");
    for(i = 0; i < SIZE; i++){
        printf("%.2f ", high[i]);
    }

    printf("\nLowest Score for Each Quiz: ");
    for(i = 0; i < SIZE; i++){
        printf("%.2f ", low[i]);
    }

    return 0;
}
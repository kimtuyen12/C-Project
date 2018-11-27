/*
Tuyen Pham
TUID 915591991
09/27/2018
CIS 2107 - Section 3
Lab 4
This lab is to design and implement functions to process 2D Arrays.
 */

#include <stdio.h>
#include <stdlib.h>

int max (int row, int col, int array[row][col]);
int rowSum (int row, int col, int x, int array[row][col]);
int columnSum (int row, int col, int x, int array[row][col]);
void isSquare (int row, int col, int array[row][col]);
void displayOutputs (int row, int col, int array[row][col]);

int main(void) {
    printf("Let's create 2D Arrays!\n");
    
    printf("\nHow many rows? ");
    int row;
    scanf("%d", &row);
    printf("How many columns? ");
    int column;
    scanf("%d", &column);
    
    printf("\n");
    int A[row][column];
    int i, j;
    for (i=0; i<row; ++i){
        for (j=0; j<column; ++j){
            printf("Enter value at [%d][%d]: ", i, j);
            scanf("%d",&A[i][j]);
        }
    }
    
    // print max value in 2D Arrays
    printf("\nThe max value in 2D Arrays is: ");
    max(row,column,A);
    
    //print the sum of the elements of row in 2D Array
    printf("\n");
    for (i=0; i<row; ++i){
        int r = rowSum(row, column, i, A);
        printf("\nSum of row %d is %d",i+1,r);
    }
    
    //print the sum of the elements of column in 2D Array
    printf("\n");
    for (j=0; j<column; ++j){
        int c = columnSum(row, column, j, A);
        printf("\nSum of column %d is %d",j+1,c);
    }
    printf("\n");
    
    //check array square
    printf("\n");
    isSquare(row,column,A);
    
    //display elements in 2D array
    printf("\nHere is your 2D Array: \n");
    for (i=0; i<row; ++i){
        for (j=0; j<column; ++j){
            printf ("%3d ", A[i][j]);
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

int max (int row, int col, int array[row][col]){
    int max = array[0][0];
    int i;
    int j;
    for (i=0; i<row; ++i){
        for (j=0; j<col; ++j){
            if (array[i][j] > max){
                max = array[i][j];
            }
        }
    }
    printf("%d",max);
    return max;
}

int rowSum (int row, int col, int x, int array[row][col]){
    int sum = 0;
    int j;
    for (j=0; j<col; ++j){
        sum += array[x][j];
        }
    return sum;
}

int columnSum (int row, int col, int x, int array[row][col]){
    int sum = 0;
    int i;
    for (i=0; i<row; ++i){
        sum += array[i][x];
    }
    return sum;
}

void isSquare (int row, int col, int array[row][col]){
    if (row == col){
        printf ("This is a square array. \n");
    } else {
        printf ("This is not a square array. \n");
    }
}

void displayOutputs (int row, int col, int array[row][col]){
    int i, j;
    for (i=0; i<row; ++i){
        for (j=0; j<col; ++j){
            printf ("%d ", array[i][j]);
        }
    }
}


/*
Tuyen Pham
TUID 915591991
09/20/2018
CIS 2107 - Section 3
Lab 3
This lab is to design and implement functions to process 1D Arrays.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 40

int fillArray (int array[], int size, int low, int high);
int findWithRange(int array[], int low, int high);
void reverseArray(int array[], int i, int j);
void printReverseArray (int array[], int size);
void reverseOrder(int array[], int low, int high);
void printReverseOrder (int array[], int size);
int findSequence(int array[], int size, int i, int j);


int main(void) {
    int i;
    int A[SIZE] ={0,56,19,81,59,48,35,90,83,75,17,86,71,51,30,1,9,36,14,16,99,45,12,0,0,38,53,57,60,61,16,66,45,35,5,61,79,81,52,30};
    puts ("The values of the original array are: ");
    for (i=0; i<SIZE; ++i){
        printf("%3d", A[i]);
    }
    
    //fill 1D array with random numbers
    srand(time(NULL));
    int A0[SIZE];
    for (i=0; i<SIZE; ++i){
        A0[i] = A[i];
    }
    printf("\nThe array with random integers is\n ");
    fillArray(A0,SIZE,0,100);
    
    //print max value
    printf("\nEnter the low index: ");
    int low;
    scanf("%3d",&low);
    printf("Enter the high index: ");
    int high;
    scanf("%3d",&high);
    printf("The max value of findWithRange is ");
    findWithRange(A,low,high);
    
    //print reverse array
    int A1[SIZE];
    for (i=0; i<SIZE; ++i){
        A1[i] = A[i];
    }
    reverseArray (A1,0,39);
    printf("Reversed array is \n");
    printReverseArray (A1,40);
    
    //print reverse order in array
    int A2[SIZE];
    for (i=0; i<SIZE; ++i){
        A2[i] = A[i];
    }
    printf("\nEnter the low index: ");
    int lowIndex;
    scanf("%3d",&lowIndex);
    printf("Enter the high index: ");
    int highIndex;
    scanf("%3d",&highIndex);
    if ((lowIndex < 0) || (highIndex > SIZE) || (highIndex < lowIndex)){
        printf ("Can not reverse the order of array elements");
    } else if (lowIndex < highIndex){
        reverseOrder (A2,lowIndex, highIndex);
        printf("Reversed ordered in array is \n"); 
        printReverseOrder(A2,SIZE);
    }
    
    //print sequence
    int number1;
    int number2;
    printf("\nEnter 2 numbers: ");
    scanf("%3d%3d",&number1, &number2);
    int index = findSequence(A,SIZE,number1,number2);
    if (index != -1){
        printf ("The found sequence is: %d\n", index);
    } else {
        printf ("The sequence is not found\n");
    }
  
    return (EXIT_SUCCESS);
}

int fillArray (int array[], int size, int low, int high){
    int i;
    for (i = 0; i < size ; ++i){
       array[i] = (rand()%(high-low+1))+low;
        printf("%d ",array[i]);
  }
}

int findWithRange(int array[], int low, int high){
    int max = 0;
    int i;
    for (i= low; i<=high; ++i){
         if (array[i]>max){
             max = array[i];
         }
     }
    printf("%d\n", max);
    return max;
}

void reverseArray(int array[], int i, int j){
    int temp;
    while (i<j){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;
    }
}
void printReverseArray (int array[], int size){
    int i;
    for (i=0; i<size; ++i){
        printf("%3d",array[i]);
    }
}

void reverseOrder(int array[], int low, int high){
    int temp;
    while (low<high){
        temp=array[low];
        array[low]=array[high];
        array[high]=temp;
        low++;
        high--;
    }
}
void printReverseOrder (int array[], int size){
    int i;
    for (i=0; i<size; ++i){
        printf("%3d",array[i]);
    }
}

int findSequence(int array[], int size, int i, int j){
    int k;
    for (k = 0; k < size; ++k){
        if((array[k]==i)&&(array[k+1]==j)){
            return k;    
        } else if (i==j){
            return -1;
        } 
    }
}










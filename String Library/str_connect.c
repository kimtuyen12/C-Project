/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   str_connect.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 9:08 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

char *str_connect(char **strs, int n, char c){
    char *str;
    int i, j, k, len = 0;
//Looping over strings present in the array
    for(i=0; i<n; i++){
//Finding length of current string
        for(j=0; strs[i][j] != '\0'; j++){
            len++;
        }
    }
//Allocating enough space
    str = (char*) malloc(sizeof(char)*(len+n+1));
    k=0;

//Looping over array elements
    for(i=0; i<n; i++){
//Consider each string
        for(j=0; strs[i][j] != '\0'; j++){
//Storing char by char
            str[k] = strs[i][j];
            k++;
        }
//Condition to check for last element of array
        if(i < n-1){
//Adding concatenation character
            str[k] = '+';
            k++;
        }
    }       
//Adding sting termination character
    str[k] = '\0';
    //Return string
    return str;
   
}


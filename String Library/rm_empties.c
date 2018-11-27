/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rm_empties.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 9:14 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void rm_empties(char **words) {
    int i=0, j, k, len, p = 0;
    //Loop till all strings are processed
    while(words[i] != NULL){
        len = 0;
    //Finding length of string
        for(j=0; words[i][j] != '\0'; j++){
            len++;
        }
    //If length is 0
        if(len == 0){
            k = i;      
    //Removing element by adjusting element of array
        while(words[k+1] != NULL){
    //Swapping
            words[k] = words[k+1];
            k++;
         }
    //Incrementing number of elements removed
         p++;
        } else {
            i++;
        }
    }
    //Adding null pointer
    words[(i-p)] = NULL;
}


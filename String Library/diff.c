/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   diff.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 8:58 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int diff(char *s1, char *s2){
    int count = 0;
    while (*(s1++) != '\0' && *(s2++) != '\0' ){
        if(*s1 != *s2){
            count++;
        }
    }
    while (*(s1++) != '\0'){
        count++;
    }
    while (*(s2++) != '\0'){
        count++;
    }    
    return count;
}



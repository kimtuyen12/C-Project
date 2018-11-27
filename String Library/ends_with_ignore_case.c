/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ends_with_ignore_case.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 7:16 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"

int ends_with_ignore_case(char *s, char *suff) {
    char *temp = suff;
    int count = 0;
    while(*(count + temp) != '\0'){
        count++;
    }
    int mainStringCount = 0;
    while(*(mainStringCount + s) != '\0'){
        mainStringCount++;
    }
    int i;
    for(i = count - 1; i >= 0; i--){
        if(*(s + --mainStringCount) != *(suff + i)){
            return 0;
        }
    }
    return 1;
}


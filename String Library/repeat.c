/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   repeat.c
 * Author: Tuyen Pham
 *
 * Created on October 22, 2018, 10:22 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

char *repeat(char *output, char *s, int x, char sep) {
    int count = 0, i = 0;
    while(*(s+i) != '\0'){
        output[count++] = *(s+i);
        i++;
    }
    int j;
    for(j = 1; j < x; j++){
        output[count++] = sep;
        i = 0;
        while(*(s+i) != '\0'){
            output[count++] = *(s+i);
            i++;
        }
    }
    output[count] = '\0';
    return output;
}

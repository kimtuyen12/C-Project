/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   find.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 9:29 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int find(char *h, char *n) {
    int len;
    char *t = h;
    while (*t != '\0'){
        t++;
    }
    len = t-h;
    int i;
    for (i=0; i<len; ++i){
        if (h[i] == *n){
            return i;
        }
    }
    return -1;
}


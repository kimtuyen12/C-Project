/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ptr_to.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 12:55 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

char *ptr_to(char *h, char *n) {
    int len1, len2;
    
    char *t = h;
    while (*t != '\0'){
        t++;
    }
    len1 = t-h;
    char *s = n;
    while (*s != '\0'){
        s++;
    }
    len2 = s-n;
    
    char *ptr = h;
    char *i = h;
    char *j = n;

    if (len2 > len1){
        return NULL;
    }
    while (*i != '\0') {
        while (*(i + 1) != '\0' && *i == *j) {
            ++i;
            ++j;
        }
        if (*j == '\0'){
            return ptr;
        } else {
            j = n;
            ++ptr;
            ++i;
        }
    }
    return NULL;
}

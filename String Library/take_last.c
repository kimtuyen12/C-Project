/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   take_last.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 2:39 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

void take_last(char *s, int n) {
    if (!s) {
        return;
    }
    char *t = s;
    int i, j, len = 0;
    while (*t != '\0') { 
        t++;
        len++;
    }
    if (len < n){ 
        return;
    }
    for (i = 0, j = n; i < n; i++, j--){
        s[i] = s[len - j];
    }
    s[i] = '\0';
}

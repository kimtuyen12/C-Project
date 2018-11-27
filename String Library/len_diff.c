/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   len_diff.c
 * Author: Tuyen Pham
 *
 * Created on October 23, 2018, 12:11 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int len_diff(char *s1, char *s2){
    int len1 = 0;
    char *c = s1;
    while (*c != '\0'){
        ++len1;
        ++c;
    }
    int len2 = 0;
    char *d = s2;
    while (*d != '\0'){
        ++len2;
        ++d;
    }
    return len1 - len2;
}

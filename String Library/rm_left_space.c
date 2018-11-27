/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rm_left_space.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 9:07 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 
 
void rm_left_space(char *s){
    int blankSpaceEndAt = 0;
    char* c = s;
    while( *c != '\0' && *c == ' ' ){ 
        c++; 
        blankSpaceEndAt++; 
    }
    c = s + blankSpaceEndAt;
    while( *c != '\0' ){
        *s = *c;
        c++; 
        s++;
    }
    *s = '\0';
}

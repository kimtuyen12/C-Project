/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rm_right_space.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 9:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

void rm_right_space(char *s){
    char* c = s;
    
    while( *c != '\0' ){ 
        c++; 
    }
    c--;
    
    while( *c == ' ' ){
        c--;
    }
    c++;
    *c = '\0';
}

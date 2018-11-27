/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   shorten.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 9:00 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

void shorten(char *s, int new_len){
    int len=0;
    char *s1=s;
    while (*(s1++) != '\0'){
        len++;
    }
    if (new_len < len ){
        s[new_len] = '\0';
    }
}

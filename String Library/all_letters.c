/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   all_letters.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 6:45 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int all_letters (char *s){
    if((*s) == '\0'){
        return 0;
    }
    while (*s != '\0'){
        if(*s < 'A' || *s > 'z' || (*s > 'Z' && *s < 'a' )){
            return 0;
        }
        s++;
     }
    return 1;
}


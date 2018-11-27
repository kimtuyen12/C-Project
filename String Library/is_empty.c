/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   is_empty.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 1:57 PM
 */

#include <stdio.h>
#include <ctype.h>
#include "header.h"

int is_empty(char *s) {
    char *i = s;
    if (s == NULL){
        return 1;
    } else if (*i == '\0'){
        return 1;
    }
    for (; *i != '\0'; i++) {
        if (!isspace(*i)){
          return 0;
        }
    }
    return 1;
}

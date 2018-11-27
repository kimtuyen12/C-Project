/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   replace.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 9:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

char *replace(char *s, char *pat, char *rep) {
    char *stringP = s;
    char *patP = pat;
    char *repP = rep;
    char *res, *r, *q;
    int strLen, patterns, repLen, patLen, i;
    strLen = repLen = patLen = patterns = 0;
    while(*stringP != '\0'){
        strLen++;
        stringP++;
    }
    stringP = s;
    while(*stringP != '\0'){
         while(*stringP == *patP && *patP!= '\0' && *stringP != '\0'){
            patP++;
            stringP++;
        }
        if(*patP == '\0'){
            patterns++;
        }
        if(*stringP =='\0'){
            break;
        }
        if(*stringP != *patP){
            stringP++;
        }
        patP = pat;
    }
    while(*patP != '\0'){
        patLen++;
        patP++;
    }
    while(*repP != '\0'){
        repLen++;
        repP++;
    }
    res = (char*) malloc(strLen + (patterns * repLen) -(patterns * patLen)+ 1);
    r = res;
    stringP = s;
    patP = pat;
    repP = rep;
    while(*stringP != '\0'){
        if(*stringP == *patP){
            q = res;
        }
        while(*patP != '\0' && *patP == *stringP && *stringP != '\0'){
            *res = *stringP;
            stringP++;
            patP++;
            res++;
        }
        if(*patP =='\0'){
            res = q;
            while(*repP != '\0'){
                *res = *repP;
                repP++;
                res++;
            } 
        repP = rep;
        }
        if(*stringP != *patP){
            *res = *stringP;
            res++;
            stringP++;
        }
        patP = pat;
    }
    *res = '\0';

    return r;
}


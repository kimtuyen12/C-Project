/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   str_zip.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 2:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

char *str_zip(char *s1, char *s2) {
    int len1=0;

    int len2=0;

    while(s1[len1]!='\0'){

        len1++;

    }

    while(s2[len2]!='\0'){

        len2++;

    }

    char *newPtr =(char *)malloc((len1+len2+1) * sizeof(char));

    int i=0;

    int j=0;

    int coutner=0;

    while(i<len1 || j<len2){

        if(i<len1 && j<len2){

            newPtr[coutner++] = s1[i];

            newPtr[coutner++] = s2[j];

            i++;

            j++;

        }

        if(i<len1){

            newPtr[coutner++] = s1[i];

            i++;

        }

        if(j<len2){

            newPtr[coutner++] = s2[j];

            j++;

        }

    }

    newPtr[len1+len2]='\0';

    return newPtr;
}


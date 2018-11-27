/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pad.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 3:53 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

char* pad(char *s1,int d){

    int len1=0;

    while(s1[len1]!='\0'){

        len1++;

    }

    int div = len1/d;

    int addedSpace=0;

    if(div%2!=0 || div==0){

        do{

            addedSpace++;

            div = (len1+addedSpace)/d;

        }while(div%2!=0 || div==0);

    }

    int i;

    int count=0;

    char *newPtr =(char *)malloc((len1+addedSpace+1) * sizeof(char));

    for(i=0;i<len1;i++){

        newPtr[count++] = s1[i];

    }

    for(i=0;i<addedSpace;i++){

        newPtr[count++] = ' ';

    }

    newPtr[len1+addedSpace]='\0';

    return newPtr;

}

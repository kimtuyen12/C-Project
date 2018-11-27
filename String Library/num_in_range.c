/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   num_in_range.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 8:52 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

int num_in_range(char *s1, char b, char t){
    int count = 0;
    while (*s1 != '\0'){
        if ((b<=*s1)&&(*s1<=t)){
            ++count;
        }
        ++s1;
    }
    return count;
}

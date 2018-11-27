/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rm_space.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 9:27 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

void rm_space(char *s){
    rm_left_space(s);
    rm_right_space(s);
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   strcmp_ign_case.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 2:36 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

int strcmp_ign_case(char *s1, char *s2) {
     while( *s1 != '\0' && *s2 != '\0' ){
       char a = *s1;
       if( a >= 'A' && a <= 'Z'){ 
           a = ( a- 'A') + 'a'; 
       }
       char b = *s2;
       if( b >= 'A' && b <= 'Z'){ 
           b = ( b- 'A') + 'a'; 
       }
       //both are lower case now
       if( a > b ){ 
           return 1;
       }
       if( a < b ){ 
           return -1; 
       }
       s1++;
       s2++;
    }
        if( *s1 != '\0' ){
            return 1; 
        }
        if( *s2 != '\0' ){
            return -1; 
        }
   return 0;
    
}

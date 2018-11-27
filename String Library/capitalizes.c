/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   capitalizes.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 2:32 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void capitalizes(char *s){
     int capitalizeIt = 1;
      while( *s != '\0' ){
       if( *s == ' ' ){ 
           capitalizeIt = 1;
           s++; 
           continue; 
       }
       else if( capitalizeIt == 1){
           char is = *s;
           if( is >= 'a' && is <= 'z'){
               *s = (char)(( is - 'a' ) + 'A');
           }
           capitalizeIt = 0;
       }
       else{
           char is = *s;
           if( is >= 'A' && is <= 'Z'){
               *s = (char)(( is - 'A' ) + 'a');
           }
       }
       s++;
   }
}


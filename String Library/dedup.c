/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dedup.c
 * Author: Tuyen Pham
 *
 * Created on October 21, 2018, 3:21 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 
# define NO_OF_CHARS 256 
# define bool int 

char dedup(char *s) {
    bool bin_hash[NO_OF_CHARS] = {0}; 
    int ip_ind = 0, res_ind = 0; 
    char temp;     
  
  /* In place removal of duplicate characters*/
    while (*(s + ip_ind)) { 
        temp = *(s + ip_ind); 
        if (bin_hash[temp] == 0) { 
            bin_hash[temp] = 1; 
            *(s + res_ind) = *(s + ip_ind); 
            res_ind++; 
        } 
        ip_ind++; 
    }       
  
  /* After above step string is stringiittg. 
     Removing extra iittg after string*/
       *(s+res_ind) = '\0';    
  
      return s; 
}
    

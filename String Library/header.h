/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   header.h
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 6:45 PM
 */

#ifndef HEADER_H
#define HEADER_H

int all_letters (char *s);
int num_in_range(char *s1, char, char);
int diff(char *s1, char *s2);
void shorten(char *s, int);
int len_diff(char *s1, char *s2);
void rm_left_space(char *s);
void rm_right_space(char *s);
void rm_space(char *s);
int find(char *h, char *n) ;
char *ptr_to(char *h, char *n);
int is_empty(char *s);
char *str_zip(char *s1, char *s2);
void capitalizes(char *s);
int strcmp_ign_case(char *s1, char *s2);
void take_last(char *s, int n);
char dedup(char *s);
char *pad(char *s, int d);
int ends_with_ignore_case(char *s, char *suff);
char *repeat(char *output, char *s, int x, char sep);
char *replace(char *s, char *pat, char *rep);
char *str_connect(char **strs, int n, char c);
void rm_empties(char **words);
char **str_chop_all(char *s, char c);

#endif /* HEADER_H */


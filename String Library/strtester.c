/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Tuyen Pham
 *
 * Created on October 19, 2018, 6:44 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h" 

int main(void) {
    char string1[100] = "Hello";
    char string2[100] = "My name is Sunny";
    //all_letters
    puts("All letters");
    printf("String1 is: %d\n", all_letters(string1));
    printf("String2 is: %d\n", all_letters(string2));
    //Num_in_range
    puts("");
    printf("Number in range: %d\n", num_in_range(string2,'a','z'));
    //diff
    puts("");
    printf("Diff: %d\n", diff(string1,string2));
    //shorten
    puts("");
    shorten(string1,5);
    printf("String1 after shorten: %s\n", string1);
    shorten(string2,6);
    printf("String1 after shorten: %s\n", string2);
    //len_diff
    puts("");
    char s1[100] = "Stay strong";
    char s2[100] = "Be strong";
    int m = len_diff(s1,s2);
    printf("Length differs between s1 and s2 is: %d\n", m);
    //rm_left_space
    puts("");
    char s3[100]= " abc";
    rm_left_space(s3);
    printf("String after remove left spaces are: %s\n", s3);
    //rm_right_space
    puts("");
    char s4[100]= "abc  ";
    rm_right_space(s4);
    printf("String after remove right spaces are: %s\n", s4);
    //rm_space
    puts("");
    char s5[100]= "  abc  ";
    rm_space(s5);
    printf("String after remove left and right spaces are: %s\n", s5);
    //find
    puts("");
    printf("The first ocurence of e is at index: %d\n", find("chegg","e"));
    printf("The first ocurence of t is at index: %d\n", find("chegg","t"));
    //pointer to first ocurrence
    puts("");
    char target[100] = "This is a super long string";
    char n1[10] = "a";
    char n2[10] = "long";
    printf("The pointer to the first ocurence of %s in the %s is %s\n", n1, target, ptr_to(target,n1));
    printf("The pointer to the first ocurence of %s in the %s is %s\n", n2, target, ptr_to(target,n2));
    //is_empty
    puts("");
    char a[100] = "";
    char b[100] = "abc";
    printf ("is_empty(a) returns %d\n",is_empty(a));
    printf ("is_empty(b) returns %d\n",is_empty(b));
    //str_zip
    puts("");
    printf("All of characters s1 and s2 interleaved is: %s\n", str_zip("Spongebob","Patrick"));
    //capitalize
    puts("");
    char s[] = "abra ka dabra";
    capitalizes(s);
    printf("Capitalizes is %s\n", s);
    //strcmp_ign_case
    puts("");
    printf("Compares s1 and s2 ignoring  case is %d\n", strcmp_ign_case("aba","gd") );
    printf("Compares s1 and s2 ignoring  case is %d\n", strcmp_ign_case("ab","ab") );
    printf("Compares s1 and s2 ignoring  case is %d\n", strcmp_ign_case("xy","ab"));
    //take_last
    puts("");
    char c[20] = "Brubeck";
    take_last(c,5);
    printf ("Modifies Brubeck so that it consists of only its last 5 characters is %s\n",c);
    //dedup
    puts("");
    char d[100] = "There's always money in the banana stand.";
    dedup(d);
    printf("A new string without duplicate characters is %s\n", d);
    //pad
    puts("");
    char *newStr5 = pad("wowp",10);
    printf("The pad string is %s\n",newStr5);
    //ends_with_ignore_case
    puts("");
    char string[] = "HelloWorld";
    char stuff[] = "world";
    printf("The string %s ends with %s is %d\n", string, stuff, ends_with_ignore_case(string, stuff));
    //repeat
    puts("");
    puts("Repeat the string in n times with the character between");
    char k[100] = " all right";
    printf("%s\n", k);
    char x[100];
    repeat(x, k, 3, ',');
    printf("%s\n", x);
    //replace
    puts("");
    printf("Result replace is: %s\n", replace("NBA X", "X", "rocks"));
    //str_connect
    puts("");
    char *strs[] = {"Washington", "Adams", "Jefferson"};
    char *ptr = str_connect(strs,3,'+');
    printf("Returns a string consisting of the first %d strings with the character %c used as a separator: %s\n",3,'+', ptr);
    //rm_empties
    puts("");
    char *words[] = { "Washington", "" ,"Adams", "" , "" , "Jefferson", NULL };
    int i =0;
    printf("Before calling rm_empties Words: \t ");
    while(words[i] != NULL){
        printf(" -> %s <- \t ", words[i]);
        i++;
    }
    rm_empties(words);
    i=0;
    printf("\nAfter calling rm_empties Words: \t ");
    while(words[i] != NULL){
        printf(" -> %s <- \t ", words[i]);
        i++;
    }
    //str_chop_all
    puts("");
    char array[100] = "I am ready for a nice vacation";
    printf("\nString original is %s",array);
    const char *array1[7];

    array1[0] = "I";
    array1[1] = "am";
    array1[2] = "ready";
    array1[3] = "for";
    array1[4] = "a";
    array1[5] = "nice";
    array1[6] = "vacation";
    
    printf("\nToken string stored in array is: %s, %s, %s, %s, %s, %s, %s, NULL\n", array1[0], array1[1], array1[2], array1[3], array1[4], array1[5], array1[6]);
    
}

/*
Tuyen Pham
TUID 915591991
11/16/2018
CIS 2107 - Section 3
Lab 10
This lab is to write a program that allows two human players to play Nim against each other. 
 */

#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    puts("Start the NIM GAME!");
    int value;
    char a[2][30],c;
    printf("Player 1, enter your name: ");
    gets(a[0]);
    printf("Player 2, enter your name: ");
    gets(a[1]);
    int i;
    int piles[3], curr=0, keep_playing=1;
    piles[0]=3;
    piles[1]=4;
    piles[2]=5;
    
    while(keep_playing!=0){
        printf("\nA: ");
        for (i=0; i<piles[0]; ++i){
            printf("*");
        }
        printf("\nB: ");
        for (i=0; i<piles[1]; ++i){
            printf("*");
        }
        printf("\nC: ");
        for (i=0; i<piles[2]; ++i){
            printf("*");
        }
        printf("\n");
        printf(a[curr]);
        printf(", choose a pile : ");
        scanf(" %c",&c);
        if(piles[(int)c-65]==0){
            printf("Nice try %s. That pile is empty. Choose again: ",a[curr]);
            scanf(" %c",&c);
        }
        printf("How many to remove from pile %c: ",c);
        scanf("%d",&value);
        if (value<=0){
            printf("You must choose at least 1. How many? ");
            scanf("%d: ",&value);
        } 
        if (value>piles[(int)c-65] ){
            printf("%c does not have that many. Try again: ",c);
            scanf("%d: ",&value);  
        }
        if(value>0 && value<=piles[(int)c-65]){
                piles[(int)c-65] -= value;
        }
        if(piles[0]+piles[1]+piles[2]==1){
            printf("\nA: ");
            for (i=0; i<piles[0]; ++i){
                printf("*");
            }
            printf("\nB: ");
            for (i=0; i<piles[1]; ++i){
                printf("*");
            }
            printf("\nC: ");
            for (i=0; i<piles[2]; ++i){
                printf("*");
            }
            printf("\n%s, must take the last remaining counter so you loose. %s wins!\n ",a[curr+1],a[curr]);
            break;
        } else if(piles[0]>0 || piles[1]>0 || piles[2]>0){
            keep_playing=1;
        } else{
            printf("\nA: ");
            for (i=0; i<piles[0]; ++i){
                printf("*");
            }
            printf("\nB: ");
            for (i=0; i<piles[1]; ++i){
                printf("*");
            }
            printf("\nC: ");
            for (i=0; i<piles[2]; ++i){
                printf("*");
            }
            printf("\n%s, there are no counters left so you win!\n",a[curr+1]);
            break;
        }
        if(curr == 0){
            curr = 1;
        } else {
            curr = 0;
        }
    }
    return 0;
}
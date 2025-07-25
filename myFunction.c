#include<stdio.h>
#include"myFuction.h"
#include<ctype.h>
int mystrlen(char text[]){
    int i;
    for(i=0;text[i]!='\0';i++){

    }
    return i;
void mystrlwr(char*text){
    int i;
    for(i=0;text[i]!='\0';i++){
        text[i]=tolower(text[i]);
    }
}
}voidmmystruppr(char*text,char*text1){
    int i;
    for(i=0;text[i]!='\0';i++){
        int i;
        text[i]=toupper(text[i]);
    }
}
void mystrcopy(char*text,char*text1){
    int i;
    for(i=0;text[i]!='\0';i++){
        text1[i]=text[i];
    }
}

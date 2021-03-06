#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "txtfind.h"

void print_lines(char *str, char *word){
    char delim_lines[] = {"\n\r"};
    char *p = strtok(str, delim_lines);
    while(p != NULL){
            if (strstr(p, word) != NULL){
                printf("%s\n", p);
            }
            p = strtok(NULL, delim_lines);
        }
	}

void print_similar_words(char *str, char *word){
    char delim_words[] = {" \t\n\r"};
    char *p = strtok(str, delim_words);
    while(p != NULL){
            if(strlen(p) == strlen(word)){
                if (strcmp(p, word)==0){                 
                    printf("%s\n", p);
                }
            }
            if(strlen(p) == strlen(word)+1){
                if(similar(p,word)){                    
                    printf("%s\n", p);
                }
            }
            p = strtok(NULL, delim_words);
    }
}

int similar(char *other , char *word){
    char temp[strlen(word)];
    strcpy(temp,other);
    for(int i = 0; i < strlen(other); i++){
        memmove(temp + i, temp + i + 1, strlen(word) - i);
        temp[strlen(temp)-1]='\0';
        if(strcmp(temp,word)==0){
            return 1;
        }
        strcpy(temp,other);
    }
           return 0;
}
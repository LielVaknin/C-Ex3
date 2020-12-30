#include <stdio.h>
#include <string.h>
#include "txtfind.h"
#define NUM_OF_LINES 250
#define LINE 256
#define WORD 30

int main(){
    char word[WORD];
    scanf(" %s", word);
    char c;
    scanf(" %c\n", &c);
    char text[NUM_OF_LINES*LINE];
    for(int i=0; i<NUM_OF_LINES*LINE; i++){
        char ch;
        scanf("%c", &ch);
        text[i]=ch;
    }
    switch(c){
        case 'a':{
            print_lines(text, word);
            break;
        }
        case 'b':{
            print_similar_words(text, word);
            break;
        }
        default:
            break;
    }
    return 0;
}
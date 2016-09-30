#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "DeMerittA7.h"
char*** creater(int x, int y){
    int tx,ty;
    char*** board;
    char* temp;
    srand(time(NULL));
    //board = malloc(sizeof(char*)*(int)x);
    board = (char ***) malloc(x * sizeof(char**));
    for(tx = 0; tx < x; tx++){
        board[tx] = (char**) malloc(y*sizeof(char**));
    }//end for
    
    for(tx = 0; tx < x;tx++){
        for(ty = 0; ty < y;ty++){
            if(((int)rand() % 9) == 1)
                board[tx][ty] = "X ";
            else{
                board[tx][ty] = "  ";
            }//end else
        }//end inner for
        //printf("%i",ty);
    }//end outer for
    //return board;
    /*int main(void)
{
  char   newStr[10];
  char   origStr[] = "This is a string";
  strncpy(newStr, origStr, 4);
  strcat(newStr, &origStr[7]);
  printf("newStr = %s\n", newStr);
     * arrayString = malloc(10 * sizeof *arrayString);
  return(0);
}*/
   
    
    return board;
}//end create

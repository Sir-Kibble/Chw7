#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "DeMerittA7.h"
char*** update(char*** board, int xx, int yy){
    //
    char*** temp;
    char*** updates;
    int x,y;
    int cellcount;
    //temp = (char ***) malloc(x * sizeof(char**));
    updates = (char ***) malloc(x * sizeof(char**));
    for(x = 0; x < xx; x++){
        //temp[x] = (char**) malloc(y*sizeof(char**));
        updates[x] = (char**) malloc(y*sizeof(char**));
        //temp[x] = board[x];
    }//end for
    
    for(x = 0; x < xx;x++){
        for(y = 0; y < yy;y++){
            updates[x][y] = "    ";
            //temp[x][y] = board[x][y];
        }//end inner for
        //printf("%i",ty);
    }//end outer for
    for(x = 0; x < xx; x++){ 
        for(y = 0; y < yy; y++){
            //(x+1)%x
                cellcount = 0;
            if(!strcmp((board[x][(y-1+yy)%yy]),"X "))//12:00
                cellcount++;
            if(!strcmp((board[(x+1+xx)%xx][(y-1+yy)%yy]), "X "))//1:30
                cellcount++;
            if(!strcmp((board[(x+1+xx)%xx][y]), "X "))//3:00
                cellcount++;
            if(!strcmp((board[(x+1+xx)%xx][(y+1+yy)%yy]), "X "))//4:30
                cellcount++;
            if(!strcmp((board[x][(y+1+yy)%yy]), "X "))//6:00
                cellcount++;
            if(!strcmp((board[(x-1+xx)%xx][(y+1+yy)%yy]), "X "))//7:30
                cellcount++;
            if(!strcmp((board[(x-1+xx)%xx][y]), "X "))//9:00
                cellcount++;
            if(!strcmp((board[(x-1 +xx)%xx][(y-1+yy)%yy]), "X "))//10:30
                cellcount++;
            //live, die, reproduce
            if(cellcount  == 3 && strcmp(board[x][y],"X ") || (!strcmp(board[x][y],"X ") && (cellcount > 1 && cellcount < 4)))
                updates[x][y] = "live ";
            else
                updates[x][y] = "dead ";
        }//end inner y
    }//end outer for
    /*printf("2nd");
    for(x = 0; x < xx;x++){
        for(y = 0; y < yy;y++){
            printf("%s",updates[x][y]);
        }//end inner for
        printf("\n");
    }//end for*/
    for(x = 0; x < xx;x++){
        for(y = 0; y < yy;y++){
            if(!strcmp(updates[x][y],"live "))
                board[x][y] = "X ";
            else
                board[x][y] = "  ";
        }//end inner for
    }//end for*/
    //board = temp;
    for(x = 0; x < xx; x++){
        free(updates[x]);
        //free(temp[x]);
    }
    //free(temp);
    free(updates);
    return board;
}//end update
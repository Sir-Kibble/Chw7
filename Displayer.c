#include "DeMerittA7.h"
#include <stdio.h>
#include <stdlib.h>
void display(char*** board, int xx, int yy){
    //system("clear");
    printf("\033c");
    //printf("   1 2 3 4 5 6 7 8 9101112131415161718192021222324252627282930\n");
    int x,y;
        for(x = 0; x < xx;x++){
            //printf("%3d",x+1);
            for(y = 0; y < yy;y++){
                printf("%s",board[x][y]);
            }//end inner for
        printf("\n");
    }//end for*/
    fflush(stdout);
    
}//end display
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "DeMerittA7.h"
int main(int argc, char** argv) {
    //printf("hi@");
    //char**   board = 
	//if(argc == 3);
	printf("%s %s %s",argv[0],argv[1],argv[2]);
    int x,y,t;
    t = 0;
    if(argc == 3){
        x = atoi(argv[1]);
        y = atoi(argv[2]);        
    }
    else{

        x = 30;
        y = 30;
    }//end else
    printf("\n%i %i", x,y);
    char*** board = creater(x,y);
    char*** temp;
    display(board,x,y);
    while(t != 1){
        //usleep(2000);
    
    
        temp = board;
        board = update(temp,x,y);
        printf("--------------------------------------------\n");
        display(board,x,y);
        
        //scanf("%i",&t);
        //usleep(200000);
        scanf("%i",&t);
    }
    return (EXIT_SUCCESS);
}//end main


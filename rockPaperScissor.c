#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Function for game
int rps(char player, char computer){
    if(computer == player){
        return -1; // '-1' denotes the game is drawn
    }
    else if((computer == 's') && (player == 'r')){
        return 1; // '1' denotes the player has won
    }
    else if((computer = 'r') && (player == 's')){
        return 0; // '0' denotes the computer has won
    }
    else if((computer = 'p') && (player = 's')){
        return 1;
    }
    else if((computer == 's') && (player == 'p')){
        return 0;
    }
    else if((computer == 'r' && (player == 'p'))){
        return 1;
    }
    else if((computer == 'p') && (player = 'r')){
        return 0;
    }
}

// Main Code
int main(void){
    char player, computer;
    int gameResult;
    srand(time(NULL));
    int n = rand() % 100;

    // randomly generating the computer's choice by splitting the range into 3 parts n<33, 33<=n<66, n>=66 as the number is made to be lesser than 100 by modulo division
    if(n<33){
        computer = 'r';
    }
    else if(n>=33 && n<66){
        computer = 'p';
    }
    else if(n>=66){
        computer = 's';
    }

    printf("\n\n\n\n\t\t\t\t\tWelcome to Rock, Paper & Scissor!\t\t\t\t\t\t\t\n");
    puts("\t\t\t\t\tEnter your choice (r/p/s): \n\t\t\t\t\t");
    scanf("%c", &player);
    printf("\t\t\t\t\tYou chose %c and computer chose %c.\n\n", player, computer);
    gameResult = rps(player, computer);
    puts("\t\t\t\t\tGame Result: ");
    if(gameResult == -1){
        printf("\t\t\t\t\tGame Drawn!");
    }
    else if(gameResult == 0){
        printf("\t\t\t\t\tComputer wins!");
    }
    else if(gameResult == 1){
        printf("\t\t\t\t\tPlayer wins!");
    }
    return 0;
}
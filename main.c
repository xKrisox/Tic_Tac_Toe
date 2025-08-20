#include <stdio.h>
#include <stdlib.h>
#include "board.h"

int main()
{
    int player = 1;
    int choice, i;
    char mark; //X or O
    
    do {
        showboard();
        player = (player % 2) ? 1 : 2; // Switch player
        printf("Player %d turn :", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O'; // Assign mark

        if (choice == 1 && arr[1] == '1'){
            arr[1] = mark;
        } else if (choice == 2 && arr[2] == '2') {
            arr[2] = mark;
        } else if (choice == 3 && arr[3] == '3') {
            arr[3] = mark;
        } else if (choice == 4 && arr[4] == '4') {
            arr[4] = mark;
        } else if (choice == 5 && arr[5] == '5') {
            arr[5] = mark;
        } else if (choice == 6 && arr[6] == '6') {
            arr[6] = mark;
        } else if (choice == 7 && arr[7] == '7') {
            arr[7] = mark;
        } else if (choice == 8 && arr[8] == '8') {
            arr[8] = mark;
        } else if (choice == 9 && arr[9] == '9') {
            arr[9] = mark;
        } else {
            printf("Invalid move\n");
            player--;
            getchar();
        }
        
        i = checkForWin();
        player++;
    } while (i == -1);

    showboard();
    if (i == 1){
        printf("Player %d has won!\n", (mark == 'X') ? 1 : 2);
    }
    else {
        printf("It's a draw!\n");
    }
    getchar();
    printf("Thanks for playing!\n");

    return 0;
}
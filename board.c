#include <stdio.h>
#include "board.h"

char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void showboard()
{
    printf("TIC TAC TOE\n");
    printf("Player 1 (X)  -  Player 2 (O)\n");
    printf("%c | %c | %c\n", arr[1], arr[2], arr[3]);
    printf("---------\n");
    printf("%c | %c | %c\n", arr[4], arr[5], arr[6]);
    printf("---------\n");
    printf("%c | %c | %c\n", arr[7], arr[8], arr[9]);
    printf("\n");
}

int checkForWin()
{
    // Win conditions
    if (arr[1] == arr[2] && arr[2] == arr[3]) return 1; // Row 1
    else if (arr[4] == arr[5] && arr[5] == arr[6]) return 1; // Row 2
    else if (arr[7] == arr[8] && arr[8] == arr[9]) return 1; // Row 3
    else if (arr[1] == arr[4] && arr[4] == arr[7]) return 1; // Column 1
    else if (arr[2] == arr[5] && arr[5] == arr[8]) return 1; // Column 2
    else if (arr[3] == arr[6] && arr[6] == arr[9]) return 1; // Column 3
    else if (arr[1] == arr[5] && arr[5] == arr[9]) return 1; // Diagonal 1
    else if (arr[3] == arr[5] && arr[5] == arr[7]) return 1; // Diagonal 2
    else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' &&
             arr[4] != '4' && arr[5] != '5' && arr[6] != '6' &&
             arr[7] != '7' && arr[8] != '8' && arr[9] != '9') {
        return 0; // Draw
    } else {
        return -1; // Game continues
    }
}
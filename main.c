#include <stdio.h>

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
int main()
{
    int player = 1;
    int choice, i;
    char mark; //X or o
    
    do {
        showboard();
        if player % 2 == 0) {
            player = 2;
            mark = 'O'; // Player 2
        } else {
            player = 1;
            mark = 'X'; // Player 1
        }
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
        }
        
        i = checkForWin();
        player++;
    } while (i == -1);
    return 0;
}
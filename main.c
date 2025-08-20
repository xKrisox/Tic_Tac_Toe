#include <stdio.h>

char arr[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
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

int main()
{
    int player = 1;
    int choice;
    char mark; //X or o
    showboard();

    return 0;
}
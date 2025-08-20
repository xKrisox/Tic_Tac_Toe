# Tic Tac Toe (C)

A small console Tic-Tac-Toe for two players, written in C. The code is split into:
- main.c – game loop and input
- board.c / board.h – board storage, printing, and win checking

Build (Linux/macOS):
gcc main.c board.c -o tictactoe

Run (Linux/macOS):
./tictactoe

Build (Windows with MinGW):
gcc main.c board.c -o tictactoe.exe

Run (Windows):
.\tictactoe.exe

How it works:
The board is stored in a global array arr[10] (indices 1–9). showboard() prints
the board. checkForWin() returns 1 when someone wins, 0 for a draw, and -1 if the
game should continue. The main loop asks for a number 1–9 and places X or O in
that cell if it is free.

How to play:
Start the program. Players 1 and 2 take turns typing a number from 1 to 9 that
corresponds to a free cell. First to complete a row, column, or diagonal wins.
If all cells are used, the game ends in a draw.

Notes:
This is a minimal example. You may want to add better input validation (e.g.
handling non-numeric input) and remove the compiled binary from the repository.
Consider adding a license file if you plan to share or reuse the code.

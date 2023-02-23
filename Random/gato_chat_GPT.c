//Este es un gato escrito por chat gpt NO FUNCIONA PORQUE NO ESTÁ COMPLETO

#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
#define X 1
#define O 2

void draw_board(int board[ROWS][COLS]) {
  int i, j;
  printf("\n");
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      switch (board[i][j]) {
        case X:
          printf(" X ");
          break;
        case O:
          printf(" O ");
          break;
        default:
          printf(" . ");
          break;
      }
      if (j < COLS - 1) {
        printf("|");
      }
    }
    printf("\n");
    if (i < ROWS - 1) {
      printf("---+---+---\n");
    }
  }
  printf("\n");
}

int check_winner(int board[ROWS][COLS]) {
  int i, j;
  // check rows
  for (i = 0; i < ROWS; i++) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
      return board[i][0];
    }
  }
  // check columns
  for (j = 0; j < COLS; j++) {
    if (board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
      return board[0][j];
    }
  }
  // check diagonals
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
    return board[0][0];
  }
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
    return board[0][2];
  }
  return 0;
}

int main() {
  int board[ROWS][COLS] = {0};
  int current_player = X;
  int row, col;
  int winner = 0;
  int moves = 0;
  while (!winner && moves < ROWS * COLS) {
    printf("Player %d's turn.\n", current_player);
    printf("Enter row and column (1-3): ");
    scanf("%d%d", &row, &col);
    row--;
    col--;
    if (board[row][col] == 0) {
      board[row][col] = current_player;
      moves++;
      winner = check_winner(board);
      if (winner) {
        printf("Player %d wins!\n", winner);
      } else if (moves == ROWS * COLS) {
        printf("Draw!\n");
      } else {
        current_player = current_player == X ? O : X;
      }
      draw_board;

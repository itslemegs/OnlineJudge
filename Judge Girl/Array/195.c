#include <stdio.h>
#include <stdbool.h>
// 1 odd
// 2 even

int board[3][3];

int move[1000][2];

int j = 1, N, resOdd = 0, resEven = 0, toCheck;

void print () {
  if (resOdd > resEven) {
    printf("Black wins.");
  } else {
    printf("White wins.");
  }
}

int end () {
  if (resOdd != resEven) {
    return true;
  }
  return 0;
}

void bnw (int toCheck) {
  if (toCheck == 1) {
    resOdd++;
  } else if (toCheck == 2) {
    resEven++;
  }
}

void check () {
  if (board[0][1] == board[0][0] && board[0][1] == board[0][2]) {
    toCheck = board[0][1];
  }
  if (board[1][1] == board[1][0] && board[1][1] == board[1][2]) {
    toCheck = board[1][1];
  }
  if (board[2][1] == board[2][0] && board[2][1] == board[2][2]) {
    toCheck = board[2][1];
  }
  if (board[1][0] == board[0][0] && board[1][0] == board[2][0]) {
    toCheck = board[1][0];
  }
  if (board[1][1] == board[0][1] && board[1][1] == board[2][1]) {
    toCheck = board[1][1];
  }
  if (board[1][2] == board[0][2] && board[1][2] == board[2][2]) {
    toCheck = board[1][2];
  }
  if (board[1][1] == board[0][0] && board[1][1] == board[2][2]) {
    toCheck = board[1][1];
  }
  if (board[1][1] == board[0][2] && board[1][1] == board[2][0]) {
    toCheck = board[1][1];
  }
  bnw (toCheck);
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &move[i][0], &move[i][1]);
  }
  for (int i = 0; i < N; i++) {
    if (move[i][0] > 2 || move[i][0] < 0 || move[i][1] > 2 || move[i][1] < 0) {
      continue;
    } else if (board[move[i][0]][move[i][1]] != 0) {
      continue;
    } else {
      if (j % 2 != 0) {
        board[move[i][0]][move[i][1]] = 1;
      } else {
        board[move[i][0]][move[i][1]] = 2;
      }
      check();
      if (end() == true) {
        print();
        break;
      }
      j++;
    }
  }
  if (resOdd == resEven) {
    printf("There is a draw.");
  }
  return 0;
}

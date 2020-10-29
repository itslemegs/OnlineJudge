#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int n, m,count = 0;

char name[10][64];

int bingo[10][256][256];

int move[256 * 256];

int isCross () {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if (bingo[player][i][j] == bingo[player][i][j + 1]) {
        bingo[player][i][j] = -1;
        count++;
        if (count != m) {
          return false;
        } else {
          return true;
        }
      } else if (bingo[player][i][j] == bingo[player][i + 1][j]) {
        bingo[player][i][j] = -1;
        count++;
        if (count != m) {
          return false;
        } else {
          return true;
        }
      } else if (bingo[player][i][i] == bingo[player][j][j]) {
        bingo[player][i][j] = -1;
        count++;
        if (count != m) {
          return false;
        } else {
          return true;
        }
      }
    }
  }
}
int check (int player, int moves) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if (bingo[player][i][j] == moves) {
        bingo[player][i][j] = -1;
      }
    }
  }
}

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", name[i]);
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < m; k++) {
        scanf("%d", bingo[i][j][k]);
      }
    }
  }
  for (int i = 0; i < pow(m, 2); i++) {
    scanf("%d", &move[i]);
  }
  for (int a = 0; a < pow(m, 2); a++) {
    for (int b = 0; b < n; b++) {
      check (b, move[a]);
    }
  }
  return 0;
}

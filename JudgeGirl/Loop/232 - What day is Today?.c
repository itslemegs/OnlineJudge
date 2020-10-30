#include <stdio.h>
#include <string.h>
// 0 is Sunday
//-1 wrong month
//-2 wrong day

int year, dayJan, month, day, n, answer;

void ans(int result, int dayJan) {
  int duration = result % 7;
  answer = dayJan + duration;
  if (answer >= 7) {
    answer %= 7;
    printf("%d\n", answer);
  } else {
    printf("%d\n", answer);
  }
}

int count (int month, int day) {
  int result = 0;
  for (int j = 1; j < month; j++) {
    if (month <= 7) {
      if (j % 2 != 0) {
        result += 31;
      } else {
        result += 30;
      }
    } else {
      if (j % 2 == 0) {
        result += 31;
      } else {
        result += 30;
      }
    }
  }
  if (month <= 7) {
    result--;
  }
  return result;
}

void countFour (int month, int day, int dayJan, int result) {
  if (month > 2) {
    result -= 1;
  }
  result += day;
  ans(result, dayJan);
}

void countElse (int month, int day, int dayJan, int result) {
  if (month > 2) {
    result -= 2;
  }
  result += day;
  ans(result, dayJan);
}

int whatYear(int year) {
  char cmd;
  int cmd1 = year % 4;
  int cmd2 = year % 100;
  int cmd3 = year % 400;
  if (cmd1 == 0) {
    if (cmd2 == 0) {
      if (cmd3 == 0) {
        cmd = 'y';
      } else {
        cmd = 'n';
      }
    } else {
      cmd = 'y';
    }
  } else {
    cmd = 'n';
  }
  return cmd;
}

int main() {
  scanf("%d %d", &year, &dayJan);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &month, &day);
    switch (whatYear(year)) {
      case 'y':
        if (month > 12 || month <= 0) {
          printf("-1\n");
          continue;
        } else if (month == 1 && day == 1) {
          answer = dayJan;
          printf("%d\n", answer);
        } else if (day <= 0) {
          printf("-2\n");
        } else {
          if (month == 2) {
            if (day > 29) {
              printf("-2\n");
              continue;
            } else {
              countFour (month, day, dayJan, count (month, day));
            }
          } else {
            if (month <= 7) {
              if (month % 2 != 0) {
                if (day > 31) {
                  printf("-2\n");
                  continue;
                } else {
                  countFour (month, day, dayJan, count (month, day));
                }
              } else {
                if (day > 30) {
                  printf("-2\n");
                  continue;
                } else {
                  countFour (month, day, dayJan, count (month, day));
                }
              }
            } else {
              if (month % 2 != 0) {
                if (day > 30) {
                  printf("-2\n");
                  continue;
                } else {
                  countFour (month, day, dayJan, count (month, day));
                }
              } else {
                if (day > 31) {
                  printf("-2\n");
                  continue;
                } else {
                  countFour (month, day, dayJan, count (month, day));
                }
              }
            }
          }
        }
        break;
      case 'n':
        if (month > 12 || month <= 0) {
          printf("-1\n");
          continue;
        } else if (month == 1 && day == 1) {
          answer = dayJan;
          printf("%d\n", answer);
        } else if (day <= 0) {
          printf("-2\n");
        } else {
          if (month == 2) {
            if (day > 28) {
              printf("-2\n");
              continue;
            } else {
              countElse (month, day, dayJan, count (month, day));
            }
          } else {
            if (month <= 7) {
              if (month % 2 != 0) {
                if (day > 31) {
                  printf("-2\n");
                  continue;
                } else {
                  countElse (month, day, dayJan, count (month, day));
                }
              } else {
                if (day > 30) {
                  printf("-2\n");
                  continue;
                } else {
                  countElse (month, day, dayJan, count (month, day));
                }
              }
            } else {
              if (month % 2 != 0) {
                if (day > 30) {
                  printf("-2\n");
                  continue;
                } else {
                  countElse (month, day, dayJan, count (month, day));
                }
              } else {
                if (day > 31) {
                  printf("-2\n");
                  continue;
                } else {
                  countElse (month, day, dayJan, count (month, day));
                }
              }
            }
          }
        }
        break;
    }
  }
  return 0;
}

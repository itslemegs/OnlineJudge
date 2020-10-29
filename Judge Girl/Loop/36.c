#include <stdio.h>

int year, month, day;

void calender (int dates, int day) {
  puts(" Su Mo Tu We Th Fr Sa");
  puts("=====================");
  for (int i = 0; i < day; i++) {
    printf("   ");
  }
  switch (day) {
    case 0:
      for (int i = 1; i <= dates; i++) {
        if (i % 7 == 0) {
          printf("%3d\n", i);
        } else if (i == dates) {
          printf("%3d\n", i);
        } else {
          printf("%3d", i);
        }
      }
      break;
    case 1:
      for (int i = 1; i <= dates; i++) {
        if (i % 7 == 6) {
          printf("%3d\n", i);
        } else if (i == dates) {
          printf("%3d\n", i);
        } else {
          printf("%3d", i);
        }
      }
      break;
    case 2:
      for (int i = 1; i <= dates; i++) {
        if (i % 7 == 5) {
          printf("%3d\n", i);
        } else if (i == dates) {
          printf("%3d\n", i);
        } else {
          printf("%3d", i);
        }
      }
      break;
    case 3:
      for (int i = 1; i <= dates; i++) {
        if (i % 7 == 4) {
          printf("%3d\n", i);
        } else if (i == dates) {
          printf("%3d\n", i);
        } else {
          printf("%3d", i);
        }
      }
      break;
    case 4:
      for (int i = 1; i <= dates; i++) {
        if (i % 7 == 3) {
          printf("%3d\n", i);
        } else if (i == dates) {
          printf("%3d\n", i);
        } else {
          printf("%3d", i);
        }
      }
      break;
    case 5:
      for (int i = 1; i <= dates; i++) {
        if (i % 7 == 2) {
          printf("%3d\n", i);
        } else if (i == dates) {
          printf("%3d\n", i);
        } else {
          printf("%3d", i);
        }
      }
      break;
    case 6:
      for (int i = 1; i <= dates; i++) {
        if (i % 7 == 1) {
          printf("%3d\n", i);
        } else if (i == dates) {
          printf("%3d\n", i);
        } else {
          printf("%3d", i);
        }
      }
      break;
  }
  puts("=====================");
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

int totalDate (int year, int month) {
  int date;
  switch (whatYear(year)) {
    case 'y':
      if (month == 2) {
        date = 29;
      } else {
        if (month <= 7) {
          if (month % 2 != 0) {
            date = 31;
          } else {
            date = 30;
          }
        } else {
          if (month % 2 != 0) {
            date = 30;
          } else {
            date = 31;
          }
        }
      }
      break;
    case 'n':
      if (month == 2) {
        date = 28;
      } else {
        if (month <= 7) {
          if (month % 2 != 0) {
            date = 31;
          } else {
            date = 30;
          }
        } else {
          if (month % 2 != 0) {
            date = 30;
          } else {
            date = 31;
          }
        }
      }
      break;
  }
  return date;
}

int main() {
  scanf("%d %d %d", &year, &month, &day);
  if (month > 12 || month <= 0 || day > 6 || day < 0) {
    printf("invalid\n");
  } else {
    calender(totalDate (year, month), day);
  }
  return 0;
}

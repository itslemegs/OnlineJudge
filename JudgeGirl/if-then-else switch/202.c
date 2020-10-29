#include <stdio.h>
#include <stdlib.h>

// not done yet

int result[3];

int gcd(int x, int y) {
  if (x == 0) {
    return y;
  }
  return gcd(y % x, x);
}

int lcm(int x, int y) {
  return ((x * y) / gcd(x, y));
}

void simplify(int x, int y) {
  int tempX = abs(x), tempY = abs(y);
  int divider = gcd(tempX, tempY);
  tempX /= divider;
  tempY /= divider;
  if (x < 0) {
    tempX = -1 * tempX;
  } else if (y < 0) {
    tempY = -1 * tempY;
  }
  result[1] = tempX;
  result[2] = tempY;
}

void mixed(int result[]) {
  int tempRes = result[1];
  while (abs(result[1]) > result[2]) {
    result[1] = abs(result[1]) - result[2];
    if (result[0] >= 0) {
      result[0]++;
    } else {
      result[0]--;
    }
  }
  if (result[0] != 0 && tempRes < 0) {
    result[0] = -1 * result[0];
    result[1] = abs(result[1]);
  }
}

int main() {
  int a, b, c, d, e, f, g, h, i ,j;
  int upperA, upperE;
  scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
  switch (d) {
    case 0: // addition
      if (c != g) {
        j = lcm(c, g);
      } else {
        j = c;
      }
      if (a < 0) {
        if (e > 0) {
          h = a + e;
          if (j != c && j != g) {
            i = (f * (j / g)) - (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) - b;
          } else if (j == g) {
            i = f - (b * (j / c));
          }
        } else if (e == 0) {
          h = a;
          if (j != c && j != g) {
            i = (f * (j / g)) - (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) - b;
          } else if (j == g) {
            i = f - (b * (j / c));
          }
        } else if (e < 0) {
          h = a + e;
          if (j != c && j != g) {
            i = (f * (j / g)) + (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) + b;
          } else if (j == g) {
            i = f + (b * (j / c));
          }
        }
      } else if (a > 0) {
        if (e > 0) {
          h = a + e;
          if (j != c && j != g) {
            i = (f * (j / g)) + (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) + b;
          } else if (j == g) {
            i = f + (b * (j / c));
          }
        } else if (e == 0) {
          h = a;
          if (j != c && j != g) {
            i = (f * (j / g)) + (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) + b;
          } else if (j == g) {
            i = f + (b * (j / c));
          }
        } else if (e < 0) {
          h = a + e;
          if (j != c && j != g) {
            i = (b * (j / c)) - (f * (j / g));
          } else if (j == c) {
            i = b - (f * (j / g));
          } else if (j == g) {
            i = (b * (j / c)) - f;
          }
        }
      } else if (a == 0) {
        if (e > 0) {
          h = e;
          if (j != c && j != g) {
            i = (f * (j / g)) + (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) + b;
          } else if (j == g) {
            i = f + (b * (j / c));
          }
        } else if (e == 0) {
          h = 0;
          if (j != c && j != g) {
            i = (f * (j / g)) + (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) + b;
          } else if (j == g) {
            i = f + (b * (j / c));
          }
        } else if (e < 0) {
          h = e;
          if (j != c && j != g) {
            i = (b * (j / c)) - (f * (j / g));
          } else if (j == c) {
            i = b - (f * (j / g));
          } else if (j == g) {
            i = (b * (j / c)) - f;
          }
        }
      }
      simplify(i, j);
      result[0] = h;
      if (abs(result[1]) > result[2]) {
        mixed(result);
      }
      break;
    case 1: // subtraction
      if (c != g) {
        j = lcm(c, g);
      } else {
        j = c;
      }
      if (a < 0) {
        if (e > 0) {
          h = a - e;
          if (j != c && j != g) {
            i = (f * (j / g)) + (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) + b;
          } else if (j == g) {
            i = f + (b * (j / c));
          }
        } else if (e == 0) {
          h = a;
          if (j != c && j != g) {
            i = (b * (j / c)) - (f * (j / g));
          } else if (j == c) {
            i = b - (f * (j / g));
          } else if (j == g) {
            i = (b * (j / c)) - f;
          }
        } else if (e < 0) {
          h = a + abs(e);
          if (j != c && j != g) {
            i = (f * (j / g)) - (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) - b;
          } else if (j == g) {
            i = f - (b * (j / c));
          }
        }
      } else if (a > 0) {
        if (e > 0) {
          h = a - e;
          if (j != c && j != g) {
            i = (b * (j / c)) - (f * (j / g));
          } else if (j == c) {
            i = b - (f * (j / g));
          } else if (j == g) {
            i = (b * (j / c)) - f;
          }
        } else if (e == 0) {
          h = a;
          if (j != c && j != g) {
            i = (b * (j / c)) - (f * (j / g));
          } else if (j == c) {
            i = b - (f * (j / g));
          } else if (j == g) {
            i = (b * (j / c)) - f;
          }
        } else if (e < 0) {
          h = a + abs(e);
          if (j != c && j != g) {
            i = (f * (j / g)) + (b * (j / c));
          } else if (j == c) {
            i = (f * (j / g)) + b;
          } else if (j == g) {
            i = f + (b * (j / c));
          }
        }
      } else if (a == 0) {
        if (e > 0) {
          h = e;
          if (j != c && j != g) {
            i = (b * (j / c)) - (f * (j / g));
          } else if (j == c) {
            i = b - (f * (j / g));
          } else if (j == g) {
            i = (b * (j / c)) - f;
          }
        } else if (e == 0) {
          h = 0;
          if (j != c && j != g) {
            i = (b * (j / c)) - (f * (j / g));
          } else if (j == c) {
            i = b - (f * (j / g));
          } else if (j == g) {
            i = (b * (j / c)) - f;
          }
        } else if (e < 0) {
          h = abs(e);
          if (j != c && j != g) {
            i = (b * (j / c)) + (f * (j / g));
          } else if (j == c) {
            i = b + (f * (j / g));
          } else if (j == g) {
            i = (b * (j / c)) + f;
          }
        }
      }
      if (i == 0) {
        result[0] = h;
        result[1] = i;
        result[2] = i;
        break;
      }
      simplify(i, j);
      result[0] = h;
      if (abs(result[1]) > result[2]) {
        mixed(result);
      }
      break;
    case 2: // multiplication
      if (a > 0) {
        if (b == 0) {
          if (f != 0) {
            if (e > 0) {
              upperE = (e * g) + f;
              i = a * upperE;
            } else if (e == 0) {
              i = a * f;
            } else if (e < 0) {
              upperE = (abs(e) * g) + f;
              i = a * (-1 * upperE);
            }
            j = 1 * g;
          } else {
            if (e != 0) {
              i = a * e;
              j = 1;
            } else {
              i = 0;
              j = 0;
            }
          }
        } else {
          if (f != 0) {
            if (e > 0) {
              upperA = (a * c) + b;
              upperE = (e * g) + f;
              i = upperA * upperE;
            } else if (e == 0) {
              upperA = (a * c) + b;
              i = upperA * f;
            } else if (e < 0) {
              upperA = (a * c) + b;
              upperE = (abs(e) * g) + f;
              i = upperA * (-1 * upperE);
            }
            j = c * g;
          } else {
            if (e != 0) {
              upperA = (a * c) + b;
              i = upperA * e;
              j = 1;
            } else {
              i = 0;
              j = 0;
            }
          }
        }
      } else if (a == 0) {
        if (b == 0) {
          result[0] = 0;
          result[1] = 0;
          result[2] = 0;
          break;
        } else {
          if (f != 0) {
            if (e > 0) {
              upperE = (e * g) + f;
              i = b * upperE;
            } else if (e == 0) {
              i = b * f;
            } else if (e < 0) {
              upperE = (abs(e) * g) + f;
              i = b * (-1 * upperE);
            }
            j = c * g;
          } else {
            if (e != 0) {
              upperA = (a * c) + b;
              i = upperA * e;
              j = 1;
            } else {
              i = 0;
              j = 0;
            }
          }
        }
      } else if (a < 0) {
        if (b == 0) {
          if (f != 0) {
            if (e > 0) {
              upperE = (e * g) + f;
              i = a * upperE;
            } else if (e == 0) {
              i = a * f;
            } else if (e < 0) {
              upperE = (abs(e) * g) + f;
              i = abs(a) * upperE;
            }
            j = 1 * g;
          } else {
            if (e != 0) {
              i = abs(a) * abs(e);
              j = 1;
            } else {
              i = 0;
              j = 0;
            }
          }
        } else {
          if (f != 0) {
            if (e > 0) {
              upperA = (abs(a) * c) + b;
              upperE = (e * g) + f;
              i = (-1 * upperA) * upperE;
            } else if (e == 0) {
              upperA = (abs(a) * c) + b;
              i = (-1 * upperA) * f;
            } else if (e < 0) {
              upperA = (abs(a) * c) + b;
              upperE = (abs(e) * g) + f;
              i = upperA * upperE;
            }
            j = c * g;
          } else {
            if (e != 0) {
              upperA = (abs(a) * c) + b;
              i = upperA * abs(e);
              j = 1;
            } else {
              i = 0;
              j = 0;
            }
          }
        }
      }
      simplify(i, j);
      result[0] = 0;
      if (abs(result[1]) > result[2]) {
        mixed(result);
      }
      break;
    case 3: // division
      if (a == e && b == f && c == g) {
        result[0] = 1;
        result[1] = 0;
        result[2] = 1;
        break;
      }
      if (a > 0) {
        if (e > 0) {
          upperA = (a * c) + b;
          upperE = (e * g) + f;
          i = upperA * g;
          j = c * upperE;
        } else if (e == 0) {
          upperA = (a * c) + b;
          i = upperA * g;
          j = c * f;
        } else if (e < 0) {
          upperA = (a * c) + b;
          upperE = (abs(e) * g) + f;
          i = (-1 * upperA) * g;
          j = c * upperE;
        }
      } else if (a == 0) {
        if (e > 0) {
          upperE = (e * g) + f;
          i = b * g;
          j = c * upperE;
        } else if (e == 0) {
          i = b * g;
          j = c * f;
        } else if (e < 0) {
          upperE = (abs(e) * g) + f;
          i = b * (-1 * g);
          j = c * upperE;
        }
      } else if (a < 0) {
        if (e > 0) {
          upperA = (abs(a) * c) + b;
          upperE = (e * g) + f;
          i = (-1 * upperA) * g;
          j = c * upperE;
        } else if (e == 0) {
          upperA = (abs(a) * c) + b;
          i = (-1 * upperA) * g;
          j = c * f;
        } else if (e < 0) {
          upperA = (abs(a) * c) + b;
          upperE = (abs(e) * g) + f;
          i = upperA * g;
          j = c * upperE;
        }
      }
      simplify(i, j);
      result[0] = 0;
      if (abs(result[1]) > result[2]) {
        mixed(result);
      }
      break;
  }
  printf("%d\n%d\n%d\n", result[0], result[1], result[2]);
  return 0;
}

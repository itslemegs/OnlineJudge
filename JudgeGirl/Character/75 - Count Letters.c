#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char string[1000];
  int count[26] = {}, i;
  scanf("%s", string);
  int length = strlen(string);
  for (i = 0; i < length; i++) {
    if (isalpha(string[i])) {
      int pos = tolower(string[i]) - 97;
      count[pos]++;      
    }
  }
  for (i = 0; i < 26; i++) {
    printf("%d\n", count[i]);
  }
  return 0;
}

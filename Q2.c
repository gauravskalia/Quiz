#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

void mapping_function(int num) {
  char line[MAX_LENGTH];
  int current_num;
  char current_letters[MAX_LENGTH];
  FILE * fp = fopen("file.csv", "r");

  while (fgets(line, MAX_LENGTH, fp) != NULL) {
    sscanf(line, "%d,%s", & current_num, current_letters);
    if (current_num == num) {
      printf("%s\n", current_letters);
      break;
    }
  }
  fclose(fp);
}
int main() {
  mapping_function(17941);
  return 0;
}
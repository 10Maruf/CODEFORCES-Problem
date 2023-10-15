#include <stdio.h>

char tic_tac_toe(char a[3][3]){
    for (int r = 0; r < 3; r++) {
        if (a[r][0] == a[r][1] && a[r][1] == a[r][2] && a[r][0] != '.') {
            return a[r][0];
        }
    }
    for (int c = 0; c < 3; c++) {
        if (a[0][c] == a[1][c] && a[1][c] == a[2][c] && a[0][c] != '.') {
            return a[0][c];
        }
    }
    if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '.') {
        return a[0][0];
    }
    if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '.') {
        return a[0][2];
    }
    return 'D';
}

int main() {
  int t;
  scanf("%d", &t);

  while (t>0) {
      char a[3][3];
      for (int i = 0; i < 3; i++) {
          scanf("%s", a[i]);
      }
      char w = tic_tac_toe(a);
      if (w == 'X') {
            printf("X\n");
      }else if (w == 'O') {
            printf("O\n");
      }else if (w == '+') {
            printf("+\n");
      }else {
            printf("DRAW\n");
      }
      t--;
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
void main() {
  int a[10][10], c[10][10], r[10], av[10], ca[10][10], i, j, k, n, m, temp = 0,
                                                                      tem, ch;

  printf("enter no processes");
  scanf("%d", &m);
  printf("enter no of resources");
  scanf("%d", &n);
  printf("\nenter claim\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &c[i][j]);
  printf("\nenter alocation matrix\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  printf("\nenter resourse vector\n");
  for (i = 0; i < n; i++)
    scanf("%d", &r[i]);
  k = 0;
  do {
    printf("claim\tallocation\tca\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++)
        printf("%3d", c[i][j]);
      printf("\t");
      for (j = 0; j < n; j++)
        printf("%3d", a[i][j]);
      printf("\t\t");
      for (j = 0; j < n; j++) {
        ca[i][j] = c[i][j] - a[i][j];
        printf("%3d", ca[i][j]);
      }
      printf("\n");
    }
    temp = 0;
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++)
        temp = temp + a[j][i];
      av[i] = r[i] - temp;
      temp = 0;
    }
    printf("\nresource vector:  ");
    for (i = 0; i < n; i++)
      printf("%3d", r[i]);
    printf("\navailable vector:  ");
    for (i = 0; i < n; i++)
      printf("%3d", av[i]);
    if (k == 0)
      printf("\n****initial state****\n");
    else
      printf("\n***p%d runs to completion*****\n", tem + 1);
    if (k < n) {
      temp = 0;

      for (i = 0; i < m; i++) {
      lab:
        for (j = 0; j < n; j++) {

          if (ca[i][j] == 0)
            temp++;
        }
        if (temp == n) {
          i++;
          temp = 0;
          goto lab;
        } else {
          for (j = 0; j < n; j++) {
            if (ca[i][j] <= av[j])
              tem = i;
            else {
              if (i > m) {
                printf("\nunsafe state");
                goto end;
              } else {
                i++;
                goto lab;
              }
            }
          }
        }

        for (j = 0; j < n; j++) {
          a[tem][j] = 0;
          c[tem][j] = 0;
          ca[tem][j] = 0;
        }
        break;
      }
    } else

    {
      printf("\nprocesses are completed");
      goto end;
    }
    k++;
    printf("continue press ZERO");
    scanf("%d", &ch);
  } while (ch == 0);
end:
  exit(0);
}

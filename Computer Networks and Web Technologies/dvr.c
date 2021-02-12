#include <stdio.h>
int ja, ji, jh, jk;
void calc();
int repa[20], repi[20], reph[20], repk[20], rsp[20];
char line[20];
int main() {
  int i = 0;
  printf("Enter a delay time\n");
  scanf("%d %d %d %d", &ja, &ji, &jh, &jk);
  printf("Enter response time\n");
  for (i = 0; i < 12; i++) {
    printf("Enter value \n");
    scanf("%d %d %d %d", &repa[i], &repi[i], &reph[i], &repk[i]);
  }
  calc();
  printf("Least response\n");
  for (i = 0; i < 12; i++) {
    printf("%d\t%c\n", rsp[i], line[i]);
  }
}
void calc() {
  int i;
  for (i = 0; i < 12; i++) {
    repa[i] = repa[i] + ja;
    repi[i] = repi[i] + ji;
    reph[i] = reph[i] + jh;
    repk[i] = repk[i] + jk;
  }
  for (i = 0; i < 12; i++) {
    if (i == 9) {
      rsp[i] = 0;
      line[i] = 'J';
    } else {
      rsp[i] = min(repa[i], repi[i], reph[i], repk[i]);
      if (rsp[i] == repa[i])
        line[i] = 'A';
      else if (rsp[i] == repi[i])
        line[i] = 'I';
      else if (rsp[i] == reph[i])
        line[i] = 'H';
      else
        line[i] = 'K';
    }
  }
}
int min(int repa, int repi, int reph, int repk) {
  int i, j;
  if (repa < repi)
    i = repa;
  else
    i = repi;
  if (reph < repk)
    j = reph;
  else
    j = reph;
  if (i < j)
    return i;
  else
    return j;
}

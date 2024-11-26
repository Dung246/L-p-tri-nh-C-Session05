#include<stdio.h>
int main() {
  int n;
  long S;
  S = 0;
  printf("Nhap vao so n: ");
  scanf("%d", &n);
  for(int i = 1; i <=n; i++) {
        S = S + i;
    }
  printf("Tong cua 1 + 2 +... + %d la %ld : ", n, S);
}

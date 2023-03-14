#include <stdio.h>

int main() {
  char a[100]="white";
  int length;
  int i;
  char *p1;
  p1=&a;
  for(i=0;i<=4;i++)
  {
      printf("%u=>%c\n",p1+i,*(p1+i));
  }
  length = p1 - a;
  printf("Length of '%s' is %d", a, length);

    return 0;
}

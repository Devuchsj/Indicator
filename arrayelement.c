
#include <stdio.h>

int main() {
   int a[100]={1,2,3,4,5};
   int *p[100];
   int i;
   for(i=0;i<=4;i++)
   {
       p[i]=&a[i];
       printf("%u=>%d\n",p[i],*p[i]);
   }

    return 0;
}

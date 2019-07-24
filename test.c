#include <stdio.h>
int main(){
  int x[2][3] = {{0, 1, 2}, {3, 4, 5}};
  printf("%d\n", x[1][0]);
  printf("%d\n", *(*(x+1)));

 

  printf("%d\n", x[1][2]);
  printf("%d\n", *(*(x+1)+2));

 return (0);
}

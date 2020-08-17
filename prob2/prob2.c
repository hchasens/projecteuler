#include<stdio.h>

void main(){
  int sumOf=0;
  int x = 1;
  int y = 1;
  int stopAt = 4000000;

  while(y<stopAt){
    if(y%2==0) sumOf+=y;
    int i = y;
    y = x + y;
    x = i;
  }

  printf("%d\n", sumOf);
}

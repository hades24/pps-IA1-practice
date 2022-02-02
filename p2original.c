#include <stdio.h>

int input()
{
  int n;
  printf("enter the numbers \n");
  scanf("%d", &n);
  return n;
}
int compare(int a, int b, int c)
{
  if(a>b && a>c){
    return a;
  }
  else if(b>c)
  {
    return b;
  }
  else{
    return c;
  }
}
void output(int a, int b, int c, int value)
{
  printf("from %d, %d and %d, the greatest number is %d", a,b,c,value);
}
int main()
{
  int x=input();
  int y=input();
  int z=input();
  int comp=compare(x,y,z);
  output(x,y,z,comp);
  return 0;
}
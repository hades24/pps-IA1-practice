#include <stdio.h>

int input()
{
  int n;
  printf("enter the number \n");
  scanf("%d", &n);
  return n;
}
int add(int a, int b)
{
  int sum=0;
  sum=a+b;
  return sum;
}
void output(int value)
{
  printf("SUM IS %d", value);
}
int main()
{
  int x=input();
  int y=input();
  int Q=add(x,y);   
  output(Q);
  return 0;
}
#include <stdio.h>

int input(int *n)
{
  printf("enter the last natural number to sum \n");
  scanf("%d", &*n);
}
int add(int n)
{
  int i, sum=0;
  for(i=0;i<n;i++){
    sum=n*(n+1)/2;
  }
  return sum;
}
void output(int n, int value)
{
  printf("sum of first %d natural numbers is %d", n,value);
}
int main()
{
  int n, SUM;
  input(&n);
  SUM=add(n);
  output(n,SUM);
  return 0;
}
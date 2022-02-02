#include <stdio.h>

int input_size()
{
  int n;
  printf("how many numbers to add \n");
  scanf("%d", &n);
  return n;
}
int input_numbers(int a[30],int n)
{
  int i;
  printf("enter the numbers \n");
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  return a[n];
}
int add(int a[30], int n)
{
  int i, sum=0;
  for(i=0;i<n;i++){
    sum= sum + a[i];
  }
  return sum;
}
void output(int value)
{
  printf("sum of the given numbers is %d", value);
}
int main()
{
  int a[30], n, SUM;
  n=input_size();
  a[n]=input_numbers(a,n);
  SUM=add(a,n);
  output(SUM);
  return 0;
}
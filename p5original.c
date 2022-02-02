#include <stdio.h>

float input()
  {
    float n;
    printf("enter the number to find the square root for \n");
    scanf("%f", &n);
    return n;
  }
float square_root(float n)
{
  float i, p,root;
  printf("enter a random number (lesser than %.1f)",n);
  scanf("%f",&p);
  for(i=0;i<p;i++){
    root=(p+n/p)/2;  
    p=root;
  }
  return root;
}
void output(float n, float value)
{
  printf("square root of %.2f is :  %.2f",n,value);
}
int main()
{
  float x,y;
  x=input();
  y=square_root(x);
  output(x,y);
  return 0;
}
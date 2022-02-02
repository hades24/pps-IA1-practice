#include <stdio.h>

void input_strings(char *a, char *b)
{
  printf("enter first word \n");
  scanf("%s", a);
  printf("enter second word \n");
  scanf("%s", b);
}
int str_compare(char *a, char *b)
{
  int i;
  for(i=0; a[i]!='\0' && a[i]==b[i];i++);
  return a[i]-b[i];
}
void output(char *a, char *b, int value)
{
  if(value==0){
    printf("strings are equal");
  }
  else if(value>0){
    printf("%s is greater than %s",a,b);
  }
  else{
    printf("%s is greater than %s",b,a);
  }
}
int main()
{
  char a[30], b[30];
  int result;
  input_strings(a,b);
  result=str_compare(a,b);
  output(a,b,result);
  return 0;
}
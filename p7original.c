#include <stdio.h>

struct n_complex
{
    float real;
    float imaginary;
};
typedef struct n_complex n_complex;
n_complex addtition(n_complex n1, n_complex n2);

n_complex input()
{
    struct n_complex comp;
    printf("enter the real and imaginary part \n");
    scanf("%f%f", &comp.real, &comp.imaginary);
    return comp;
}
n_complex add(n_complex n1, n_complex n2)
{
    n_complex sum;
    sum.real= n1.real + n2.real;
    sum.imaginary= n1.imaginary + n2.imaginary;
    return sum;
}
void output(n_complex result)
{
    printf("SUM = %.1f + %.1fi", result.real, result.imaginary);
}
int main()
{
    n_complex result;
    n_complex n1=input();
    n_complex n2=input();
    result = add(n1,n2);
    output(result);
}
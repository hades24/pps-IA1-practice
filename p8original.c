#include <stdio.h>
struct n_complex
{
	float real;
	float imaginary;
};
typedef struct n_complex complex;
int get_n()
{
	int a;
	printf("enter number of complex numbers to add \n");
	scanf("%d", &a);
	return a;
}
void input_num(int N, complex c[])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("enter the real and imaginary part for %d complex no. \n", i+1);
		scanf("%f %f",&c[i].real, &c[i].imaginary);
	}
}
void add_complex(int N, complex z[], complex *total)
{
	int i;
	total->real=0;
	total->imaginary=0;
	for(i=0;i<N;i++)
	{
		total->real+=z[i].real;
		total->imaginary+=z[i].imaginary;
	}
}
void output_complex(complex total)
{
	printf("SUM = %.1f + %.1fi",total.real,total.imaginary);
}
int main()
{
	int n=0;
	complex z[n];
	complex total={0,0};
	n=get_n();
	input_num(n,z);
	add_complex(n,z,&total);
	output_complex(total);
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	int output;
	output= a + b;
	return output;
}

int square(int n)
{
	return (n*n);
}

int get_max(int a, int b)
{
	if (a>b) return (a);
	else return (b);
}
int main(int argc, char *argv[]) {
	
	int w, x, y, z;
	int output;
	int output1;
	
	x=2;
	y=5;
	z=9;
	
	output = sumTwo(x,y);
	printf("sumTwo : %i\n", output);
	
	output1 = square(z);
	printf("square : %i\n", output1);
	
	printf("get_max : %i\n", get_max(x, y) );
	
	return 0;
}

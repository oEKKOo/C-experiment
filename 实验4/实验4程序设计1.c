/*ʵ��4-4���������1����������������*/
#include<stdio.h>
#include<math.h>
#define s ((a+b+c)/2)
#define area (sqrt(s*(s-a)*(s-b)*(s-c)))
int main0405()
{
	float a, b, c;
	printf("Input three number:");
	scanf_s("%f %f %f", &a, &b, &c);
	printf("area of triangle is %f\n", area);
	return 0;
}


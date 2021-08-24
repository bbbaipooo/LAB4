#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c,s,area;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if((a + b > c) || (a + c > b) || (c + b > a)&&(a>0)&&(b>0)&&(c>0))
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("area of triangle = %d", area);
	}
	else
	{
		printf("0");
	}
}
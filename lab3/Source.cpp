#include "Header.h"
#include <iostream>

double f(double x)
{
	return((log(x)*log(x))/x);
}

double max(double a, double b, double h, ListBox^ Lb)
{
	double max = -1.E38;
	int n = floor((b - a) / h) + 1;
	double x, y;
	for (int i = 1; i <= n; i++) 
	{
		x = a + (i - 1) * h;
		y = f(x);
		if (y > max) max = y;
		
		Lb->Items->Add(String::Format("{0}		          {1}",x,y));
	}
	if (max == -1.E38) return 0;
	return max;
}
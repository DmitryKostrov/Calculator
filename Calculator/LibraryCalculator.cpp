#include "LibraryCalculator.h"

double LibraryCalculator::Calculate(double a, char oper, double b)
{
	switch (oper)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	default:
		return 0.0;
		break;
	}
}

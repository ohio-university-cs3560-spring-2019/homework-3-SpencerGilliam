/////////////////////////////////////////////////////
// Spencer Gilliam
// CS 3560
// Professor Mourning
// 03/04/2019
// Using variadic function to find standard deviation
/////////////////////////////////////////////////////


#include "stddev.h"
#include <cstdarg>
#include <cmath>

double stddev(int n, ... )
{
	va_list va;
	va_start(va, n);
	double sum = 0; //Sum for integers
	double stddev = 0; //Variable used to find the standard deviation
	
	for(int i = 0; i < n; i++)
	{
		sum += va_arg(va, int); //Receives the sum of all integers
	}
	
	double mean = sum/n; //Finds the average of Numbers
	va_start(va, n);
	int arg = 0;

	for(int i = 0; i < n; i++)
	{
		arg = va_arg(va, int);
		stddev += (arg - mean) * (arg - mean);
	}
	stddev /= n;
	return sqrt(stddev); //Returns the square root of standard deviation
}
#include <iostream>
#include <vector>
#include <cmath>

//! brief { The function computes the standard deviation }
//! \param <int* a> {Array of integers}
//! \param <int n> { The number of elements in the array (a) }
//! \return { Returns a double, which is the standard deviation for the set of numbers }

double deviation( int* a, int n )
{
	int sum= 0;
	for(size_t i = 0; i <= n-1; i++)
	{
		sum += a[i];

	} 
	double mean = sum /= (n-1);
	double stddev = 0;
	for(size_t i = 0; i <= n - 2; i++)
	{
		stddev += (a[i] - mean) * (a[i] - mean); 
	}
	stddev /= (n-1);
	if(stddev == 0){
		std::cout << "Sigma is zero." << std::endl;
	}
	return sqrt(stddev);
}
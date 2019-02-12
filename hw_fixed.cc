#include <iostream>
#include <vector>
#include <cmath>

//! brief 
//! \param
//! \param 
//! \return

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

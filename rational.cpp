#include "rational.h"

using namespace std;

rational::set()
{

}

rational::get()
{

}

rational::reduct(int &denominator , int &numerator)
{
	// we are going to fint the GCD
	int a = denominator;
	int b = numerator;
	int c;
	while ( a != 0 ) {
		c = a; a = b%a;  b = c;  
	}
	denominator /= b ;
	numerator /= b ;
  

}



rational::rational(void)
{
}


rational::~rational(void)
{
}

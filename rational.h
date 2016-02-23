#pragma once
class rational
{
public:
	void set();
	void get();
	void print();
	int reduct(int , int); // function that reduce a fraction to its smallest possible form
	bool equal(int , int , int , int); // function to check if fraction are equal
	rational(void);
	~rational(void);
};


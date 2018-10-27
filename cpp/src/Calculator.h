
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

class Calculator {
private:
	float a;
	float b;
	char op;

public:
	Calculator();
	virtual ~Calculator();
	
	float get_a();
	float get_b();
	char  get_op();
	
	void set_a(float a);
	void set_b(float b);
	void set_op(char op);
	
	float calculate();
};

#endif

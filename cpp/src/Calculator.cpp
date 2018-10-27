
#include "Calculator.h"

using namespace std;

Calculator::Calculator() {
	cout << "Constructor: " << this << endl;
	this->a = 0;
	this->b = 0;
	this->op = '+';
}

float Calculator::get_a() {
	return this->a;
}

float Calculator::get_b() {
	return this->b;
}

char Calculator::get_op() {
	return this->op;
}

void Calculator::set_a(float a) {
	this->a = a;
}

void Calculator::set_b(float b) {
	this->b = b;
}

void Calculator::set_op(char op) {
	this->op = op;
}

float Calculator::calculate() {
	switch(this->op) {
	case '+':
		return this->a + this->b;
		
	case '-':
		return this->a + this->b;
		
	case '*':
		return this->a + this->b;
		
	case '/':
		return this->a + this->b;
		
	case '%':
		return this->a + this->b;
		
	default:
		cerr << "Invalid operation: " +this->op;
		return 0;
	}
}

Calculator::~Calculator() {
	cout << "Destructor: " << this << endl;
}

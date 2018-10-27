
#include <cstdlib>
#include <iostream>

#include "Calculator.h"

using namespace std;

int main() {
	
	Calculator * cal = NULL;
	
	cal = new Calculator();
	
	cal->set_a(1);
	cal->set_b(2);
	cal->set_op('+');
	
	cout << endl << "Calculate: " << cal->get_a() << " " << cal->get_op()
		<< " " << cal->get_b() << " = " << cal->calculate() 
		<< endl << endl;
	
	delete cal;
	
	return 0;
}

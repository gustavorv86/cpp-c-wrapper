
#include <stdio.h>
#include <CalculatorWrapper.h>

int main() {
	
	Calculator * cal = Calculator_new();
	
	printf("Pointer into C code: %p \n\n", (void*)cal);
	
	Calculator_set_a(cal, 1.25);
	Calculator_set_b(cal, 2.5);
	Calculator_set_op(cal, '+');
	
	printf("Calculate: %f %c %f = %f \n\n", 
		Calculator_get_a(cal),
		Calculator_get_op(cal),
		Calculator_get_b(cal),
		Calculator_calculate(cal)
	);
	
	Calculator_delete(cal);
	
	return 0;
}

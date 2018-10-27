
#include "../Calculator.h"

extern "C" Calculator * Calculator_new()
{
	return new Calculator();
}

extern "C" void Calculator_delete(Calculator * self) {
	delete self;
}

extern "C" float Calculator_get_a(Calculator * self) {
	return self->get_a();
}

extern "C" float Calculator_get_b(Calculator * self) {
	return self->get_b();
}

extern "C" char Calculator_get_op(Calculator * self) {
	return self->get_op();
}

extern "C" void Calculator_set_a(Calculator * self, float a) {
	self->set_a(a);
}

extern "C" void Calculator_set_b(Calculator * self, float b) {
	self->set_b(b);
}

extern "C" void Calculator_set_op(Calculator * self, char op) {
	self->set_op(op);
}

extern "C" float Calculator_calculate(Calculator * self) {
	return self->calculate();
}


#ifndef CALCULATOR_WRAPPER_H
#define CALCULATOR_WRAPPER_H

// Include in your C code

typedef struct Calculator Calculator;

Calculator * Calculator_new();
void  Calculator_delete(Calculator * self);

float Calculator_get_a(Calculator * self);
float Calculator_get_b(Calculator * self);
char  Calculator_get_op(Calculator * self);

void  Calculator_set_a(Calculator * self, float a);
void  Calculator_set_b(Calculator * self, float b);
void  Calculator_set_op(Calculator * self, char op);

float Calculator_calculate(Calculator * self);

#endif

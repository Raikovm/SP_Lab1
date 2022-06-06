#pragma once

class assembly_class
{
public:
	static int summarize(int a, int b);

	static int subtraction(int a, int b);

	static int multiply(int a, int b);

	static int divide(int a, int b);

	static int more_than(int a, int b);

	static int more_than_equal(int a, int b);

	static int less_than(int a, int b);

	static int less_than_equal(int a, int b);

	static int equal(int a, int b);

	static int not_equal(int a, int b);

	static int Not(int a);

	static int And(int a, int b);

	static int Or(int a, int b);

	static int Xor(int a, int b);

	static int array_index(int* a, int b);

	static int logic_right(int a, int b);

	static int logic_left(unsigned char a, unsigned char b);

	static int cicle_right(unsigned char a, unsigned char b);

	static int cicle_left(unsigned char a, unsigned char b);
};
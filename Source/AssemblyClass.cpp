#include "AssemblyClass.h"

int assembly_class::summarize(int a, int b)
{
	int c = 0;
	_asm
	{
		mov eax, a
		add eax, b
		mov c, eax
	}
	return c;
}

int assembly_class::subtraction(int a, int b)
{
	int c = 0;
	_asm
	{
		mov eax, a
		Sub eax, b
		mov c, eax
	}
	return c;
}

int assembly_class::multiply(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mul b
		mov c, eax
	}
	return c;
}

int assembly_class::divide(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov edx, 0
		mov ebx, b
		idiv ebx
		mov c, eax
	}
	return c;
}

int assembly_class::more_than(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 1
		cmp eax, ebx
		ja above
		mov edx, 0
		above:
		mov c, edx
	}
	return c;
}

int assembly_class::more_than_equal(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 1
		cmp eax, ebx
		jae abeq
		mov edx, 0
		abeq:
		mov c, edx
	}
	return c;
}

int assembly_class::less_than(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 1
		cmp eax, ebx
		jb below
		mov edx, 0
		below:
		mov c, edx
	}
	return c;
}

int assembly_class::less_than_equal(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 1
		cmp eax, ebx
		jbe beeq
		mov edx, 0
		beeq:
		mov c, edx
	}
	return c;
}

int assembly_class::equal(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 1
		cmp eax, ebx
		je equ
		mov edx, 0
		equ:
		mov c, edx
	}
	return c;
}

int assembly_class::not_equal(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 1
		cmp eax, ebx
		jne nequ
		mov edx, 0
		nequ:
		mov c, edx
	}
	return c;
}

int assembly_class::Not(int a)
{
	int c;
	_asm
	{
		mov eax, a
		not eax
		mov c, eax
	}
	return c;
}

int assembly_class::And(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		and eax, ebx
		mov c, eax
	}
	return c;
}

int assembly_class::Or(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		or eax, ebx
		mov c, eax
	}
	return c;
}

int assembly_class::Xor(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		xor eax, ebx
		mov c, eax
	}
	return c;
}

int assembly_class::array_index(int* a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ebx, b
		mov ebx, [eax + 4 * ebx]
		mov c, ebx
	}
	return c;
}

int assembly_class::logic_right(int a, int b)
{
	int c;
	_asm
	{
		mov eax, a
		mov ecx, b
		shr eax, cl
		mov c, eax
	}
	return c;
}

int assembly_class::logic_left(unsigned char a, unsigned char b)
{
	unsigned char c;

	_asm
	{
		mov al, a
		mov cl, b
		shl al, cl
		mov c, al
	}
	return c;
}

int assembly_class::cicle_right(unsigned char a, unsigned char b)
{
	unsigned char c;

	_asm
	{
		mov al, a
		mov cl, b
		ror al, cl
		mov c, al
	}
	return c;
}

int assembly_class::cicle_left(unsigned char a, unsigned char b)
{
	unsigned char c;

	_asm
	{
		mov al, a
		mov cl, b
		rol al, cl
		mov c, al
	}
	return c;
}
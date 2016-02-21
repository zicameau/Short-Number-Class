/*************************

Trevor O'Neil
CISP 400 MW 5:20 - 6:30p.m.
Programming Project #2
February 20 2016

***************************/


#include <iostream>
#include <string>
#include "Short.h"

Short::Short()
{
	_n = 0;
	_dt = DEC;
}

Short::Short(signed char num, display_type disType)
{
	_n = num;
	_dt = disType;
}


void Short::add(const Short& num)
{
	_n +=  num._n;
}

void Short::sub(const Short& num)
{
	_n -= num._n;
}

void Short::mult(const Short& num)
{
	_n *= num._n;
}

void Short::div(const Short &num)
{
	_n /= num._n;
}

void Short::display() const
{
	if (_dt == DEC)
	{
		cout << (int)_n << endl;
	}
	else if (_dt == BIN)
	{
		_display_BIN();
	}
	else
	{
		_display_HEX();
	}
}

enum hexTypes = {

void _display_BIN()
{
	placeHold = _n;
	string hexNum;

	while (placeHold != 0)
	{
		hexHum = placeHold % 16;
		placeHold /=  16;

		if(placeHold >= 10)
		{
			switch (placeHold)
			{
				case (DEC):
			}
		}
	}

	cout << hexNum << endl;
}


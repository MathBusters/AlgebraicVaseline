#include "Stdafx.h"

#include "RationalNumbers.hpp"

using namespace Dll;

int GCD(int a, int b)
{
	if (b == 0)
		return abs(a);

	return GCD(b, a % b);
}

void RationalNumbers::Reduce()
{
	int gcd = GCD(_numerator, _denominator);

	_numerator = _numerator / gcd;
	_denominator = _denominator / gcd;
}

RationalNumbers::RationalNumbers(int numerator, int denominator) : _numerator(numerator)
{
	if (denominator <= 0)
		throw std::runtime_error("Denominator must be more zero");

	_denominator = denominator;

	Reduce();
}

int LCM(int a, int b)
{
	return (a / GCD(a, b)) * b;	//ну или можно в операторах + и - перемножить просто знаменатели, а потом дробь сократить) Ќо так выгоднее, если
								//знаменатели довольно большие
}

const RationalNumbers RationalNumbers::operator +(const RationalNumbers& other)
{
	int commonDenominator = LCM(_denominator, other._denominator);	

	int resultNumerator = _numerator * commonDenominator / _denominator + other._numerator * commonDenominator / other._denominator;

	RationalNumbers result(resultNumerator, commonDenominator);

	return result;
}

const RationalNumbers RationalNumbers::operator -(const RationalNumbers& other)
{
	int commonDenominator = LCM(_denominator, other._denominator);

	int resultNumerator = _numerator * commonDenominator / _denominator - other._numerator * commonDenominator / other._denominator;

	RationalNumbers result(resultNumerator, commonDenominator);

	return result;
}

const RationalNumbers RationalNumbers::operator *(const RationalNumbers& other)
{
	RationalNumbers result(_numerator * other._numerator, _denominator * other._denominator);

	return result;
}
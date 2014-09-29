#pragma once
#include "RationalNumbersLibApi.hpp"

namespace RationalNumbersLib
{
	class RATIONALNUMBERSLIB_API RationalNumbers
	{
	private:
		void Reduce();	//����� ������ ����������� - � �� ��� ������������ ����-���� ����� ���� int �������������

	public:
		const RationalNumbers(int numerator, int denominator);

		const RationalNumbers operator+(const RationalNumbers& other);
		const RationalNumbers operator-(const RationalNumbers& other);
		const RationalNumbers operator*(const RationalNumbers& other);

		const RationalNumbers Reverse();
	private:
		int _numerator;	// ��� ��� ������� ���������� ����� �������� bool - �������� �����. ����� ����� ������ ������ ������)
		unsigned int _denominator;
	};
}
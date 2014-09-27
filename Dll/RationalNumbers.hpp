#pragma once

namespace Dll
{
	class RationalNumbers
	{
	private:
		void Reduce();	//����� ������ ����������� - � �� ��� ������������ ����-���� ����� ���� int �������������

	public:
		const RationalNumbers(int numerator, int denominator);

		const RationalNumbers operator+(const RationalNumbers& other);
		const RationalNumbers operator-(const RationalNumbers& other);
		const RationalNumbers operator*(const RationalNumbers& other);

	private:
		int _numerator;	// ��� ��� ������� ���������� ����� �������� bool - �������� �����. ����� ����� ������ ������ ������)
		unsigned int _denominator;
	};
}
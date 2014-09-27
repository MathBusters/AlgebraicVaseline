#pragma once

namespace Dll
{
	class RationalNumbers
	{
	private:
		void Reduce();	//пусть всегда сокращается - а то при перемножении туда-сюда можно весь int израсходовать

	public:
		const RationalNumbers(int numerator, int denominator);

		const RationalNumbers operator+(const RationalNumbers& other);
		const RationalNumbers operator-(const RationalNumbers& other);
		const RationalNumbers operator*(const RationalNumbers& other);

	private:
		int _numerator;	// или для больших вычислений можно добавить bool - контроль знака. Тогда чисел дофига больше влезет)
		unsigned int _denominator;
	};
}
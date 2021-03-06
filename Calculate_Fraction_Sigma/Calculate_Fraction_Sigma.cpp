// Calculate_Fraction_Sigma.cpp : This code calculates this:: 4\cdot \sum_{k=1}^{10^6} \frac{(-1)^{k+1}}{2k-1} = 4\cdot(1-1/3+1/5-1/7+1/9-1/11\ldots).
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

int main()
{
	double Numerator = 0;
	double Denominator = 0;
	double Sigma = 0;
	double Result = 0;

	for (int k = 1; k <= 10; k++)
	{

		Numerator = pow(-1, (k + 1));
		Denominator = (2 * k) + 1;
		Sigma = 4 * (Numerator / Denominator);
		Result += Sigma;

	}

	std::cout << Result << "\n";

	return 0;
}


// Roman to Integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int romanToInt(std::string roman) {
	int result_int = 0;

	for (int i = 0; i < roman.size(); ++i)
	{
		switch (roman[i])
		{
		case 'I':
			if ((roman[i] == 'I' && i + 1 < roman.size()) && roman[i + 1] == 'X') {
				result_int = result_int + 9;
				break;
			}
			else if (roman[i] == 'I' && i + 1 < roman.size() && roman[i + 1] == 'V') {
				result_int = result_int + 4;
				break;
			}
			else if (i > 0 && (roman[i - 1] == 'V' || roman[i - 2] == 'V' || roman[i - 3] == 'V')) {
				break;
			}
			else
			{
				result_int = result_int + 1;
				break;
			}
		case 'V':
			if (i == 0 && roman[i + 1] != 'I')
			{
				result_int = result_int + 5;
				break;
			}
			else if (i != 0 && roman[i - 1] != 'I' && roman[i + 1] != 'I')
			{
				result_int = result_int + 5;
				break;
			}
			else if (i + 1 < roman.size() && roman[i + 1] == 'I' && roman[i + 2] != 'I')
			{
				result_int = result_int + 6;
				break;
			}
			else if (i + 2 < roman.size() && roman[i + 1] == 'I' && roman[i + 2] == 'I' && roman[i + 3] != 'I')
			{
				result_int = result_int + 7;
				break;
			}
			else if (i + 2 < roman.size() && roman[i + 1] == 'I' && roman[i + 2] == 'I' && roman[i + 3] == 'I')
			{
				result_int = result_int + 8;
				break;
			}
			else
			{
				break;
			}

		case 'X':
			if (roman[i] == 'X' && i != 0 && roman[i - 1] == 'I')
				break;
			if (roman[i + 1] == 'L')
			{
				result_int = result_int + 40;
				break;
			}
			else if (roman[i + 1] == 'C') {
				result_int = result_int + 90;
				break;
			}
			else
			{
				result_int = result_int + 10;
				break;
			}
		case 'L':
			if (i != 0 && roman[i - 1] == 'X')
			{
				break;
			}
			else
			{
				result_int = result_int + 50;
				break;
			}
		case 'C':
			if (roman[i + 1] == 'M')
			{
				result_int = result_int + 900;
				break;
			}
			if (roman[i + 1] == 'D')
			{
				result_int = result_int + 400;
				break;
			}
			else if (i != 0 && roman[i - 1] == 'X')
			{
				break;
			}
			else {
				result_int = result_int + 100;
				break;
			}
		case 'D':
			if (i != 0 && roman[i - 1] == 'C')
			{
				break;
			}
			else
			{
				result_int = result_int + 500;
				break;
			}
		case 'M':
			if (i == 0) {
				result_int = result_int + 1000;
				break;
			}
			if (roman[i - 1] != 'C') {
				result_int = result_int + 1000;
				break;
			}
		}
	}
	return result_int;
}

int main()
{
	std::cout << romanToInt("MCMXIV") << '\n';
    return 0;
}


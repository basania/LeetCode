// Palindrome Number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isPalindrome(int x) {
	int xx = x;
	if (x <= 0) return false;
	int sum = 0;
	while (x > 0)
	{
		sum = sum * 10 + x % 10;

		x = x / 10;

	}
	std::cout << "sum = " << sum << '\n';
	return sum == xx;
}

int main()
{
	std::cout << isPalindrome(121) << std::endl;
	return 0;
}

int main()
{
    return 0;
}


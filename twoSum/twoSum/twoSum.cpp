// twoSum.cpp : Defines the entry point for the console application.
//

// reverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

std::vector<int> sum(std::vector<int>& sum, int number)
{
	for (int i = 0; i < sum.size(); i++)
	{
		for (int j = 0; j < sum.size(); j++)
		{
			if (i != j)
			{
				if (sum[i] + sum[j] == number)
				{
					std::cout << "Found!\n";
					return { sum[i], sum[j] };
				}
			}
		}
	}

}


int main()
{
	std::vector<int> num1 = { 1, 3, 5, 7, 10, 4, 5 };
	sum(num1, 6);


	return 0;
}



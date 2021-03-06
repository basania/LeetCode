// Longest Common Prefix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs) {

	char prefix_first;
	char prefix_second;
	
	std::string return_prefix = "";
	std::string temp = "";

	if (strs.empty())
		return "";

	if (strs.size() == 1)
	{
		temp = strs[0][0];
		return temp;
	}

	for (int i = 0; i <= strs.size(); i++)
	{
		for (int j = 0; j < strs.size(); j++)
		{
			if (j + 1 < strs.size())						
			{
				prefix_first = strs[j][i];
				prefix_second = strs[j + 1][i];

				if (i == 0 && prefix_first != prefix_second)
					return "";

				if (i != j && strs[j][i] != strs[j + 1][i])
					return return_prefix;
			}
		}
		if (prefix_first == prefix_second)
			return_prefix += prefix_first;

		if (i > 0 && prefix_first != prefix_second)
			return return_prefix;
	}
	return return_prefix;
}

int main()
{
	std::vector<std::string> str = { "abca", "abc" };

	std::cout << "func = " << longestCommonPrefix(str) << '\n';

    return 0;
}


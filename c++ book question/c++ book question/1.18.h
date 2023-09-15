#pragma once
#include<iostream>

int main5()
{
	std::cout << "enter two numbers: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;

	int low, up;
	if (v1 <= v2)
	{
		low = v1;
		up = v2;
	}
	else
	{
		low = v2;
		up = v1;
	}

	for (int val = low; val <= up; ++val)
	{
		std::cout << val << "," ;
	}
	return 0;
}

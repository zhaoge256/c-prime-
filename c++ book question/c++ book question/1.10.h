#pragma once
#include<iostream>

int main1()
{
	int sum = 0;
	for (int i = 50; i <= 100; ++i)
	{
		sum = sum + i;
	}
	std::cout << sum << std::endl;
	return sum;
}
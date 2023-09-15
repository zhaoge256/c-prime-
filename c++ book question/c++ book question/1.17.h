#pragma once
#include<iostream>

//输入一组数，输出信息说明有多少个负数
int main4()
{
	int n=0,value;
	while (std::cin >> value)
	{
		if (value < 0)
		{
			n = n + 1;
		}
		std::cout << n << std::endl;
	}
	return 0;
}
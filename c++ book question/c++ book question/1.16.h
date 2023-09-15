#pragma once
#include<iostream>

//输出用户输入的两个数中的较大者
int main3(int a , int b)
{
	if (a > b)
	{
		std::cout << a << std::endl;
	}
	else if (a < b)
	{
		std::cout << b << std::endl;
	}
	else
	{
		std::cout << "两个数相等！！" << std::endl;
	}
	return 0;
}

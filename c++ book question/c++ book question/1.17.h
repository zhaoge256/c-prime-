#pragma once
#include<iostream>

//����һ�����������Ϣ˵���ж��ٸ�����
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
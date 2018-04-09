#include "MinStack.h"
#include <iostream>


MinStack::MinStack(int size)
{
	p = new int[size];
	idx = -1;
	length = size;
	minTracker = new MinStack(size);

}

void MinStack::push(int num)
{
	idx++;
	
	p[idx] = num;
	std::cout << "Index " << idx << " has " << num << std::endl;
}

void MinStack::pop()
{
	if (idx > -1) {
		std::cout << "'" << p[idx] << "' removed" << std::endl;
		idx--;
	}
}

int MinStack::top()
{

	return p[idx];
	
}

void MinStack::displayTop()
{
	std::cout << "Top value is " << top() << std::endl;
	return;

}



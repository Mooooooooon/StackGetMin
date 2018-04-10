#include "MinStack.h"
#include <iostream>


MinStack::MinStack(int size)
{
	p = new int[size];
	idx = -1;
	length = size;
	mins = new int[size];


}

void MinStack::push(int num)
{
	idx++;
	
	p[idx] = num;
	std::cout << num << " added"<< std::endl;

	if (idx == 0) {
		mins[idx] = num;
			 
	}
	else {
		if (num < mins[idx - 1]) {
			mins[idx] = num;
		}
		else {
			mins[idx] = mins[idx - 1];
		}
	}
	

}

void MinStack::pop()
{
	if (idx > -1) {
		std::cout << p[idx] << " removed" << std::endl;
		idx--;
	}
}

int MinStack::top()
{
	if (idx > -1)
		return p[idx];	
}

void MinStack::displayTop()
{
	if (idx > -1) {
		std::cout << "Top value is " << top() << std::endl;
	}
	else {
		std::cout << "Stack is empty" << std::endl;
	}	
	return;
}


int MinStack::min()
{
	if (idx > -1) {
		return mins[idx];
	}	
	return -9999999;
}


void MinStack::displayMin()
{
	if (idx > -1) {
		std::cout << "Minimum value is " << min() << std::endl;
	}
	else {
		std::cout << "Stack is empty" << std::endl;
	}
	return;
}





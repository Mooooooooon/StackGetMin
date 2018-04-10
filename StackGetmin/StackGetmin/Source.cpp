
#include <iostream>
#include "MinStack.h"


using namespace std;


int main() {

	MinStack s(50);

	s.push(5);
	s.push(10);
	s.push(6);
	s.push(2);
	s.push(3);

	s.displayMin();
	
	s.pop();
	s.displayMin();


	s.pop();
	s.displayMin();




	
	return 0;
}
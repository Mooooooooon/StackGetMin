


class MinStack {
private:
	int *p; // pointer to main stack
	int idx; // index
	int length; // size of the stack
	int *mins; // pointer to minimum stack

public:
	MinStack(int size);
	void push(int num); // insert value to the top
	void pop(); // deletes the top value
	int top(); // returns the top value
	void displayTop(); // prints the top value
	int min(); // returns the minimum value
	void displayMin(); // prints the min value
};

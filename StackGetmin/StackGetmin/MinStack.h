


class MinStack {
private:

	int *p;
	int idx;
	int length;

	MinStack* minTracker;



public:
	MinStack(int size);

	void push(int num); // insert value to the top
	void pop(); // deletes the top value
	int top(); // returns the top value
	void displayTop(); // prints the top value







};

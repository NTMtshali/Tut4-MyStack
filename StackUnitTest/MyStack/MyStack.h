#ifndef MYSTACK_H
#define MYSTACK_H

class MyStack
{
private:
	int number;
	MyStack *linkptre;

public:
	MyStack(int);
	void pop(MyStack *);
	void push(MyStack *, int);
	int peek();
	bool isEmpty();
	bool isFull();
};
#endif
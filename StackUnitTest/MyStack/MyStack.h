#ifndef MYSTACK_H
#define MYSTACK_H

class MyStack
{
private:
	int number;
	int depth;
	MyStack *linkptre = 0;

public:
	MyStack(int, int);
	int pop(MyStack *);
	void push(MyStack *, int);
	int peek();
	bool isEmpty(MyStack *);
	bool isFull(MyStack *);
	void setnumber(int);
	bool check(MyStack *);
};
#endif
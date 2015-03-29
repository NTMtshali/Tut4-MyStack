#include "MyStack.h"
#include<iostream>
using namespace std;

MyStack::MyStack(int num, int d)
{
	setnumber(num);
	depth = d;
}

int MyStack::pop(MyStack *top)
{
	if (!isEmpty(top))
	{
		MyStack *newptre;
		newptre = top;
		top = top->linkptre;

		return newptre->number;
		delete newptre;
	}
	
	else
	{
		cout << "nothing to delete" << endl;
	}
}

void MyStack::push(MyStack *top, int num)
{
	if (!isFull(top))
	{
		MyStack *newptre = new MyStack(num, top->depth);
		newptre->linkptre = top;
		top = newptre;
	}
	else 
	{
		cout << "Stack is full" << endl;
	}

}

bool MyStack::isEmpty(MyStack *top)
{
	if (top==NULL)
	{
		return true;
	}

	else 
	{
		return false;
	}
}

bool MyStack::isFull(MyStack *top)
{
	if (top->check(top))
	{
		return 	true;
	}

	else
	{
		return false;
	}
}

void MyStack::setnumber(int num)
{
	number = num;
}

bool MyStack::check(MyStack *top)
{
	int i = 0;
	while (!(top->linkptre=NULL))
	{
		top = top->linkptre;
		i++;
	}

	if (i+1 == depth)
	{
		return true;
	}
	else
	{
		return false;
	}
}
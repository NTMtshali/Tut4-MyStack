#include "MyStack.h"
#include   <iostream>
using namespace std;

int main(void)
{
	MyStack *Top = new MyStack(1, 10);
    
	for (int i = 1; i <=10; i++)
	{
		Top->push(Top, i);
	}

	for (int i = 1; i <=10; i ++)
	{
		cout << Top->pop(Top) << "\n" << endl;
	}
}
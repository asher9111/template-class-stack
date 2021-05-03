#include "TStack.h"
#include <iostream>

using namespace std;

template <class T>
Stack<T>::Stack(int s)
{
	size = s > 0 && s < 1000 ? s : 10;

	top = -1;
	stackPtr = new T[size];

}

template <class T>
int Stack<T>::push(const T& item)
{
	if (!isFull())
	{
		stackPtr[++top] = item;
		return 1;
	}
	return 0;
}

template <class T>
int Stack<T>::pop(T& popValue)
{
	if (!isEmpty())
	{
		popValue = stackPtr[top--];
		return 1;
	}
	return 0;
}


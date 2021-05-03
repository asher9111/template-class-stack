#pragma once

#include <iostream>

template <class T>
class Stack
{
public:
	Stack(int s =  10);

	~Stack() { delete[] stackPtr; }

	int push(const T&);
	int pop(T&);
	int isEmpty() const { return top == -1; }
	int isFull() const { return top == size - 1; }


private:

	int size;
	int top;
	T* stackPtr;
	   

};

template<class T>
inline int Stack<T>::pop(T&)
{
	return 0;
}

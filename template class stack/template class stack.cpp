

#include <iostream>
#include "TStack.h"

using namespace std;

int main()
{
    Stack<float> floatStack(5);
    float f = 1.1;
    cout << "arrangement of elements in floatStack" << endl;
    while (floatStack.push(f))
    {
        cout << f << '   ';
        f += 1.1;
    }
    
    
    cout << endl << "Stack is full !" << f << endl << endl << "poppin elements from floatStack" << endl;
    while (floatStack.pop(f))
    {
        cout << f << '   ';
    }

    cout << endl << "Stack is empty !" << endl;
    return 0;
}


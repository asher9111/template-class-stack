

#include <iostream>
#include "TStack.h"

using namespace std;

int main()
{
    Stack<float> floatStack(5);
    float f = ((float)1.1);                                                                         // явно привел дефолтовый дабл к флоату 
    cout << "arrangement of elements in floatStack" << endl;
    while (floatStack.push(f))
    {
        cout << f << '   ';
        f += 1.1f;                                                                                      // тут дефолтность стала флоатом из за f
    }
    
    
    cout << endl << "Stack is full !" << f << endl << endl << "poppin elements from floatStack" << endl;
    while (floatStack.pop(f))
    {
        cout << f << '   ';
    }

    cout << endl << "Stack is empty !" << endl;
    return 0;
}


#include <iostream>
#include "StaticStack.h"

using namespace std;

StaticStack::StaticStack():
    mNextElement(0)
{}


int StaticStack::pop()
{
    //mNextElement points to the first empty cell of the mBuffer.
    //We return the element in the cell right before.
    //The prefix decrement operator is used to decrement the value and get the new value
    return mBuffer[--mNextElement];
}

void StaticStack::push(int n)
{
    //Here the postfix increment operator is used to get the value before incrementing
    mBuffer[mNextElement++] = n;
}

unsigned int StaticStack::size() const
{
    return mNextElement;
}

void StaticStack::print() const
{
    cout << '[';
    if(mNextElement > 0){
        for(int i(0) ; i < mNextElement-1 ; ++i){
            cout << mBuffer[i] << ", ";
        }
        cout << mBuffer[mNextElement-1];
    }
    
    cout << "]\n";
}

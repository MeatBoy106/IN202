#include <iostream>
#include "DynamicStack.h"

using namespace std;

DynamicStack::DynamicStack(unsigned int size):
    mBuffer(new int[size]),
    mNextElement(0),
    mCapacity(size)
{}

DynamicStack::~DynamicStack()
{
    delete[] mBuffer;
}

void DynamicStack::resize()
{
    mCapacity *= 2;
    int* temp = new int[mCapacity];
    for(int i(0) ; i < mCapacity/2 ; i++){
        temp[i] = mBuffer[i];
    }
    delete[] mBuffer;
    mBuffer = temp;
}


int DynamicStack::pop()
{
    return mBuffer[--mNextElement];
}

void DynamicStack::push(int n)
{
    if(mNextElement >= mCapacity){
        resize();
    }
    mBuffer[mNextElement++] = n;
}

unsigned int DynamicStack::size() const
{
    return mNextElement;
}

void DynamicStack::print() const
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

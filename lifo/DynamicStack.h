#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H

class DynamicStack
{
    int* mBuffer;
    unsigned int mNextElement;
    unsigned int mCapacity;
    
    void resize();
    
public:
    DynamicStack(unsigned int size);
    ~DynamicStack();
    void push(int n);
    int pop();
    unsigned int size() const;
    void print() const;
};

#endif // DYNAMICSTACK_H

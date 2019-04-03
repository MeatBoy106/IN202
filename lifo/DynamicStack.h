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
    DynamicStack(const DynamicStack& other);
    ~DynamicStack();
    void push(int n);
    void push(int n, unsigned int rep);
    int pop();
    unsigned int size() const;
    void print() const;
};

#endif // DYNAMICSTACK_H

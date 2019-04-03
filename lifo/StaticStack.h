#ifndef STATICSTACK_H
#define STATICSTACK_H

class StaticStack
{
    //mSize must be initialized "inline" for the compiler to accept it as a static array size parameter.
    static const unsigned int mSize = 1024;
    
    int mBuffer[mSize];
    unsigned int mNextElement;
    
public:
    StaticStack();
    void push(int n);
    int pop();
    unsigned int size() const;
    
    void print() const;
};

#endif // STATICSTACK_H

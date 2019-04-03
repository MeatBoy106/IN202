#include <iostream>
#include "StaticStack.h"
#include "DynamicStack.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Static stack:\n";
    StaticStack s0;
    s0.print();
    s0.push(0);
    s0.print();
    s0.push(2);
    s0.print();
    s0.push(-1);
    s0.print();
    s0.pop();
    s0.print();
    s0.pop();
    s0.print();
    s0.pop();
    s0.print();

    cout << "\nDynamic stack (no resizing):\n";
    DynamicStack s1(5);
    s1.print();
    s1.push(0);
    s1.print();
    s1.push(2);
    s1.print();
    s1.push(-1);
    s1.print();
    s1.pop();
    s1.print();
    s1.pop();
    s1.print();
    s1.pop();
    s1.print();
    
    cout << "\nDynamic stack (with resizing):\n";
    DynamicStack s2(10);
    s2.print();
    for(int i(0) ; i < 30 ; ++i){
        s2.push(i);
    }
    s2.print();
    for(int i(0) ; i < 20 ; ++i){
        s2.pop();
    }
    s2.print();
}



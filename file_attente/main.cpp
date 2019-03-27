#include <iostream>
#include "Ticket.h"

int main() {
    Ticket* t0 = new Ticket;
    if(t0->isCalled()){
        printf("t0 is called\n");
    }
    
    Ticket* t2 = nullptr;
    {
        Ticket t1;
        if(! t1.isCalled()){
            printf("t1 is waiting\n");
        }
        
        delete t0;
        if(t1.isCalled()){
            printf("t1 is called\n");
        }
        
        t2 = new Ticket;
    }
    
    if(t2->isCalled()){
        printf("t2 is called\n");
    }
    delete t2;
}

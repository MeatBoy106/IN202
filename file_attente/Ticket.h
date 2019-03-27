#ifndef TICKET_H
#define TICKET_H

class Ticket
{
    static unsigned int mNextTicketId;
    static unsigned int mNextCalledTicketId;
    
    unsigned int mId;
public:
    static unsigned int getNextTicketId();
    static unsigned int getNextCalledTicketId();
    
    Ticket();
    ~Ticket();
    bool isCalled();
};

#endif // TICKET_H

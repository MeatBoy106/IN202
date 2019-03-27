#include <cstdio>
#include "Ticket.h"

unsigned int Ticket::mNextTicketId = 0;
unsigned int Ticket::mNextCalledTicketId = 0;

Ticket::Ticket():
    mId(mNextTicketId)
{
    printf("Ticket %u emitted.\n", mId);
    mNextTicketId++;
}

Ticket::~Ticket()
{
    mNextCalledTicketId++;
    printf("Ticket %u deleted.\n", mId);
}

bool Ticket::isCalled()
{
    return mId <= mNextCalledTicketId;
}

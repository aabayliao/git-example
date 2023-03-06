#include "queue.h"

unsigned char head,tail,queuecount;

void vQueueInit(void)
{
	head = 0;
	tail = 0;
	queuecount = 0;
}

int iQueueAdd(char* buffer, char msg)
{
	*buffer = msg;
}

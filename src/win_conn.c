

#include "win_conn.h"


WSADATA wsaData;


int initWinsock (void)
{
    int iResult;

    // Initialize Winsock
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
}



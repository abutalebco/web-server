//
// Connecting Socket
// 30/04/2026
//
// ConnectingSocket.hpp is a utility creating and managing a socket connection to a specified host and port.
// ConnectingSocket.hpp
//
// Mohamed Abutaleb
//

#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace WS
{
    class ConnectingSocket : public SimpleSocket
    {
    public:
        ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);
        int connect_to_network(int sock, struct sockaddr_in address);
    };
}

#endif /* ConnectingSocket_hpp */
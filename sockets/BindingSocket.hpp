//
// Binding Socket
// 29/04/2026
//
// Web Server C++ Library
// BindingSocket.hpp
//
// Mohamed Abutaleb
//

#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace WS
{
    class BindingSocket : public SimpleSocket
    {
    public:
        // constructor
        BindingSocket(int domain, int service, int protocol, int port, u_long interface);
        // virtual function from parent
        int connect_to_network(int sock, struct sockaddr_in address);
    };
}

#endif // BindingSocket_hpp
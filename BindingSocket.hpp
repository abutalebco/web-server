//
// Binding Socket
// 29/04/2026
//
// BindingSocket.hpp is a utility function that binds a socket to a specified port and address.
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
        BindingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface) {};
        int connect_to_network(int sock, struct sockaddr_in address);
    };
}

#endif // BindingSocket_hpp
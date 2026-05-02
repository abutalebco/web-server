//
// Binding Socket
// 29/04/2026
//
// Web Server C++ Library
// BindingSocket.cpp
//
// Mohamed Abutaleb
//

#include "BindingSocket.hpp"

// constructor
WS::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface)
{
    set_connection(connect_to_network(get_sock(), get_address()));
    test_connection(get_connection());
}

// definition of connecting
int WS::BindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}
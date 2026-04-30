//
// Connecting Socket
// 30/04/2026
//
// ConnectingSocket.cpp source file
// ConnectingSocket.cpp
//
// Mohamed Abutaleb
//

#include "ConnectingSocket.hpp"

WS::ConnectingSocket::ConnectingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface)
{
    set_connection(connect_to_network(get_sock(), get_address()));
    test_connection(get_connection());
}

int WS::ConnectingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return connect(sock, (struct sockaddr *)&address, sizeof(address));
}
//
// Listening Socket
// 1/5/2026
//
// Web Server C++ Library
// ListeningSocket.cpp
//
// Mohamed Abutaleb
//

#include "ListeningSocket.hpp"

WS::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg) : BindingSocket(domain, service, protocol, port, interface)
{
    backlog = bklg;
}

// listen to a socket
int WS::ListeningSocket::start_listening()
{
    int listening = listen(get_sock(), backlog);
    test_connection(listening);
    return listening;
}

// accept a socket
int WS::ListeningSocket::accept_connection(struct sockaddr_in &client_address)
{
    socklen_t client_address_size = sizeof(client_address);
    int client_socket = accept(get_sock(), (struct sockaddr *)&client_address, &client_address_size);
    test_connection(client_socket);
    return client_socket;
}
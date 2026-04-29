//
// Simple Socket
// 27/04/2026
//
// SimpleSocket.cpp source file
// SimpleSocket.cpp
//
// Mohamed Abutaleb
//

#include "SimpleSocket.hpp"

// Constructor

WS::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
    // define address structure
    address.sin_addr.s_addr = htonl(interface);
    address.sin_family = domain;
    address.sin_port = htons(port);

    // establish socket
    sock = socket(domain, service, protocol);
    test_connection(sock);
}

// Test connection

void WS::SimpleSocket::test_connection(int item_to_test)
{
    if (item_to_test < 0)
    {
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}

// getters

struct sockaddr_in WS::SimpleSocket::get_address()
{
    return address;
}

int WS::SimpleSocket::get_sock()
{
    return sock;
}

int WS::SimpleSocket::get_connection()
{
    return connection;
}

// setters
void WS::SimpleSocket::set_connection(int con)
{
    connection = con;
}
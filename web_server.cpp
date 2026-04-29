//
// Web Server
// 27/04/2026
//
// Web Server source file
// web_server.cpp
//
// Mohamed Abutaleb
//

#include "web_server.hpp"

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

    // establish connection
    connection = connect_to_network(sock, address);
    test_connection(connection);
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
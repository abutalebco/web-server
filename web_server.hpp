//
// Web Server
// 27/04/2026
//
// Web Server C++ Library
// web_server.hpp
//
// Mohamed Abutaleb
//

#ifndef web_server_hpp
#define web_server_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <iostream>

namespace WS
{
    class SimpleSocket
    {
    private:
        struct sockaddr_in address;
        int sock;
        int connection;

    public:
        // Constructor
        SimpleSocket(int domain, int service, int protocol, int port, u_long interface);

        // virtual function to connect to a network
        virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;

        // function to test connection
        void test_connection(int);

        // getters
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();
    };
}

#endif /* web_server_hpp */
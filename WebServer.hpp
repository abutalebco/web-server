//
// Web Server
// 1/5/2026
//
// Web Server C++ Library
// WebServer.hpp
//
// Mohamed Abutaleb
//

#pragma once
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
#include <iostream>

#include "sockets/ListeningSocket.hpp"

namespace WS
{
    class WebServer
    {
    private:
        ListeningSocket listener;
        int port;

    public:
        explicit WebServer(int p)
            : listener(AF_INET, SOCK_STREAM, 0, p, INADDR_ANY, 10), port(p) {}
        void start()
        {
            listener.start_listening();
            std::cout << "[TCP] Listening on port " << port << "\n";
            while (true)
            {
                sockaddr_in client_addr{};
                int client_fd = listener.accept_connection(client_addr);
                std::cout << "[TCP] Client connected: "
                          << inet_ntoa(client_addr.sin_addr)
                          << ":" << ntohs(client_addr.sin_port) << "\n";
                while (true)
                {
                    char buffer[1024];
                    std::memset(buffer, 0, sizeof(buffer));
                    int bytes_read = recv(client_fd, buffer, sizeof(buffer) - 1, 0);
                    if (bytes_read == 0)
                    {
                        std::cout << "[TCP] Client Disconnected\n";
                        break;
                    }
                    if (bytes_read > 0)
                    {
                        std::cout << "[TCP] Received (" << bytes_read << " bytes):\n";
                        std::cout << buffer << "\n";
                    }
                    // Raw TCP reply (can be plain text)
                    const char *reply = "TCP server received your message.\n";
                    send(client_fd, reply, std::strlen(reply), 0);
                }
                close(client_fd);
            }
        }
    };
}
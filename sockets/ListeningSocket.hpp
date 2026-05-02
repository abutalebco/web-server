//
// Listening Socket
// 1/5/2026
//
// Web Server C++ Library
// ListeningSocket.hpp
//
// Mohamed Abutaleb
//

#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>

#include "BindingSocket.hpp"

namespace WS
{
    class ListeningSocket : public BindingSocket
    {
    private:
        int backlog;

    public:
        ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
        int start_listening();
        int accept_connection(struct sockaddr_in &client_address);
    };
}

#endif /* ListeningSocket_hpp */
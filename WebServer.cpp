//
// Web Server
// 1/5/2026
//
// Web Server C++ Library
// WebServer.cpp
//
// Mohamed Abutaleb
//

#include "WebServer.hpp"

int main()
{
    WS::WebServer server(8080);
    server.start();
    return 0;
}
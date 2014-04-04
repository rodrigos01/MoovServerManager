#ifndef SERVERMANAGER_H
#define SERVERMANAGER_H

#include "serverlist.h"

class ServerManager
{

private:
    ServerList servers;

public:
    ServerManager();

public:
    void addServer(Server *server);
    void removeServer(Server server);
};

#endif // SERVERMANAGER_H

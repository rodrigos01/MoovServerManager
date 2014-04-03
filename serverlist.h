#ifndef SERVERLIST_H
#define SERVERLIST_H
#include "server.h"

class ServerList
{
public:
    ServerList();
    void add(Server *server);
    void remove(Server server);

private:
    Server *list;
    int size;
    int pointer;
};

#endif // SERVERLIST_H

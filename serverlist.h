#ifndef SERVERLIST_H
#define SERVERLIST_H
#include "server.h"

class ServerList
{
public:
    ServerList();
    void add(Server *server);
    Server get(int index);
    Server reset();
    Server next();
    Server current();
    Server prev();
    Server end();
    void remove(Server server);

private:
    void showItems();

    Server *list;
    int size;
    int pointer;
};

#endif // SERVERLIST_H
